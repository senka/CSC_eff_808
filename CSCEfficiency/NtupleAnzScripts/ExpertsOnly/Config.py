########################
# User Specifications  #
########################
RunOnMC=False

from ROOT import *

RunOnNewAlign=True
RunLCTeff=False
Resonance="Z"#options are "Z","JPsi"
#Group="Chambers"#options are "Chambers","Stations","pt","eta","phi","Stationspt","Stationseta","Stationsphi" 
Group="Stationsphi"#options are "Chambers","Stations","pt","eta","phi","Stationspt","Stationseta","Stationsphi"
CalculateSystematic=True#whether calculate the systematic for data; for MC, it will be turned off automatically
DataPileupRootFileName="CMSRun2012C_Cert_201554-202305_8TeV_PromptReco_Collisions12_JSON_MuonPhys.root"
pileup_mc=[2.344E-05,2.344E-05,2.344E-05,2.344E-05,4.687E-04,4.687E-04,7.032E-04,9.414E-04,1.234E-03,1.603E-03,2.464E-03,3.250E-03,5.021E-03,6.644E-03,8.502E-03,1.121E-02,1.518E-02,2.033E-02,2.608E-02,3.171E-02,3.667E-02,4.060E-02,4.338E-02,4.520E-02,4.641E-02,4.735E-02,4.816E-02,4.881E-02,4.917E-02,4.909E-02,4.842E-02,4.707E-02,4.501E-02,4.228E-02,3.896E-02,3.521E-02,3.118E-02,2.702E-02,2.287E-02,1.885E-02,1.508E-02,1.166E-02,8.673E-03,6.190E-03,4.222E-03,2.746E-03,1.698E-03,9.971E-04,5.549E-04,2.924E-04,1.457E-04,6.864E-05,3.054E-05,1.282E-05,5.081E-06,1.898E-06,6.688E-07,2.221E-07,6.947E-08,2.047E-08]
#from SimGeneral.MixingModule.mix_2012_Startup_50ns_PoissonOOTPU_cfi import mix
#pileup_mc=mix.input.nbPileupEvents.probValue
TreeName="Fraction"
sampleweight=1.
ptbin=[3,6,10,20,40,60,80,100,200,500,1000] #pt binning
PVbin=[0,5,10,15,20,25,50] #pt binning

pbin=[3,6,10,20,40,60,80,100,200,500,1000] #pt binning

#etabin1=[-2.4,-2.1,-1.6,-1.2,-1.05,-0.9]
#etabin2=[-2.4,-2.1,-1.6,-1.2,-1.05,-0.9]
#etabin3=[-2.4,-2.1,-1.6,-1.2,-1.05]
#etabin4=[-2.4,-2.1,-1.6,-1.2,-1.05]

#etabin1=[0.9, 1.05, 1.2, 1.6, 2.1, 2.4]
#etabin2=[0.9, 1.05, 1.2, 1.6, 2.1, 2.4]
#etabin3=[1.05, 1.2, 1.6, 2.1, 2.4]
#etabin4=[1.05, 1.2, 1.6, 2.1, 2.4]

#etabin1=[-2.4,-2.1,-1.6,-1.2,-1.05,-0.9,-0.6,-0.3,-0.2,0.2, 0.3, 0.6, 0.9, 1.05, 1.2, 1.6, 2.1, 2.4]
#etabin2=[-2.4,-2.1,-1.6,-1.2,-1.05,-0.9,-0.6,-0.3,-0.2,0.2, 0.3, 0.6, 0.9, 1.05, 1.2, 1.6, 2.1, 2.4]
#etabin3=[-2.4,-2.1,-1.6,-1.2,-1.05,-0.9,-0.6,-0.3,-0.2,0.2, 0.3, 0.6, 0.9, 1.05, 1.2, 1.6, 2.1, 2.4]
#etabin4=[-2.4,-2.1,-1.6,-1.2,-1.05,-0.9,-0.6,-0.3,-0.2,0.2, 0.3, 0.6, 0.9, 1.05, 1.2, 1.6, 2.1, 2.4]

