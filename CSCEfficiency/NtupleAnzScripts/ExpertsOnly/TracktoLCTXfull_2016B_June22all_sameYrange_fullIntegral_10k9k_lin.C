void TracktoLCTXfull_2016B_June22all_sameYrange_fullIntegral_10k9k_lin()
{
//=========Macro generated from canvas: TracktoLCTXfull/TracktoLCTXfull
//=========  (Sat Aug  6 07:01:21 2016) by ROOT version6.06/01
   TCanvas *TracktoLCTXfull = new TCanvas("TracktoLCTXfull", "TracktoLCTXfull",0,0,500,500);
   gStyle->SetOptStat(0);
   TracktoLCTXfull->SetHighLightColor(2);
   TracktoLCTXfull->Range(-10000.5,-14.99438,-9995.5,134.9994);
   TracktoLCTXfull->SetFillColor(0);
   TracktoLCTXfull->SetBorderMode(0);
   TracktoLCTXfull->SetBorderSize(2);
   TracktoLCTXfull->SetFrameBorderMode(0);
   TracktoLCTXfull->SetFrameBorderMode(0);
   
   TH1D *TracktoLCTXfull_1__1 = new TH1D("TracktoLCTXfull_1__1","TracktoLCTXfull",100,-10000,-9996);
   TracktoLCTXfull_1__1->SetBinContent(26,100);
   TracktoLCTXfull_1__1->SetBinContent(101,26.00723);
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
   TLegendEntry *entry=leg->AddEntry("TracktoLCTXfull_1","ME11A: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_2","ME11B: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_3","ME12+13: mean:-9999.0cm;RMS:0.0cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_4","ME2: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_5","ME3: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_6","ME4: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1D *TracktoLCTXfull_2__2 = new TH1D("TracktoLCTXfull_2__2","TracktoLCTXfull",100,-10000,-9996);
   TracktoLCTXfull_2__2->SetBinContent(26,100);
   TracktoLCTXfull_2__2->SetBinContent(101,35.88015);
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
   entry=leg->AddEntry("TracktoLCTXfull_1","ME11A: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_2","ME11B: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_3","ME12+13: mean:-9999.0cm;RMS:0.0cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_4","ME2: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_5","ME3: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_6","ME4: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1D *TracktoLCTXfull_3__3 = new TH1D("TracktoLCTXfull_3__3","TracktoLCTXfull",100,-10000,-9996);
   TracktoLCTXfull_3__3->SetBinContent(26,100);
   TracktoLCTXfull_3__3->SetBinContent(101,122.3848);
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
   entry=leg->AddEntry("TracktoLCTXfull_1","ME11A: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_2","ME11B: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_3","ME12+13: mean:-9999.0cm;RMS:0.0cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_4","ME2: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_5","ME3: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_6","ME4: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1D *TracktoLCTXfull_4__4 = new TH1D("TracktoLCTXfull_4__4","TracktoLCTXfull",100,-10000,-9996);
   TracktoLCTXfull_4__4->SetBinContent(26,100);
   TracktoLCTXfull_4__4->SetBinContent(101,49.76866);
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
   entry=leg->AddEntry("TracktoLCTXfull_1","ME11A: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_2","ME11B: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_3","ME12+13: mean:-9999.0cm;RMS:0.0cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_4","ME2: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_5","ME3: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_6","ME4: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1D *TracktoLCTXfull_5__5 = new TH1D("TracktoLCTXfull_5__5","TracktoLCTXfull",100,-10000,-9996);
   TracktoLCTXfull_5__5->SetBinContent(26,100);
   TracktoLCTXfull_5__5->SetBinContent(101,63.70034);
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
   entry=leg->AddEntry("TracktoLCTXfull_1","ME11A: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_2","ME11B: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_3","ME12+13: mean:-9999.0cm;RMS:0.0cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_4","ME2: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_5","ME3: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_6","ME4: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1D *TracktoLCTXfull_6__6 = new TH1D("TracktoLCTXfull_6__6","TracktoLCTXfull",100,-10000,-9996);
   TracktoLCTXfull_6__6->SetBinContent(26,100);
   TracktoLCTXfull_6__6->SetBinContent(101,78.02474);
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
   entry=leg->AddEntry("TracktoLCTXfull_1","ME11A: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_2","ME11B: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_3","ME12+13: mean:-9999.0cm;RMS:0.0cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_4","ME2: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_5","ME3: mean:-9999.0cm;RMS:0.0cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TracktoLCTXfull_6","ME4: mean:-9999.0cm;RMS:0.0cm","l");

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
