// Basic (& silly) program to produce a small genlevel ntuple, and a bunch of gen level plots
// Useful for debugging
// FSA independent

#include "FWCore/Framework/interface/EDFilter.h"
#include "FWCore/Utilities/interface/InputTag.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "FWCore/Framework/interface/MakerMacros.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/MessageLogger/interface/MessageLogger.h"
#include "DataFormats/Common/interface/Handle.h"

#include "SimDataFormats/GeneratorProducts/interface/LHEEventProduct.h"
#include "FWCore/ServiceRegistry/interface/Service.h"
#include "CommonTools/UtilAlgos/interface/TFileService.h"
#include "DataFormats/HepMCCandidate/interface/GenParticle.h"
//#include "DataFormats/HepMCCandidate/interface/GenEventInfoProduct.h"
//#include "SimDataFormats/GeneratorProducts/interface/GenEventInfoProduct.h"


// system include files
#include <memory>

// user include files
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/EDFilter.h"

#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/MakerMacros.h"

#include "FWCore/Utilities/interface/InputTag.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "Math/GenVector/LorentzVector.h"

#include "CLHEP/Vector/LorentzVector.h"
#include "TLorentzVector.h"

#include <iostream>


using namespace edm;
using namespace std;
using namespace reco;
//using namespace Math;


//#include "SimDataFormats/GeneratorProducts/interface/GenEventInfoProduct.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TTree.h"

#include "TFile.h"
#include "TRandom.h"

#include <fstream>


class BasicGenPlotter_WZ : public edm::EDFilter {

public:
  BasicGenPlotter_WZ (const edm::ParameterSet &);
  virtual bool filter(edm::Event&, const edm::EventSetup&);
  virtual void beginJob();
  virtual void endJob();
private:
  //  edm::InputTag GenParticleTag_;
  //  edm::InputTag genEventInfoProductTag_;

  edm::EDGetTokenT<LHEEventProduct>                lheEventLabel_;
  //  double minPtThreshold_;


  // For Pythia8
  /*
  bool skipMPI_;
  bool skipInitialStateShowers_;
  bool skipFinalStateShowers_;
  bool skipBeamRemnant_;
  bool skipIntermediateHadronization_;
  bool skipDecayProcess_;
  */

  TTree* tree;

  std::map<std::string,TH1D*> h1_;
  std::map<std::string,TH2D*> h2_;



  double totalXsec=0.;

  std::vector<Float_t>* evgenWeight_;

  std::vector<Float_t>* pts_;
  std::vector<Float_t>* pxs_;
  std::vector<Float_t>* pys_;
  std::vector<Float_t>* pzs_;
  std::vector<Float_t>* Es_;

  std::vector<Float_t>* etas_;
  std::vector<Float_t>* phis_;
  std::vector<Float_t>* masses_;
  std::vector<Int_t>* statuses_;
  std::vector<Long_t>* pdgIds_;
  std::vector<Long_t>* pdgStatus_;
  std::vector<Int_t>* motherStatuses_;
  std::vector<Float_t>* motherpt_;
  std::vector<Float_t>* mothereta_;
  std::vector<Long_t>* motherPdgIds_;
  std::vector<Int_t>* numberOfDaughters_;

  ULong_t event_;

  double evx1_,evx2_,evqscale_,evpthat_;
  ULong_t evid1_,evid2_;

  double Lumi_,Event_,Run_;

  double nall;
  int NnoWZ=0;
  double nsel;

  int N_l;

};

BasicGenPlotter_WZ::BasicGenPlotter_WZ( const ParameterSet & cfg ) {
  //  genEventInfoProductTag_             = consumes<LHEEventProduct>               (cfg.getUntrackedParameter<edm::InputTag>("genEventInfoProductTag", edm::InputTag("source")));
  // lheEventLabel_             = consumes<LHEEventProduct>               (ps.getParameter<InputTag>("LHEEventLabel"));
  //  genEventInfoProductTag_             = consumes<LHEEventProduct>               (cfg.getParameter<InputTag>("LHEEventLabel"));
  
  lheEventLabel_             = consumes<LHEEventProduct>               (cfg.getParameter<InputTag>("LHEEventLabel"));
}