etabin1=[ 0,0.85,1.18,1.3,1.5,1.7,1.9,2.1,2.4 ] #station 1 eta binning 
etabin2=[ 0,0.95,1.2,1.4,1.6,1.8,2.0,2.2,2.4 ] #station 2 eta binning
etabin3=[ 0,0.9,1.08,1.3,1.5,1.72,1.9,2.2,2.4 ] #station 3 eta binning
etabin4=[ 0,0.9,1.15,1.4,1.6,1.78,2.0,2.2,2.4 ] #station 4 eta binning
phibin=[-0.0872664626+x*0.698131701 for x in range(10)] #phi binning: 18/36 chambers-->9bins, 0 deg points at ring 2, chamber 1 center

########################################################################################
# Temporary output files --- find enough space to have them (about the input file size)#
########################################################################################
import os
from ROOT import *
#import math
#import ROOT as root
dir_=os.getcwd().split("/")[-1]
TagProbeFitResult="TnP_"+dir_+"_"#Those files are the TagProbeFitTreeAnalyzer outputs.
if RunOnNewAlign:
  print "using NEW ALIGN: OUTPUT TO: 2015B_newAlign/"
  TagProbeFitResult="2015B_newAlign/TnP_"+dir_+"_"#Those files are the TagProbeFitTreeAnalyzer outputs.
  if RunLCTeff:
      print "using NEW ALIGN: OUTPUT TO: 2015B_newAlign_LCT/"
      TagProbeFitResult="2015B_newAlign_LCT/TnP_"+dir_+"_"#Those files are the TagProbeFitTreeAnalyzer outputs.

else:
  TagProbeFitResult="2015B_oldAlign/TnP_"+dir_+"_"#Those files are the TagProbeFitTreeAnalyzer outputs.
  print "using OLD ALIGN: OUTPUT TO: 2015B_oldAlign/"

ResultPlotsFileName="resultplots_"+dir_+".root"#This is the file name of the final result. The path will be Prefix+ResultPlotsFileName. Prefix is the input argument of the Step2_PlotAll.py.
#TemporaryOutputFile="/tmp/Tmp_"+dir_+".root"#New branches will be added to the orginal tree and saved in this file. The size is about the same with input file size.
TemporaryOutputFile="/nfs_scratch/senka/CSCeff_output/fromConfig/Tmp_"+dir_+".root"
###########################################################
# A normal user is not supposed to change anything below  #
###########################################################
#---note: The logical expressions are in C style

