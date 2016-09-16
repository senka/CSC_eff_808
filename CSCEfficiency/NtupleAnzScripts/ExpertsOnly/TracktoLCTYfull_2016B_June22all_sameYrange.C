void TracktoLCTYfull_2016B_June22all_sameYrange()
{
//=========Macro generated from canvas: TracktoLCTYfull/TracktoLCTYfull
//=========  (Fri Aug  5 08:12:17 2016) by ROOT version6.06/01
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
   TracktoLCTYfull_1__73->SetBinContent(21,79.36052);
   TracktoLCTYfull_1__73->SetBinContent(60,13.6355);
   TracktoLCTYfull_1__73->SetBinContent(61,7.003975);
   TracktoLCTYfull_1__73->SetMinimum(0.005);
   TracktoLCTYfull_1__73->SetMaximum(120);
   TracktoLCTYfull_1__73->SetEntries(675802);
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
   TLegendEntry *entry=leg->AddEntry("TracktoLCTYfull_1","ME11A: mean:-7937.7cm;RMS:4041.9cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_2","ME11B: mean:-7358.5cm;RMS:4408.2cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_3","ME12+13: mean:-4496.7cm;RMS:4973.7cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_4","ME2: mean:-6676.4cm;RMS:4709.7cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_5","ME3: mean:-6108.3cm;RMS:4874.8cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_6","ME4: mean:-5616.8cm;RMS:4961.1cm","l");

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
   TracktoLCTYfull_2__74->SetBinContent(21,73.59427);
   TracktoLCTYfull_2__74->SetBinContent(60,14.30019);
   TracktoLCTYfull_2__74->SetBinContent(61,12.10555);
   TracktoLCTYfull_2__74->SetEntries(1185341);
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
   entry=leg->AddEntry("TracktoLCTYfull_1","ME11A: mean:-7937.7cm;RMS:4041.9cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_2","ME11B: mean:-7358.5cm;RMS:4408.2cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_3","ME12+13: mean:-4496.7cm;RMS:4973.7cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_4","ME2: mean:-6676.4cm;RMS:4709.7cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_5","ME3: mean:-6108.3cm;RMS:4874.8cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_6","ME4: mean:-5616.8cm;RMS:4961.1cm","l");

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
   TracktoLCTYfull_3__75->SetBinContent(21,44.96709);
   TracktoLCTYfull_3__75->SetBinContent(60,32.93874);
   TracktoLCTYfull_3__75->SetBinContent(61,22.09417);
   TracktoLCTYfull_3__75->SetEntries(389596);
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
   entry=leg->AddEntry("TracktoLCTYfull_1","ME11A: mean:-7937.7cm;RMS:4041.9cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_2","ME11B: mean:-7358.5cm;RMS:4408.2cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_3","ME12+13: mean:-4496.7cm;RMS:4973.7cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_4","ME2: mean:-6676.4cm;RMS:4709.7cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_5","ME3: mean:-6108.3cm;RMS:4874.8cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_6","ME4: mean:-5616.8cm;RMS:4961.1cm","l");

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
   TracktoLCTYfull_4__76->SetBinContent(21,66.76964);
   TracktoLCTYfull_4__76->SetBinContent(59,0.0003702323);
   TracktoLCTYfull_4__76->SetBinContent(60,19.22553);
   TracktoLCTYfull_4__76->SetBinContent(61,14.00361);
   TracktoLCTYfull_4__76->SetBinContent(62,0.0008462452);
   TracktoLCTYfull_4__76->SetEntries(1890705);
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
   entry=leg->AddEntry("TracktoLCTYfull_1","ME11A: mean:-7937.7cm;RMS:4041.9cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_2","ME11B: mean:-7358.5cm;RMS:4408.2cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_3","ME12+13: mean:-4496.7cm;RMS:4973.7cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_4","ME2: mean:-6676.4cm;RMS:4709.7cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_5","ME3: mean:-6108.3cm;RMS:4874.8cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_6","ME4: mean:-5616.8cm;RMS:4961.1cm","l");

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
   TracktoLCTYfull_5__77->SetBinContent(21,61.08723);
   TracktoLCTYfull_5__77->SetBinContent(59,0.0002867992);
   TracktoLCTYfull_5__77->SetBinContent(60,21.99456);
   TracktoLCTYfull_5__77->SetBinContent(61,16.91699);
   TracktoLCTYfull_5__77->SetBinContent(62,0.0009320974);
   TracktoLCTYfull_5__77->SetEntries(1394704);
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
   entry=leg->AddEntry("TracktoLCTYfull_1","ME11A: mean:-7937.7cm;RMS:4041.9cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_2","ME11B: mean:-7358.5cm;RMS:4408.2cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_3","ME12+13: mean:-4496.7cm;RMS:4973.7cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_4","ME2: mean:-6676.4cm;RMS:4709.7cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_5","ME3: mean:-6108.3cm;RMS:4874.8cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_6","ME4: mean:-5616.8cm;RMS:4961.1cm","l");

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
   TracktoLCTYfull_6__78->SetBinContent(21,56.17197);
   TracktoLCTYfull_6__78->SetBinContent(59,0.0009072023);
   TracktoLCTYfull_6__78->SetBinContent(60,24.89662);
   TracktoLCTYfull_6__78->SetBinContent(61,18.92751);
   TracktoLCTYfull_6__78->SetBinContent(62,0.002993768);
   TracktoLCTYfull_6__78->SetEntries(1102290);
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
   entry=leg->AddEntry("TracktoLCTYfull_1","ME11A: mean:-7937.7cm;RMS:4041.9cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_2","ME11B: mean:-7358.5cm;RMS:4408.2cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_3","ME12+13: mean:-4496.7cm;RMS:4973.7cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_4","ME2: mean:-6676.4cm;RMS:4709.7cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_5","ME3: mean:-6108.3cm;RMS:4874.8cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTYfull_6","ME4: mean:-5616.8cm;RMS:4961.1cm","l");

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