/*
BasicGenPlotter_WZ::BasicGenPlotter_WZ( const ParameterSet & cfg ) :
  //      GenParticleTag_(cfg.getUntrackedParameter<edm::InputTag> ("GenTag", edm::InputTag("genParticles"))),
  //      genEventInfoProductTag_(cfg.getUntrackedParameter<edm::InputTag>("genEventInfoProductTag", edm::InputTag("source")))
    genEventInfoProductTag_             = consumes<LHEEventProduct>               (cfg.getUntrackedParameter<edm::InputTag>("genEventInfoProductTag", edm::InputTag("source")))
      //      genEventInfoProductTag_( cfg.getParameter<InputTag>( "src" ) ),
      //      minPtThreshold_(cfg.getUntrackedParameter<double> ("MinPtThreshold",1)),
      //      skipMPI_(cfg.getUntrackedParameter<bool> ("SkipMPI",false)),
      //     skipInitialStateShowers_(cfg.getUntrackedParameter<bool> ("SkipInitialStateShowers",false)),
      //      skipFinalStateShowers_(cfg.getUntrackedParameter<bool> ("SkipFinalStateShowers",false)),
      //      skipBeamRemnant_(cfg.getUntrackedParameter<bool> ("SkipBeamRemnant",false)),
      //      skipIntermediateHadronization_(cfg.getUntrackedParameter<bool> ("SkipIntermediateHadronization",false)),
      //      skipDecayProcess_(cfg.getUntrackedParameter<bool> ("SkipDecayProcess",false))
{
  //  genEventInfoProductTag_             = consumes<LHEEventProduct>               (ps.getParameter<InputTag>("LHEEventLabel"));
  //  genEventInfoProductTag_             = consumes<LHEEventProduct>               (cfg.getUntrackedParameter<edm::InputTag>("genEventInfoProductTag", edm::InputTag("source")));
}

*/

void BasicGenPlotter_WZ::beginJob() {

 
      nall=0;
      N_l=0;
      nsel=0;	

      edm::Service<TFileService> fs;
      tree = fs->make<TTree>("Ntuple", "Ntuple");

      /*
      evx1_ = new std::vector<Float_t>();
      evx2_ = new std::vector<Float_t>();
      evid1_ = new std::vector<Long_t>();
      evid2_ = new std::vector<Long_t>();
      evgenWeight_ = new std::vector<Float_t>();
      evqscale_ = new std::vector<Float_t>();
      evpthat_ = new std::vector<Float_t>();
      */

      evgenWeight_ = new std::vector<Float_t>();

      pts_ = new std::vector<Float_t>();
      pxs_ = new std::vector<Float_t>();
      pys_ = new std::vector<Float_t>();
      pzs_ = new std::vector<Float_t>();
      Es_ = new std::vector<Float_t>();

      etas_ = new std::vector<Float_t>();
      phis_ = new std::vector<Float_t>();
      masses_ = new std::vector<Float_t>();
      pdgIds_ = new std::vector<Long_t>();
      pdgStatus_ = new std::vector<Long_t>();
      statuses_ = new std::vector<Int_t>();
      motherStatuses_ = new std::vector<Int_t>();
      motherPdgIds_ = new std::vector<Long_t>();
      motherpt_ = new std::vector<Float_t>();
      mothereta_ = new std::vector<Float_t>();
      numberOfDaughters_ = new std::vector<Int_t>();

      tree->Branch("N_leptons",  &N_l, "N_leptons/I");

      tree->Branch("evx1",  &evx1_, "evx1/D");
      tree->Branch("evx2",  &evx2_, "evx2/D");
      tree->Branch("evid1", &evid1_,"evid1/I");
      tree->Branch("evid2", &evid2_,"evid2/I");

      tree->Branch("evgenWeight", "std::vector<float>", &evgenWeight_);
 
      tree->Branch("evqscale",  &evqscale_, "evqscale/D");
      tree->Branch("evpthat",  &evpthat_, "evpthat/D");

      tree->Branch("lumi",  &Lumi_, "lumi/D");
      tree->Branch("event",  &Event_, "event/D");
      tree->Branch("run",  &Run_, "run/D");

      tree->Branch("pt", "std::vector<float>", &pts_);
      tree->Branch("px", "std::vector<float>", &pxs_);
      tree->Branch("py", "std::vector<float>", &pys_);
      tree->Branch("pz", "std::vector<float>", &pzs_);
      tree->Branch("E", "std::vector<float>", &Es_);

      tree->Branch("eta", "std::vector<float>", &etas_);
      tree->Branch("phi", "std::vector<float>", &phis_);
      tree->Branch("mass", "std::vector<float>", &masses_);
      tree->Branch("status", "std::vector<int>", &statuses_);
      tree->Branch("pdgId", "std::vector<long>", &pdgIds_);
      tree->Branch("pdgStatus", "std::vector<long>", &pdgStatus_);
      tree->Branch("motherStatus", "std::vector<int>", &motherStatuses_);
      tree->Branch("motherpt", "std::vector<float>", &motherpt_);
      tree->Branch("mothereta", "std::vector<float>", &mothereta_);
      tree->Branch("motherPdgId", "std::vector<long>", &motherPdgIds_);
      tree->Branch("numberOfDaughters", "std::vector<int>", &numberOfDaughters_);

      tree->Branch("evt", &event_, "evt/l");


}