#DenominatorRequire="(CSCProjDistEdge#<-5 &&  CSCProjDistEdge#> -100 && dRTkMu# < 10. && dRTkMu# > 0.2 && CSCDyProjHVGap#>1. && CSCDyProjHVGap#>3*CSCDyErrProjHVGap# && CSCProjDistEdge#<-3*CSCProjDistErrEdge# )"#for seg efficiency
DenominatorRequire="(CSCProjDistEdge#<-5 &&  CSCProjDistEdge#> -100 && dRTkMu# < 10. && dRTkMu# > 0.2 && CSCDyProjHVGap#>1. && CSCDyProjHVGap#>3*CSCDyErrProjHVGap# && CSCProjDistEdge#<-3*CSCProjDistErrEdge# && !trackVeto_isClosestToLCT )&&( (run_number==277981 && (( LumiBlock >= 82 && LumiBlock <=82) || (LumiBlock >= 84 && LumiBlock <=158))) || (run_number==277991 && (( LumiBlock >= 1 && LumiBlock <=85))) || (run_number==277992 && (( LumiBlock >= 1 && LumiBlock <=312))) || (run_number==278017 && (( LumiBlock >= 77 && LumiBlock <=589))) || (run_number==278018 && (( LumiBlock >= 1 && LumiBlock <=422) || (LumiBlock >= 424 && LumiBlock <=615) || (LumiBlock >= 617 && LumiBlock <=627) || (LumiBlock >= 642 && LumiBlock <=1011) || (LumiBlock >= 1020 && LumiBlock <=1181))) || (run_number==278167 && (( LumiBlock >= 87 && LumiBlock <=394) || (LumiBlock >= 397 && LumiBlock <=1153) || (LumiBlock >= 1155 && LumiBlock <=1707) || (LumiBlock >= 1709 && LumiBlock <=2258))) || (run_number==278175 && (( LumiBlock >= 1 && LumiBlock <=88))) || (run_number==278193 && (( LumiBlock >= 77 && LumiBlock <=231))) || (run_number==278239 && (( LumiBlock >= 76 && LumiBlock <=339) || (LumiBlock >= 341 && LumiBlock <=558) || (LumiBlock >= 560 && LumiBlock <=740))) || (run_number==278240 && (( LumiBlock >= 1 && LumiBlock <=1121) || (LumiBlock >= 1123 && LumiBlock <=1296) || (LumiBlock >= 1299 && LumiBlock <=1309))) || (run_number==278273 && (( LumiBlock >= 75 && LumiBlock <=110))) || (run_number==278274 && (( LumiBlock >= 1 && LumiBlock <=18) || (LumiBlock >= 20 && LumiBlock <=85))) || (run_number==278288 && (( LumiBlock >= 67 && LumiBlock <=81))) || (run_number==278289 && (( LumiBlock >= 1 && LumiBlock <=25) || (LumiBlock >= 27 && LumiBlock <=52))) || (run_number==278290 && (( LumiBlock >= 1 && LumiBlock <=11))) || (run_number==278308 && (( LumiBlock >= 87 && LumiBlock <=587) || (LumiBlock >= 589 && LumiBlock <=680) || (LumiBlock >= 683 && LumiBlock <=1410) || (LumiBlock >= 1413 && LumiBlock <=1875) || (LumiBlock >= 1880 && LumiBlock <=1880))) || (run_number==278309 && (( LumiBlock >= 1 && LumiBlock <=10))) || (run_number==278310 && (( LumiBlock >= 1 && LumiBlock <=32) || (LumiBlock >= 34 && LumiBlock <=709))) || (run_number==278315 && (( LumiBlock >= 73 && LumiBlock <=767))) || (run_number==278345 && (( LumiBlock >= 84 && LumiBlock <=831))) || (run_number==278346 && (( LumiBlock >= 1 && LumiBlock <=117))) || (run_number==278349 && (( LumiBlock >= 1 && LumiBlock <=629) || (LumiBlock >= 632 && LumiBlock <=633))) || (run_number==278366 && (( LumiBlock >= 1 && LumiBlock <=453))) || (run_number==278406 && (( LumiBlock >= 85 && LumiBlock <=1682))) || (run_number==278509 && (( LumiBlock >= 91 && LumiBlock <=1557))) || (run_number==278769 && (( LumiBlock >= 75 && LumiBlock <=104))) || (run_number==278770 && (( LumiBlock >= 1 && LumiBlock <=767))) || (run_number==278801 && (( LumiBlock >= 48 && LumiBlock <=85))) || (run_number==278802 && (( LumiBlock >= 1 && LumiBlock <=17))) || (run_number==278803 && (( LumiBlock >= 1 && LumiBlock <=87) || (LumiBlock >= 91 && LumiBlock <=133) || (LumiBlock >= 135 && LumiBlock <=297) || (LumiBlock >= 299 && LumiBlock <=323))) || (run_number==278804 && (( LumiBlock >= 1 && LumiBlock <=4))) || (run_number==278805 && (( LumiBlock >= 3 && LumiBlock <=167) || (LumiBlock >= 170 && LumiBlock <=193) || (LumiBlock >= 196 && LumiBlock <=280) || (LumiBlock >= 283 && LumiBlock <=284) || (LumiBlock >=  288 && LumiBlock <=288))) || (run_number==278808 && (( LumiBlock >= 1 && LumiBlock <=1793))))"#for LCT efficiency, with closest to LCT requirement


#DenominatorRequire="( tracks_isTrackerMuTrk && tracks_numberOfMatches>0 && CSCProjDistEdge#<-5 &&  CSCProjDistEdge#> -100 && dRTkMu# < 10. && dRTkMu# > 0.2 && CSCDyProjHVGap#>1. && CSCDyProjHVGap#>3*CSCDyErrProjHVGap# && CSCProjDistEdge#<-3*CSCProjDistErrEdge# && !trackVeto_isClosestToLCT )"#for LCT efficiency, with closest to LCT requirement

