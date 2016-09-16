void TracktoLCTYfull_2015all_sameYrange_fullIntegral()
{
//=========Macro generated from canvas: TracktoLCTYfull/TracktoLCTYfull
//=========  (Fri Aug  5 09:06:01 2016) by ROOT version6.06/01
   TCanvas *TracktoLCTYfull = new TCanvas("TracktoLCTYfull", "TracktoLCTYfull",0,0,500,500);
   gStyle->SetOptStat(0);
   TracktoLCTYfull->SetHighLightColor(2);
   TracktoLCTYfull->Range(-18125,-2.848556,13125,2.626708);
   TracktoLCTYfull->SetFillColor(0);
   TracktoLCTYfull->SetBorderMode(0);
   TracktoLCTYfull->SetBorderSize(2);
   TracktoLCTYfull->SetLogy();
   TracktoLCTYfull->SetFrameBorderMode(0);
   TracktoLCTYfull->SetFrameBorderMode(0);
   
   TH1D *TracktoLCTYfull_1__73 = new TH1D("TracktoLCTYfull_1__73","TracktoLCTYfull",100,-15000,10000);
   TracktoLCTYfull_1__73->SetBinContent(21,78.77692);
   TracktoLCTYfull_1__73->SetBinContent(60,13.53368);
   TracktoLCTYfull_1__73->SetBinContent(61,7.689396);
   TracktoLCTYfull_1__73->SetMinimum(0.005);
   TracktoLCTYfull_1__73->SetMaximum(120);
   TracktoLCTYfull_1__73->SetEntries(768682);
   TracktoLCTYfull_1__73->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff00ff");
   TracktoLCTYfull_1__73->SetLineColor(ci);

   ci = TColor::GetColor("#ff00ff");
   TracktoLCTYfull_1__73->SetMarkerColor(ci);
   TracktoLCTYfull_1__73->GetXaxis()->SetTitle("cm");
   TracktoLCTYfull_1__73->GetYaxis()->SetTitle("scaled number of entries");
   TracktoLCTYfull_1__73->Draw("H");
   
   TLegend *leg = new TLegend(0.5,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("TracktoLCTYfull_1","ME11A: mean:-7878.7cm;RMS:4084.9cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_2","ME11B: mean:-7265.6cm;RMS:4456.6cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_3","ME12+13: mean:-4663.6cm;RMS:4987.8cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_4","ME2: mean:-6651.1cm;RMS:4718.7cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_5","ME3: mean:-6119.5cm;RMS:4872.3cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_6","ME4: mean:-5688.2cm;RMS:4951.7cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1D *TracktoLCTYfull_2__74 = new TH1D("TracktoLCTYfull_2__74","TracktoLCTYfull",100,-15000,10000);
   TracktoLCTYfull_2__74->SetBinContent(21,72.66503);
   TracktoLCTYfull_2__74->SetBinContent(60,14.7017);
   TracktoLCTYfull_2__74->SetBinContent(61,12.63328);
   TracktoLCTYfull_2__74->SetEntries(1401505);
   TracktoLCTYfull_2__74->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   TracktoLCTYfull_2__74->SetLineColor(ci);

   ci = TColor::GetColor("#ff9999");
   TracktoLCTYfull_2__74->SetMarkerColor(ci);
   TracktoLCTYfull_2__74->GetXaxis()->SetTitle("cm");
   TracktoLCTYfull_2__74->GetYaxis()->SetTitle("scaled number of entries");
   TracktoLCTYfull_2__74->Draw("H,same");
   
   leg = new TLegend(0.5,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("TracktoLCTYfull_1","ME11A: mean:-7878.7cm;RMS:4084.9cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_2","ME11B: mean:-7265.6cm;RMS:4456.6cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_3","ME12+13: mean:-4663.6cm;RMS:4987.8cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_4","ME2: mean:-6651.1cm;RMS:4718.7cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_5","ME3: mean:-6119.5cm;RMS:4872.3cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_6","ME4: mean:-5688.2cm;RMS:4951.7cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1D *TracktoLCTYfull_3__75 = new TH1D("TracktoLCTYfull_3__75","TracktoLCTYfull",100,-15000,10000);
   TracktoLCTYfull_3__75->SetBinContent(21,46.63707);
   TracktoLCTYfull_3__75->SetBinContent(60,31.45834);
   TracktoLCTYfull_3__75->SetBinContent(61,21.90459);
   TracktoLCTYfull_3__75->SetEntries(457904);
   TracktoLCTYfull_3__75->SetStats(0);
   TracktoLCTYfull_3__75->GetXaxis()->SetTitle("cm");
   TracktoLCTYfull_3__75->GetYaxis()->SetTitle("scaled number of entries");
   TracktoLCTYfull_3__75->Draw("H,same");
   
   leg = new TLegend(0.5,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("TracktoLCTYfull_1","ME11A: mean:-7878.7cm;RMS:4084.9cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_2","ME11B: mean:-7265.6cm;RMS:4456.6cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_3","ME12+13: mean:-4663.6cm;RMS:4987.8cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_4","ME2: mean:-6651.1cm;RMS:4718.7cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_5","ME3: mean:-6119.5cm;RMS:4872.3cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_6","ME4: mean:-5688.2cm;RMS:4951.7cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1D *TracktoLCTYfull_4__76 = new TH1D("TracktoLCTYfull_4__76","TracktoLCTYfull",100,-15000,10000);
   TracktoLCTYfull_4__76->SetBinContent(21,66.51612);
   TracktoLCTYfull_4__76->SetBinContent(59,0.0003568079);
   TracktoLCTYfull_4__76->SetBinContent(60,19.22079);
   TracktoLCTYfull_4__76->SetBinContent(61,14.2621);
   TracktoLCTYfull_4__76->SetBinContent(62,0.0006244138);
   TracktoLCTYfull_4__76->SetEntries(2242103);
   TracktoLCTYfull_4__76->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   TracktoLCTYfull_4__76->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   TracktoLCTYfull_4__76->SetMarkerColor(ci);
   TracktoLCTYfull_4__76->GetXaxis()->SetTitle("cm");
   TracktoLCTYfull_4__76->GetYaxis()->SetTitle("scaled number of entries");
   TracktoLCTYfull_4__76->Draw("H,same");
   
   leg = new TLegend(0.5,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("TracktoLCTYfull_1","ME11A: mean:-7878.7cm;RMS:4084.9cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_2","ME11B: mean:-7265.6cm;RMS:4456.6cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_3","ME12+13: mean:-4663.6cm;RMS:4987.8cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_4","ME2: mean:-6651.1cm;RMS:4718.7cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_5","ME3: mean:-6119.5cm;RMS:4872.3cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_6","ME4: mean:-5688.2cm;RMS:4951.7cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1D *TracktoLCTYfull_5__77 = new TH1D("TracktoLCTYfull_5__77","TracktoLCTYfull",100,-15000,10000);
   TracktoLCTYfull_5__77->SetBinContent(21,61.19938);
   TracktoLCTYfull_5__77->SetBinContent(59,0.0002383583);
   TracktoLCTYfull_5__77->SetBinContent(60,21.76312);
   TracktoLCTYfull_5__77->SetBinContent(61,17.03654);
   TracktoLCTYfull_5__77->SetBinContent(62,0.0007150749);
   TracktoLCTYfull_5__77->SetEntries(1678146);
   TracktoLCTYfull_5__77->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   TracktoLCTYfull_5__77->SetLineColor(ci);

   ci = TColor::GetColor("#00ff00");
   TracktoLCTYfull_5__77->SetMarkerColor(ci);
   TracktoLCTYfull_5__77->GetXaxis()->SetTitle("cm");
   TracktoLCTYfull_5__77->GetYaxis()->SetTitle("scaled number of entries");
   TracktoLCTYfull_5__77->Draw("H,same");
   
   leg = new TLegend(0.5,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("TracktoLCTYfull_1","ME11A: mean:-7878.7cm;RMS:4084.9cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_2","ME11B: mean:-7265.6cm;RMS:4456.6cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_3","ME12+13: mean:-4663.6cm;RMS:4987.8cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_4","ME2: mean:-6651.1cm;RMS:4718.7cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_5","ME3: mean:-6119.5cm;RMS:4872.3cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_6","ME4: mean:-5688.2cm;RMS:4951.7cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1D *TracktoLCTYfull_6__78 = new TH1D("TracktoLCTYfull_6__78","TracktoLCTYfull",100,-15000,10000);
   TracktoLCTYfull_6__78->SetBinContent(21,56.88638);
   TracktoLCTYfull_6__78->SetBinContent(59,0.0001505458);
   TracktoLCTYfull_6__78->SetBinContent(60,24.31187);
   TracktoLCTYfull_6__78->SetBinContent(61,18.80024);
   TracktoLCTYfull_6__78->SetBinContent(62,0.001354913);
   TracktoLCTYfull_6__78->SetEntries(1328499);
   TracktoLCTYfull_6__78->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   TracktoLCTYfull_6__78->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   TracktoLCTYfull_6__78->SetMarkerColor(ci);
   TracktoLCTYfull_6__78->GetXaxis()->SetTitle("cm");
   TracktoLCTYfull_6__78->GetYaxis()->SetTitle("scaled number of entries");
   TracktoLCTYfull_6__78->Draw("H,same");
   
   leg = new TLegend(0.5,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("TracktoLCTYfull_1","ME11A: mean:-7878.7cm;RMS:4084.9cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_2","ME11B: mean:-7265.6cm;RMS:4456.6cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_3","ME12+13: mean:-4663.6cm;RMS:4987.8cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_4","ME2: mean:-6651.1cm;RMS:4718.7cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_5","ME3: mean:-6119.5cm;RMS:4872.3cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_6","ME4: mean:-5688.2cm;RMS:4951.7cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.01,0.945,0.3707258,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   TText *AText = pt->AddText("TracktoLCTYfull");
   pt->Draw();
   TracktoLCTYfull->Modified();
   TracktoLCTYfull->cd();
   TracktoLCTYfull->SetSelected(TracktoLCTYfull);
}
