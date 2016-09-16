void TracktoLCTXfull_2016B_June22all_sameYrange()
{
//=========Macro generated from canvas: TracktoLCTXfull/TracktoLCTXfull
//=========  (Fri Aug  5 08:12:16 2016) by ROOT version6.06/01
   TCanvas *TracktoLCTXfull = new TCanvas("TracktoLCTXfull", "TracktoLCTXfull",0,0,500,500);
   gStyle->SetOptStat(0);
   TracktoLCTXfull->SetHighLightColor(2);
   TracktoLCTXfull->Range(-18125,-2.848556,13125,2.626708);
   TracktoLCTXfull->SetFillColor(0);
   TracktoLCTXfull->SetBorderMode(0);
   TracktoLCTXfull->SetBorderSize(2);
   TracktoLCTXfull->SetLogy();
   TracktoLCTXfull->SetFrameBorderMode(0);
   TracktoLCTXfull->SetFrameBorderMode(0);
   
   TH1D *TracktoLCTXfull_1__1 = new TH1D("TracktoLCTXfull_1__1","TracktoLCTXfull",100,-15000,10000);
   TracktoLCTXfull_1__1->SetBinContent(21,79.36052);
   TracktoLCTXfull_1__1->SetBinContent(60,11.10236);
   TracktoLCTXfull_1__1->SetBinContent(61,9.537113);
   TracktoLCTXfull_1__1->SetMinimum(0.005);
   TracktoLCTXfull_1__1->SetMaximum(120);
   TracktoLCTXfull_1__1->SetEntries(675802);
   TracktoLCTXfull_1__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff00ff");
   TracktoLCTXfull_1__1->SetLineColor(ci);

   ci = TColor::GetColor("#ff00ff");
   TracktoLCTXfull_1__1->SetMarkerColor(ci);
   TracktoLCTXfull_1__1->GetXaxis()->SetTitle("cm");
   TracktoLCTXfull_1__1->GetYaxis()->SetTitle("scaled number of entries");
   TracktoLCTXfull_1__1->Draw("H");
   
   TLegend *leg = new TLegend(0.5,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("TracktoLCTXfull_1","ME11A: mean:-7935.3cm;RMS:4046.8cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_2","ME11B: mean:-7358.7cm;RMS:4407.8cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_3","ME12+13: mean:-4496.4cm;RMS:4974.0cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_4","ME2: mean:-6676.3cm;RMS:4709.9cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_5","ME3: mean:-6108.1cm;RMS:4875.0cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_6","ME4: mean:-5616.6cm;RMS:4961.3cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1D *TracktoLCTXfull_2__2 = new TH1D("TracktoLCTXfull_2__2","TracktoLCTXfull",100,-15000,10000);
   TracktoLCTXfull_2__2->SetBinContent(21,73.59427);
   TracktoLCTXfull_2__2->SetBinContent(60,15.00125);
   TracktoLCTXfull_2__2->SetBinContent(61,11.40448);
   TracktoLCTXfull_2__2->SetEntries(1185341);
   TracktoLCTXfull_2__2->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   TracktoLCTXfull_2__2->SetLineColor(ci);

   ci = TColor::GetColor("#ff9999");
   TracktoLCTXfull_2__2->SetMarkerColor(ci);
   TracktoLCTXfull_2__2->GetXaxis()->SetTitle("cm");
   TracktoLCTXfull_2__2->GetYaxis()->SetTitle("scaled number of entries");
   TracktoLCTXfull_2__2->Draw("H,same");
   
   leg = new TLegend(0.5,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("TracktoLCTXfull_1","ME11A: mean:-7935.3cm;RMS:4046.8cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_2","ME11B: mean:-7358.7cm;RMS:4407.8cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_3","ME12+13: mean:-4496.4cm;RMS:4974.0cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_4","ME2: mean:-6676.3cm;RMS:4709.9cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_5","ME3: mean:-6108.1cm;RMS:4875.0cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_6","ME4: mean:-5616.6cm;RMS:4961.3cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1D *TracktoLCTXfull_3__3 = new TH1D("TracktoLCTXfull_3__3","TracktoLCTXfull",100,-15000,10000);
   TracktoLCTXfull_3__3->SetBinContent(21,44.96709);
   TracktoLCTXfull_3__3->SetBinContent(60,30.84529);
   TracktoLCTXfull_3__3->SetBinContent(61,24.18762);
   TracktoLCTXfull_3__3->SetEntries(389596);
   TracktoLCTXfull_3__3->SetStats(0);
   TracktoLCTXfull_3__3->GetXaxis()->SetTitle("cm");
   TracktoLCTXfull_3__3->GetYaxis()->SetTitle("scaled number of entries");
   TracktoLCTXfull_3__3->Draw("H,same");
   
   leg = new TLegend(0.5,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("TracktoLCTXfull_1","ME11A: mean:-7935.3cm;RMS:4046.8cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_2","ME11B: mean:-7358.7cm;RMS:4407.8cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_3","ME12+13: mean:-4496.4cm;RMS:4974.0cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_4","ME2: mean:-6676.3cm;RMS:4709.9cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_5","ME3: mean:-6108.1cm;RMS:4875.0cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_6","ME4: mean:-5616.6cm;RMS:4961.3cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1D *TracktoLCTXfull_4__4 = new TH1D("TracktoLCTXfull_4__4","TracktoLCTXfull",100,-15000,10000);
   TracktoLCTXfull_4__4->SetBinContent(21,66.76964);
   TracktoLCTXfull_4__4->SetBinContent(60,15.78258);
   TracktoLCTXfull_4__4->SetBinContent(61,17.44778);
   TracktoLCTXfull_4__4->SetEntries(1890705);
   TracktoLCTXfull_4__4->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   TracktoLCTXfull_4__4->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   TracktoLCTXfull_4__4->SetMarkerColor(ci);
   TracktoLCTXfull_4__4->GetXaxis()->SetTitle("cm");
   TracktoLCTXfull_4__4->GetYaxis()->SetTitle("scaled number of entries");
   TracktoLCTXfull_4__4->Draw("H,same");
   
   leg = new TLegend(0.5,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("TracktoLCTXfull_1","ME11A: mean:-7935.3cm;RMS:4046.8cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_2","ME11B: mean:-7358.7cm;RMS:4407.8cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_3","ME12+13: mean:-4496.4cm;RMS:4974.0cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_4","ME2: mean:-6676.3cm;RMS:4709.9cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_5","ME3: mean:-6108.1cm;RMS:4875.0cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_6","ME4: mean:-5616.6cm;RMS:4961.3cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1D *TracktoLCTXfull_5__5 = new TH1D("TracktoLCTXfull_5__5","TracktoLCTXfull",100,-15000,10000);
   TracktoLCTXfull_5__5->SetBinContent(21,61.08723);
   TracktoLCTXfull_5__5->SetBinContent(60,19.37831);
   TracktoLCTXfull_5__5->SetBinContent(61,19.53447);
   TracktoLCTXfull_5__5->SetEntries(1394704);
   TracktoLCTXfull_5__5->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   TracktoLCTXfull_5__5->SetLineColor(ci);

   ci = TColor::GetColor("#00ff00");
   TracktoLCTXfull_5__5->SetMarkerColor(ci);
   TracktoLCTXfull_5__5->GetXaxis()->SetTitle("cm");
   TracktoLCTXfull_5__5->GetYaxis()->SetTitle("scaled number of entries");
   TracktoLCTXfull_5__5->Draw("H,same");
   
   leg = new TLegend(0.5,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("TracktoLCTXfull_1","ME11A: mean:-7935.3cm;RMS:4046.8cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_2","ME11B: mean:-7358.7cm;RMS:4407.8cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_3","ME12+13: mean:-4496.4cm;RMS:4974.0cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_4","ME2: mean:-6676.3cm;RMS:4709.9cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_5","ME3: mean:-6108.1cm;RMS:4875.0cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_6","ME4: mean:-5616.6cm;RMS:4961.3cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1D *TracktoLCTXfull_6__6 = new TH1D("TracktoLCTXfull_6__6","TracktoLCTXfull",100,-15000,10000);
   TracktoLCTXfull_6__6->SetBinContent(21,56.17197);
   TracktoLCTXfull_6__6->SetBinContent(60,21.38484);
   TracktoLCTXfull_6__6->SetBinContent(61,22.44319);
   TracktoLCTXfull_6__6->SetEntries(1102290);
   TracktoLCTXfull_6__6->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   TracktoLCTXfull_6__6->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   TracktoLCTXfull_6__6->SetMarkerColor(ci);
   TracktoLCTXfull_6__6->GetXaxis()->SetTitle("cm");
   TracktoLCTXfull_6__6->GetYaxis()->SetTitle("scaled number of entries");
   TracktoLCTXfull_6__6->Draw("H,same");
   
   leg = new TLegend(0.5,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("TracktoLCTXfull_1","ME11A: mean:-7935.3cm;RMS:4046.8cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_2","ME11B: mean:-7358.7cm;RMS:4407.8cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_3","ME12+13: mean:-4496.4cm;RMS:4974.0cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_4","ME2: mean:-6676.3cm;RMS:4709.9cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_5","ME3: mean:-6108.1cm;RMS:4875.0cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_6","ME4: mean:-5616.6cm;RMS:4961.3cm","l");

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
   TText *AText = pt->AddText("TracktoLCTXfull");
   pt->Draw();
   TracktoLCTXfull->Modified();
   TracktoLCTXfull->cd();
   TracktoLCTXfull->SetSelected(TracktoLCTXfull);
}