# add run number cut!
#DenominatorRequire="(CSCProjDistEdge#<-5 &&  CSCProjDistEdge#> -100 && dRTkMu# < 10. && dRTkMu# > 0.2 && CSCDyProjHVGap#>1. && CSCDyProjHVGap#>3*CSCDyErrProjHVGap# && CSCProjDistEdge#<-3*CSCProjDistErrEdge# && run_number<258226 )"#for LCT efficiency, with closest to LCT requirement
#DenominatorRequire="(CSCProjDistEdge#<-5 &&  CSCProjDistEdge#> -100 && dRTkMu# < 10. && dRTkMu# > 0.2 && CSCDyProjHVGap#>1. && CSCDyProjHVGap#>3*CSCDyErrProjHVGap# && CSCProjDistEdge#<-3*CSCProjDistErrEdge# && run_number>258312 )"#for LCT efficiency, with closest to LCT requirement
#DenominatorRequire="(CSCProjDistEdge#<-5 &&  CSCProjDistEdge#> -100 && dRTkMu# < 10. && dRTkMu# > 0.2 && CSCDyProjHVGap#>1. && CSCDyProjHVGap#>3*CSCDyErrProjHVGap# && CSCProjDistEdge#<-3*CSCProjDistErrEdge# && !trackVeto_isClosestToLCT  && run_number<258226 )"#for LCT efficiency, with closest to LCT requirement


#DenominatorRequire="(CSCProjDistEdge#<-5 &&  CSCProjDistEdge#> -100 && dRTkMu# < 10. && dRTkMu# > 0.2 && CSCDyProjHVGap#>1. && CSCDyProjHVGap#>3*CSCDyErrProjHVGap# && CSCProjDistEdge#<-3*CSCProjDistErrEdge# )"#for LCT efficiency, with closest to LCT requirement
#DenominatorRequire="(run_number<259891 && CSCProjDistEdge#<-5 &&  CSCProjDistEdge#> -100 && dRTkMu# < 10. && dRTkMu# > 0.2 && CSCDyProjHVGap#>1. && CSCDyProjHVGap#>3*CSCDyErrProjHVGap# && CSCProjDistEdge#<-3*CSCProjDistErrEdge# && !trackVeto_isClosestToLCT )"#for LCT efficiency, with closest to LCT requirement
#DenominatorRequire="(CSCProjDistEdge#<-5 &&  CSCProjDistEdge#> -100 && dRTkMu# < 10. && dRTkMu# > 0.2 && CSCDyProjHVGap#>1. && CSCDyProjHVGap#>3*CSCDyErrProjHVGap# && CSCProjDistEdge#<-3*CSCProjDistErrEdge# && !trackVeto_isClosestToLCT )"#for LCT efficiency, with closest to LCT requirement

#v_tag=TLorentzVector(1.,1.,1.,1.)
#v_probe=TLorentzVector(1.,1.,1.,1.)
#deltaR=v_tag.DeltaR(v_probe)
#DenominatorRequire="(fabs(MuTagPhi-tracks_phi)>0.18 && !CSCCBad# && CSCProjDistEdge#<-5 &&  CSCProjDistEdge#> -100 && dRTkMu# < 10. && dRTkMu# > 0.2 && CSCDyProjHVGap#>1. && CSCDyProjHVGap#>3*CSCDyErrProjHVGap# && CSCProjDistEdge#<-3*CSCProjDistErrEdge# )"#for segment efficiency, without closest to LCT requirement
#DenominatorRequire="(tracks_isTrackerMuTrk && fabs(MuTagPhi-tracks_phi)>0.18 && !CSCCBad# && CSCProjDistEdge#<-5 &&  CSCProjDistEdge#> -100 && dRTkMu# < 10. && dRTkMu# > 0.2 && CSCDyProjHVGap#>1. && CSCDyProjHVGap#>3*CSCDyErrProjHVGap# && CSCProjDistEdge#<-3*CSCProjDistErrEdge# )"#for segment efficiency, without closest to LCT requirement

#if there is no LCT or segment, the distance values are filled as -9999.
ProbeSegment="( (CSCDxyTTSeg#<5. || CSCDxyTTSeg#<5*CSCDxyErrTTSeg#) && CSCDxyTTSeg#>0.)"# tight cut
ProbeLCT="( (CSCDxyTTLCT#<5. || CSCDxyTTLCT#<5*CSCDxyErrTTLCT#) && CSCDxyTTLCT#>0. )"# tight cut