void BasicGenPlotter_WZ::endJob() {
     cout<<"********************************************************************"<<endl;
     cout<<"GEN LEVEL FILTERING"<<endl<<endl;
     cout<<"Total Analyzed =   "<<nall<<endl;
     cout<<"LHE Selection  =   "<<nsel<<endl;
     cout<<"********************************************************************"<<endl;
     cout << "NnoWZ= "<< NnoWZ<< endl;
     cout << " xsec after pythia= "<< totalXsec << endl;


}

bool BasicGenPlotter_WZ::filter (Event & ev, const EventSetup &) {


  nall++;

  bool found=true;

  edm::EventID id = ev.id();
  Lumi_ = id.luminosityBlock();
  Run_ = id.run();
  Event_ = id.event();

  N_l=0;
      
  /*
  edm::Handle<LHEEventProduct> genEventInfoProd; // for GEN only
  ev.getByLabel(genEventInfoProductTag_, genEventInfoProd);
  */

  edm::Handle<LHEEventProduct> lheEventProduct;
  ev.getByToken(lheEventLabel_, lheEventProduct);
	

  //  iEvent.getByToken( src_ , EvtHandle ) ;

  //  cout << " gen event: valid  ..."<< endl;
  if(lheEventProduct.isValid())
    {

      evgenWeight_->clear();

      //      evgenWeight_ = lheEventProduct->weights();
      //      evgenWeight_ = lheEventProduct->weight();
      //     double weight=lheEventProduct->weight();
      //      double weight=lheEventProduct->weights();
      if(lheEventProduct->weights().size() > 0)
	for ( int i=0;i<int(lheEventProduct->weights().size());i++){
	  //	  double weight=lheEventProduct->weights().at(0).wgt;
	  //	  cout << "weight: "<<i << "\t "<< lheEventProduct->weights().at(i).wgt<<endl;
	  evgenWeight_->push_back(lheEventProduct->weights().at(i).wgt);
	}
	  totalXsec+=lheEventProduct->weights().at(0).wgt;
      /*
      if(lheEventProduct->weights().size() > 0)
	for (int i=0;i<lheEventProduct->weights().size();i++)
	  double weight=lheEventProduct->weights().at(0).wgt;
      */
	  //	  double weight=lheEventProduct->wgt(weights().at(0));
      //	  double weight=lheEventProduct->weights()[0];
      //	  evgenWeight_->push_back(lheEventProduct->weights()[i]);
      
      
      //      cout << "event weight: "<<evgenWeight_ << endl;
      //      evqscale_ = lheEventProduct->qScale();
      if(lheEventProduct->pdf())
	{
	  evx1_  = lheEventProduct->pdf()->x.first;
	  evx2_  = lheEventProduct->pdf()->x.second;
	  evid1_ = lheEventProduct->pdf()->id.first;
	  evid2_ = lheEventProduct->pdf()->id.second;
	}
      //      if(lheEventProduct->binningValues().size()>0) evpthat_ = lheEventProduct->binningValues()[0];
    }


  const lhef::HEPEUP hepeup_ = lheEventProduct->hepeup();

  TLorentzVector Zl1_vector,Zl2_vector,Z_vector;
  TLorentzVector Wl1_vector,Wl2_vector,W_vector;
  
  const int nup_ = hepeup_.NUP; 
  const std::vector<int> idup_ = hepeup_.IDUP;
  const std::vector<int> istup_ = hepeup_.ISTUP;
  const std::vector< std::pair<int,int> > mothup_ = hepeup_.MOTHUP;
  const std::vector<lhef::HEPEUP::FiveVector> pup_ = hepeup_.PUP;
  
  unsigned int cLep_Z = 0;
  unsigned int cLep_W = 0;
  int netCharge = 0; 

//  int leptonID_=11;
  bool verbose_=false;

  bool found_Z=false;
  bool found_Zl1=false;
  bool found_Zl2=false;
  bool found_W=false;
  bool found_Wl1=false;
  bool found_Wl2=false;


  pts_->clear();
  pxs_->clear();
  pys_->clear();
  pzs_->clear();
  Es_->clear();

  etas_->clear();
  phis_->clear();
  masses_->clear();
  statuses_->clear();
  pdgIds_->clear();
  pdgStatus_->clear();
  numberOfDaughters_->clear();
  motherStatuses_->clear();
  motherPdgIds_->clear();
  motherpt_->clear();
  mothereta_->clear();
  
  for ( unsigned int icount = 0 ; icount < (unsigned int)nup_; icount++ ) {

    //    cout <<" icount: "<< icount<< " E size: "<<Es_->size() << endl;

    TLorentzVector P;
    //        cout << "test 0"<< endl;
    P.SetPxPyPzE((pup_[icount])[0],(pup_[icount])[1],(pup_[icount])[2],(pup_[icount])[3]);


    //    cout << "test 0a"<< endl;
    
    double pt=0.;
    double eta=-10000.;
    if (pup_[icount][0]>0. or pup_[icount][1]>0.) {
      //      cout <<pup_[icount][0]<<" "<<  pup_[icount][1]  << endl;
      pt=sqrt(pup_[icount][0]*pup_[icount][0]+ pup_[icount][1]*pup_[icount][1]) ;
      //      cout <<pup_[icount][0]<<" "<<  pup_[icount][1]<<" "<< pt  << endl;
      if (pt>0.01)
	eta=P.Eta();
    }

   
    pts_->push_back(pt);
    //   cout << "   test 0aa"<< endl;
    pxs_->push_back( pup_[icount][0]);
    pys_->push_back( pup_[icount][1]);
    pzs_->push_back( pup_[icount][2]);
    Es_->push_back( pup_[icount][3]);
    /*
    cout << " pt: "<< P.Pt() <<  endl;
    cout << " mass: "<< P.M() <<  endl;
    cout << " eta: "<< P.Eta() <<  endl;
    */
    

    //    cout << "  test 0bb"<< endl;
    etas_->push_back(eta);
    phis_->push_back(P.Phi());
    masses_->push_back(P.M());
    
    pdgIds_->push_back(idup_[icount]);
    pdgStatus_->push_back(istup_[icount]);

    //        cout << "test 0c"<< endl;
    int mother_pid=-10000.;

    if ( mothup_[icount].first != 0 ) 
      mother_pid=idup_[mothup_[icount].first-1];
    
    motherPdgIds_->push_back(mother_pid);
 
    //     cout << "test 1"<< endl;
   
    if ( std::abs(idup_[icount]) == 11 or std::abs(idup_[icount]) == 13  ) { 
      if ( mothup_[icount].first != 0 ) {
        if ( idup_[mothup_[icount].first-1] == 23 or  idup_[mothup_[icount].first-1] == 22 ) { 
	  cLep_Z++; 
	  netCharge += idup_[icount]; 
	  if (cLep_Z==1) {
	    found_Zl1=true;
	    Zl1_vector.SetPxPyPzE((pup_[icount])[0],(pup_[icount])[1],(pup_[icount])[2],(pup_[icount])[3]);
	  }
	  if (cLep_Z==2) {
	    found_Zl2=true;
	    Zl2_vector.SetPxPyPzE((pup_[icount])[0],(pup_[icount])[1],(pup_[icount])[2],(pup_[icount])[3]);
	  }
	}
      }
    }
    //        cout << "test 2"<< endl;
    if ( std::abs(idup_[icount]) == 23 or std::abs(idup_[icount]) == 22  ) { 
      Z_vector.SetPxPyPzE((pup_[icount])[0],(pup_[icount])[1],(pup_[icount])[2],(pup_[icount])[3]);
      found_Z=true;
    }

    //        cout << "test 3"<< endl;
    // select W decay products
    if ( mothup_[icount].first != 0 ) {
      if ( std::abs(idup_[mothup_[icount].first-1]) == 24 ) { 
	cLep_W++; 
	netCharge += idup_[icount]; 
	//	if (cLep_W==1) {
	if (std::abs(idup_[icount]) == 11 or std::abs(idup_[icount]) == 13 or std::abs(idup_[icount]) == 15 ) {
	  found_Wl1=true;
	  Wl1_vector.SetPxPyPzE((pup_[icount])[0],(pup_[icount])[1],(pup_[icount])[2],(pup_[icount])[3]);
	}
	//	if (cLep_W==2) {
	if (std::abs(idup_[icount]) == 12 or std::abs(idup_[icount]) == 14 or std::abs(idup_[icount]) == 16 ) {
	  found_Wl2=true;
	  Wl2_vector.SetPxPyPzE((pup_[icount])[0],(pup_[icount])[1],(pup_[icount])[2],(pup_[icount])[3]);
	}
      }
    }

    //        cout << "test 4"<< endl;
    // select W 
    if ( std::abs(idup_[icount]) == 24  ) { 
      found_W=true;
      W_vector.SetPxPyPzE((pup_[icount])[0],(pup_[icount])[1],(pup_[icount])[2],(pup_[icount])[3]);
    }
    //        cout << "test 4b"<< endl;

    
  }
  
  //      cout << "test  5"<< endl;
  //  if ( cLep == 2 && netCharge == 0 ) { 
    //    accepted = true; 
  if (
      !(
	found_W && found_Z 
	&& found_Wl1 && found_Wl2
	&& found_Zl1 && found_Zl2
	)
      ){
    NnoWZ++;
/*
	   cout << " -------> problem (not found WZ(or Wgamma)->lnull !):  "
	 << "W: "
	 <<found_W<<"\t" 
	 <<found_Wl1<<"\t" 
	 <<found_Wl2<<"\t" 
	 << "\tZ: "
	 <<found_Z<<"\t" 
	 <<found_Zl1<<"\t" 
	 <<found_Zl2<<"\t" 
	 << endl;
*/
    if (verbose_) {
      for ( unsigned int icount = 0 ; icount < (unsigned int)nup_; icount++ ) {
//	std::cout << "# " << icount << " " << idup_[icount] << " " << (pup_[icount])[0] << " " << (pup_[icount])[1] << " " << (pup_[icount])[2] << " " << (pup_[icount])[3] << " " << (pup_[icount])[4] << std::endl;
	if ( mothup_[icount].first != 0 ) {
//	  cout << " mother: " << idup_[mothup_[icount].first-1]<< endl;
	  //	  if ( idup_[mothup_[icount].first-1] == 23 or  idup_[mothup_[icount].first-1] == 22 ) { 
	    
	  //	  }
	}
	
      }
      /*
      if (
	  !(
	  found_W && found_Z 
	  && found_Wl1 && found_Wl2
	  && found_Zl1 && found_Zl2
	   )
	  ){
      */
      }
    }

  tree->Fill();

    
    //  }


  event_=nall;
  
  if (found) nsel++;
  return found;
}




//#include "FWCore/Framework/interface/MakerMacros.h"

DEFINE_FWK_MODULE(BasicGenPlotter_WZ);