#DenominatorRequire="( !CSCCBad# && CSCProjDistEdge#<-5 &&  CSCProjDistEdge#> -100 && dRTkMu# < 10. && dRTkMu# > 0.2 ) "#old one
#DenominatorRequire="( !CSCCBad# && CSCProjDistEdge#<-5 &&  CSCProjDistEdge#> -100 && dRTkMu# < 10. && CSCDyProjHVGap#>1. && CSCDyProjHVGap#>3*CSCyErrProjLc# && CSCProjDistEdge#<-3*CSCProjDistErrEdge# ) "# for calculate systematic: close-by muons
#ProbeSegment="( CSCDrTTSeg#<200. && CSCDrTTSeg#>0.)"# for calculate systematic: Segment to TT distance cut
#ProbeLCT="( CSCDrTTLCT#<200. && CSCDrTTLCT#>0. )"# for calculate systematic: LCT to TT distance cut
#ProbeSegment="( CSCDxyTTSeg#<40. && CSCDxyTTSeg#>0.)"#default
#ProbeLCT="( CSCDxyTTLCT#>0. )"#default


if Resonance is "Z":
  MCTruth="( MuTagtracktruth_type==11 && tracktruth_type==11 && ! MuTagtracktruth_isPileup && ! tracktruth_isPileup )"#both from Z
  InvariantMass="( invMass>75. )" #Z peak
elif Resonance is "JPsi":
  MCTruth="( MuTagtracktruth_type==12 && tracktruth_type==12 && ! MuTagtracktruth_isPileup && ! tracktruth_isPileup )"#both from JPsi
  InvariantMass="(invMass > 2.5 &&  invMass < 3.6)" # JPsi
else:
  print "Resonance=",Resonance," has not been programmed."
  import sys
  sys.exit()

# tracks_e
#MuTrackPairCut=InvariantMass+"&&"+"( iSameVtx && minDRHLTAllSingleMu < 0.01 && dRTkMu1 < 10. && dRTkMu1 > 0.2 ) "#default
#MuTrackPairCut=InvariantMass+"&&"+"( tracks_e > 8. && iSameVtx && minDRHLTAllSingleMu < 0.01 && dRTkMu1 < 10. && dRTkMu1 > 0.2 ) "#default
MuTrackPairCut=InvariantMass+"&&"+"( tracks_e > 8. && minDRHLTAllSingleMu < 0.01 && dRTkMu1 < 10. && dRTkMu1 > 0.2 ) "#default

#RemoveHVproblematicChambersPlus="!(CSCEndCapPlus && ((CSCRg1==4 && CSCCh1==17) || (CSCRg1==1 && CSCCh1==17) || (CSCRg1==1 && CSCCh1==31) || (CSCRg1==4 && CSCCh1==31) || (CSCRg1==2 && CSCCh1==13) || (CSCRg1==2 && CSCCh1==15) || (CSCRg1==2 && CSCCh1==21) || (CSCRg1==2 && CSCCh1==31) || (CSCRg1==3 && CSCCh1==11) || (CSCRg2==1 && CSCCh2==1) || (CSCRg2==1 && CSCCh2==3) || (CSCRg2==2 && CSCCh2==2) || (CSCRg2==2 && CSCCh2==5) || (CSCRg2==2 && CSCCh2==14) || (CSCRg2==2 && CSCCh2==15) || (CSCRg2==2 && CSCCh2==19) || (CSCRg3==1 && CSCCh3==7) || (CSCRg3==1 && CSCCh3==11) || (CSCRg3==2 && CSCCh3==19) || (CSCRg3==2 && CSCCh3==29) || (CSCRg4==1 && CSCCh4==15) || (CSCRg4==2 && CSCCh4==32) || (CSCRg1==2 && CSCCh1==36) || (CSCRg4==2 && CSCCh4==4) || (CSCRg4==2 && CSCCh4==17) || (CSCRg4==2 && CSCCh4==18) || (CSCRg4==2 && CSCCh4==34) || (CSCRg4==2 && CSCCh4==36) || (CSCRg4==2 && CSCCh4==26) || (CSCRg4==2 && CSCCh4==28) || (CSCRg3==2 && CSCCh3==21) || (CSCRg3==2 && CSCCh3==22) || (CSCRg3==2 && CSCCh3==23) || (CSCRg3==2 && CSCCh3==24) || (CSCRg3==2 && CSCCh3==25) || (CSCRg3==2 && CSCCh3==26) || (CSCRg3==1 && CSCCh3==11) || (CSCRg3==1 && CSCCh3==12) || (CSCRg3==1 && CSCCh3==13)))"
#RemoveHVproblematicChambersMinus="!(!CSCEndCapPlus && (( CSCRg1==1 && CSCCh1==33) || ( CSCRg1==4 && CSCCh1==33) || ( CSCRg1==1 && CSCCh1==5) || ( CSCRg1==4 && CSCCh1==5) || ( CSCRg2==1 && CSCCh2==3) || ( CSCRg1==2 && CSCCh1==33) || ( CSCRg2==1 && CSCCh2==18) || ( CSCRg2==2 && CSCCh2==3) || ( CSCRg3==1 && CSCCh3==9) || ( CSCRg3==1 && CSCCh3==13) || ( CSCRg4==1 && CSCCh4==1) || ( CSCRg4==1 && CSCCh4==11) || ( CSCRg4==1 && CSCCh4==15) || ( CSCRg4==2 && CSCCh4==1) || ( CSCRg4==2 && CSCCh4==8) || ( CSCRg4==2 && CSCCh4==34) || ( CSCRg1==1 && CSCCh1==19) || ( CSCRg1==4 && CSCCh1==19) || ( CSCRg1==2 && CSCCh1==22) || ( CSCRg3==1 && CSCCh3==18) || ( CSCRg4==2 && CSCCh4==2) || ( CSCRg4==2 && CSCCh4==6) || ( CSCRg4==2 && CSCCh4==10) || ( CSCRg4==2 && CSCCh4==26) || ( CSCRg3==2 && CSCCh3==29) || ( CSCRg4==2 && CSCCh4==6) || ( CSCRg4==2 && CSCCh4==10) || ( CSCRg4==2 && CSCCh4==28) || ( CSCRg4==2 && CSCCh4==29) || ( CSCRg4==2 && CSCCh4==30) || ( CSCRg2==2 && CSCCh2==1) || ( CSCRg3==2 && CSCCh3==17) || ( CSCRg2==1 && CSCCh2==17)))"

#MuTrackPairCut=MuTrackPairCut+" && "+RemoveHVproblematicChambersPlus+" && "+RemoveHVproblematicChambersMinus

if RunOnMC:
  CalculateSystematic=False

#from ROOT import *
#define the station loop here, content: (cut,legendname,color,station)

if "pt" not in Group:
  ptbin=[ptbin[0],ptbin[-1]]
if "PV" not in Group:
  PVbin=[PVbin[0],PVbin[-1]]

if "p" not in Group:
  pbin=[pbin[0],pbin[-1]]
if "eta" not in Group:
  etabin1=[etabin1[0],etabin1[-1]]
  etabin2=[etabin2[0],etabin2[-1]]
  etabin3=[etabin3[0],etabin3[-1]]
  etabin4=[etabin4[0],etabin4[-1]]
if "phi" not in Group:
  phibin=[phibin[0],phibin[-1]]

if "Stations" in Group:
  
  stations={
    1:("( CSCRg1==4 || CSCRg1==1 )","ME11",kRed,1),
    2:("( CSCRg1==4 )","ME11A",kMagenta,1),
    3:("( CSCRg1==1 )","ME11B",kRed-9,1),
    4:("(CSCRg1==2 || CSCRg1==3)","ME12+13",kBlack,1),
    5:("(CSCRg1==2 || CSCRg1==3 || CSCRg1==4 || CSCRg1==1)","ME1",kFuchsia,1),
    6:("CSCRg2","ME2",kRed,2),
    7:("CSCRg3","ME3",kGreen,3),
    8:("CSCRg4","ME4",kBlue,4)
    }

  """
  stations={
    1:("CSCRg1","ME1",1,1),
    2:("CSCRg2","ME2",1,2),
    3:("CSCRg3","ME3",1,3),
    4:("CSCRg4","ME4",1,4)
    }
  """
  """
  stations={
    1:("( CSCRg1==4 )","ME11A",1,1),
    2:("( CSCRg1==1 )","ME11B",1,1),
    3:("(CSCRg1==2 || CSCRg1==3)","ME12+13",1,1),
    4:("CSCRg2","ME2",1,2),
    5:("CSCRg3","ME3",1,3),
    6:("CSCRg4","ME4",1,4)
    }
  """
  """
  stations={
    1:("( CSCRg1==4 )","ME11A",kMagenta,1),
    2:("( CSCRg1==1 )","ME11B",kRed-9,1),
    3:("(CSCRg1==2 || CSCRg1==3)","ME12+13",kBlack,1),
    4:("CSCRg2==1","ME21",kRed,2),
    5:("CSCRg3==1","ME31",kGreen,3),
    6:("CSCRg4==1","ME41",kBlue,4),
    7:("CSCRg2==2","ME22",kOrange,2),
    8:("CSCRg3==2","ME32",kCyan,3),
    }
  """
  """
  stations={
    1:("CSCRg1==4&&CSCEndCapPlus","ME+11A",kCyan,1),
    2:("CSCRg1==1&&CSCEndCapPlus","ME+11B",kRed-9,1),
    3:("CSCRg1==4&&!CSCEndCapPlus","ME-11A",kGreen,1),
    4:("CSCRg1==1&&!CSCEndCapPlus","ME-11B",kRed,1)
    }
  
 
  stations={
    1:("( (CSCRg1==1 || CSCRg1==4) && abs(tracks_eta)>2.1 )","ME11A",kMagenta,1),
    2:("( (CSCRg1==1 || CSCRg1==4) && abs(tracks_eta)<=2.1 )","ME11B",kRed-9,1),
    3:("CSCRg2==1","ME21",kRed,2),
    4:("CSCRg3==1","ME31",kGreen,3),
    5:("CSCRg4==1","ME41",kBlue,4)
    }
  """
  n_stations=len(stations)
elif "Chambers" in Group:
  chambers=[]
  for ec_ in (True,False):
    for st_ in (1,2,3,4):
      for rg_ in range(1,5) if st_==1 else range(1,3):
        if st_!=1 and rg_==1: #ME21,31,41 have 18 chambers
          chambers_=range(1,19)
        elif st_==4 and rg_==2: #ME42 has 5 chambers on the plus side
          chambers_=range(1,37)
#          chambers_=(9,10,11,12,13) if ec_ else ()
        else: #ME11,12,13,22,32 have 36 chambers
          chambers_=range(1,37)
        for ch_ in chambers_:
          chambers.append( "ME%s%d_%d_%d"%( '+' if (ec_) else '-', st_, rg_, ch_ ) )
  n_chambers=len(chambers)
else:
  pass

def Getpuweight(DataPileupRootFileName_=DataPileupRootFileName,pileup_mc_=pileup_mc):
  pileup_file=TFile.Open(DataPileupRootFileName_,"read")
  pileup_data=pileup_file.Get("pileup")
  maxPU=len(pileup_mc_)
  puweight=[0]*maxPU
  renormalize=100/pileup_data.Integral()
  checkplot=TH1F("pileupweight","pileupweight",maxPU,0.,float(maxPU))
  for nPU in range(0,maxPU):
    if pileup_mc_[nPU]>0:
      puweight[nPU]=pileup_data.GetBinContent(pileup_data.FindBin(nPU))/pileup_mc_[nPU]*renormalize
      checkplot.SetBinContent(nPU,puweight[nPU])
  pileup_file.Close()
  return puweight

def ConvertCLogicalExp(Expression_):
  return Expression_.replace("&&"," and ").replace("||"," or ").replace("!="," is not ").replace("!"," not ")


print "Binning: \n\033[93m pt:",ptbin,"\n\033[95m Station 1 eta:",etabin1,"\n Station 2 eta:",etabin2,"\n Station 3 eta:",etabin3,"\n Station 4 eta:",etabin4,"\n \033[97mphi:",phibin,"\033[0m"

def Getch():
  import sys, tty, termios
  fd = sys.stdin.fileno()
  old_settings = termios.tcgetattr(fd)
  try:
    tty.setraw(sys.stdin.fileno())
    ch = sys.stdin.read(1)
  finally:
    termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)
  return ch
