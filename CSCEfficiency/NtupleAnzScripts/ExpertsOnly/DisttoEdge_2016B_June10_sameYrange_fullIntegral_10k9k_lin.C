void DisttoEdge_2016B_June10_sameYrange_fullIntegral_10k9k_lin()
{
//=========Macro generated from canvas: DisttoEdge/DisttoEdge
//=========  (Mon Aug  8 07:14:54 2016) by ROOT version6.06/01
   TCanvas *DisttoEdge = new TCanvas("DisttoEdge", "DisttoEdge",0,0,500,500);
   gStyle->SetOptStat(0);
   DisttoEdge->SetHighLightColor(2);
   DisttoEdge->Range(-67.5,-7.494376,7.500001,67.49938);
   DisttoEdge->SetFillColor(0);
   DisttoEdge->SetBorderMode(0);
   DisttoEdge->SetBorderSize(2);
   DisttoEdge->SetFrameBorderMode(0);
   DisttoEdge->SetFrameBorderMode(0);
   
   TH1D *DisttoEdge_1__7 = new TH1D("DisttoEdge_1__7","DisttoEdge",100,-60,0);
   DisttoEdge_1__7->SetBinContent(64,0.0006477691);
   DisttoEdge_1__7->SetBinContent(65,0.01230761);
   DisttoEdge_1__7->SetBinContent(66,0.016842);
   DisttoEdge_1__7->SetBinContent(67,0.03757061);
   DisttoEdge_1__7->SetBinContent(68,0.04663937);
   DisttoEdge_1__7->SetBinContent(69,0.06024252);
   DisttoEdge_1__7->SetBinContent(70,0.07773229);
   DisttoEdge_1__7->SetBinContent(71,0.09068767);
   DisttoEdge_1__7->SetBinContent(72,0.1133596);
   DisttoEdge_1__7->SetBinContent(73,0.1334404);
   DisttoEdge_1__7->SetBinContent(74,0.1561123);
   DisttoEdge_1__7->SetBinContent(75,0.179432);
   DisttoEdge_1__7->SetBinContent(76,0.2234803);
   DisttoEdge_1__7->SetBinContent(77,0.4417785);
   DisttoEdge_1__7->SetBinContent(78,1.441286);
   DisttoEdge_1__7->SetBinContent(79,3.178603);
   DisttoEdge_1__7->SetBinContent(80,4.86928);
   DisttoEdge_1__7->SetBinContent(81,6.994611);
   DisttoEdge_1__7->SetBinContent(82,8.763668);
   DisttoEdge_1__7->SetBinContent(83,8.976784);
   DisttoEdge_1__7->SetBinContent(84,8.927554);
   DisttoEdge_1__7->SetBinContent(85,8.695652);
   DisttoEdge_1__7->SetBinContent(86,8.299217);
   DisttoEdge_1__7->SetBinContent(87,7.818573);
   DisttoEdge_1__7->SetBinContent(88,7.597036);
   DisttoEdge_1__7->SetBinContent(89,7.066513);
   DisttoEdge_1__7->SetBinContent(90,6.46927);
   DisttoEdge_1__7->SetBinContent(91,5.816966);
   DisttoEdge_1__7->SetBinContent(92,3.494714);
   DisttoEdge_1__7->SetMinimum(0.005);
   DisttoEdge_1__7->SetMaximum(60);
   DisttoEdge_1__7->SetEntries(154376);
   DisttoEdge_1__7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff00ff");
   DisttoEdge_1__7->SetLineColor(ci);

   ci = TColor::GetColor("#ff00ff");
   DisttoEdge_1__7->SetMarkerColor(ci);
   DisttoEdge_1__7->GetXaxis()->SetTitle("cm");
   DisttoEdge_1__7->GetYaxis()->SetTitle("scaled number of entries");
   DisttoEdge_1__7->Draw("H");
   
   TLegend *leg = new TLegend(0.5,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("DisttoEdge_1","ME11A: mean:-9.2cm;RMS:2.3cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_2","ME11B: mean:-12.1cm;RMS:3.8cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_3","ME12+13: mean:-19.0cm;RMS:8.0cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_4","ME2: mean:-22.5cm;RMS:10.2cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_5","ME3: mean:-23.1cm;RMS:10.8cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_6","ME4: mean:-23.1cm;RMS:11.0cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1D *DisttoEdge_2__8 = new TH1D("DisttoEdge_2__8","DisttoEdge",100,-60,0);
   DisttoEdge_2__8->SetBinContent(64,0.01359534);
   DisttoEdge_2__8->SetBinContent(65,0.1925395);
   DisttoEdge_2__8->SetBinContent(66,0.498251);
   DisttoEdge_2__8->SetBinContent(67,0.8480555);
   DisttoEdge_2__8->SetBinContent(68,1.211088);
   DisttoEdge_2__8->SetBinContent(69,1.635483);
   DisttoEdge_2__8->SetBinContent(70,2.029013);
   DisttoEdge_2__8->SetBinContent(71,2.455613);
   DisttoEdge_2__8->SetBinContent(72,2.895441);
   DisttoEdge_2__8->SetBinContent(73,3.323878);
   DisttoEdge_2__8->SetBinContent(74,3.866222);
   DisttoEdge_2__8->SetBinContent(75,4.465152);
   DisttoEdge_2__8->SetBinContent(76,5.033584);
   DisttoEdge_2__8->SetBinContent(77,5.474147);
   DisttoEdge_2__8->SetBinContent(78,5.830565);
   DisttoEdge_2__8->SetBinContent(79,5.604956);
   DisttoEdge_2__8->SetBinContent(80,5.498765);
   DisttoEdge_2__8->SetBinContent(81,5.301817);
   DisttoEdge_2__8->SetBinContent(82,5.17211);
   DisttoEdge_2__8->SetBinContent(83,4.906817);
   DisttoEdge_2__8->SetBinContent(84,4.721259);
   DisttoEdge_2__8->SetBinContent(85,4.466254);
   DisttoEdge_2__8->SetBinContent(86,4.350877);
   DisttoEdge_2__8->SetBinContent(87,4.165687);
   DisttoEdge_2__8->SetBinContent(88,3.868426);
   DisttoEdge_2__8->SetBinContent(89,3.578882);
   DisttoEdge_2__8->SetBinContent(90,3.350334);
   DisttoEdge_2__8->SetBinContent(91,3.20005);
   DisttoEdge_2__8->SetBinContent(92,2.041139);
   DisttoEdge_2__8->SetEntries(272152);
   DisttoEdge_2__8->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   DisttoEdge_2__8->SetLineColor(ci);

   ci = TColor::GetColor("#ff9999");
   DisttoEdge_2__8->SetMarkerColor(ci);
   DisttoEdge_2__8->GetXaxis()->SetTitle("cm");
   DisttoEdge_2__8->GetYaxis()->SetTitle("scaled number of entries");
   DisttoEdge_2__8->Draw("H,same");
   
   leg = new TLegend(0.5,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("DisttoEdge_1","ME11A: mean:-9.2cm;RMS:2.3cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_2","ME11B: mean:-12.1cm;RMS:3.8cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_3","ME12+13: mean:-19.0cm;RMS:8.0cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_4","ME2: mean:-22.5cm;RMS:10.2cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_5","ME3: mean:-23.1cm;RMS:10.8cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_6","ME4: mean:-23.1cm;RMS:11.0cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1D *DisttoEdge_3__9 = new TH1D("DisttoEdge_3__9","DisttoEdge",100,-60,0);
   DisttoEdge_3__9->SetBinContent(35,0.01342147);
   DisttoEdge_3__9->SetBinContent(36,0.04361977);
   DisttoEdge_3__9->SetBinContent(37,0.08164726);
   DisttoEdge_3__9->SetBinContent(38,0.1275039);
   DisttoEdge_3__9->SetBinContent(39,0.1811898);
   DisttoEdge_3__9->SetBinContent(40,0.1755975);
   DisttoEdge_3__9->SetBinContent(41,0.2192173);
   DisttoEdge_3__9->SetBinContent(42,0.3467212);
   DisttoEdge_3__9->SetBinContent(43,0.5748862);
   DisttoEdge_3__9->SetBinContent(44,0.643112);
   DisttoEdge_3__9->SetBinContent(45,0.8768692);
   DisttoEdge_3__9->SetBinContent(46,1.107271);
   DisttoEdge_3__9->SetBinContent(47,1.290698);
   DisttoEdge_3__9->SetBinContent(48,1.4484);
   DisttoEdge_3__9->SetBinContent(49,1.627353);
   DisttoEdge_3__9->SetBinContent(50,1.760449);
   DisttoEdge_3__9->SetBinContent(51,1.734725);
   DisttoEdge_3__9->SetBinContent(52,1.734725);
   DisttoEdge_3__9->SetBinContent(53,1.864466);
   DisttoEdge_3__9->SetBinContent(54,1.898019);
   DisttoEdge_3__9->SetBinContent(55,1.905848);
   DisttoEdge_3__9->SetBinContent(56,2.038945);
   DisttoEdge_3__9->SetBinContent(57,1.99868);
   DisttoEdge_3__9->SetBinContent(58,2.043418);
   DisttoEdge_3__9->SetBinContent(59,2.003154);
   DisttoEdge_3__9->SetBinContent(60,2.09263);
   DisttoEdge_3__9->SetBinContent(61,2.072498);
   DisttoEdge_3__9->SetBinContent(62,2.183225);
   DisttoEdge_3__9->SetBinContent(63,2.186581);
   DisttoEdge_3__9->SetBinContent(64,2.140724);
   DisttoEdge_3__9->SetBinContent(65,2.353231);
   DisttoEdge_3__9->SetBinContent(66,2.298426);
   DisttoEdge_3__9->SetBinContent(67,2.258162);
   DisttoEdge_3__9->SetBinContent(68,2.212305);
   DisttoEdge_3__9->SetBinContent(69,2.387903);
   DisttoEdge_3__9->SetBinContent(70,2.251451);
   DisttoEdge_3__9->SetBinContent(71,2.3029);
   DisttoEdge_3__9->SetBinContent(72,2.380074);
   DisttoEdge_3__9->SetBinContent(73,2.340928);
   DisttoEdge_3__9->SetBinContent(74,2.389021);
   DisttoEdge_3__9->SetBinContent(75,2.397969);
   DisttoEdge_3__9->SetBinContent(76,2.367771);
   DisttoEdge_3__9->SetBinContent(77,2.415864);
   DisttoEdge_3__9->SetBinContent(78,2.413627);
   DisttoEdge_3__9->SetBinContent(79,2.342046);
   DisttoEdge_3__9->SetBinContent(80,2.354349);
   DisttoEdge_3__9->SetBinContent(81,2.399087);
   DisttoEdge_3__9->SetBinContent(82,2.409153);
   DisttoEdge_3__9->SetBinContent(83,2.274939);
   DisttoEdge_3__9->SetBinContent(84,2.344283);
   DisttoEdge_3__9->SetBinContent(85,2.191055);
   DisttoEdge_3__9->SetBinContent(86,2.116118);
   DisttoEdge_3__9->SetBinContent(87,2.028879);
   DisttoEdge_3__9->SetBinContent(88,2.019931);
   DisttoEdge_3__9->SetBinContent(89,1.909204);
   DisttoEdge_3__9->SetBinContent(90,1.766041);
   DisttoEdge_3__9->SetBinContent(91,1.651959);
   DisttoEdge_3__9->SetBinContent(92,1.007729);
   DisttoEdge_3__9->SetEntries(89409);
   DisttoEdge_3__9->SetStats(0);
   DisttoEdge_3__9->GetXaxis()->SetTitle("cm");
   DisttoEdge_3__9->GetYaxis()->SetTitle("scaled number of entries");
   DisttoEdge_3__9->Draw("H,same");
   
   leg = new TLegend(0.5,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("DisttoEdge_1","ME11A: mean:-9.2cm;RMS:2.3cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_2","ME11B: mean:-12.1cm;RMS:3.8cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_3","ME12+13: mean:-19.0cm;RMS:8.0cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_4","ME2: mean:-22.5cm;RMS:10.2cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_5","ME3: mean:-23.1cm;RMS:10.8cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_6","ME4: mean:-23.1cm;RMS:11.0cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1D *DisttoEdge_4__10 = new TH1D("DisttoEdge_4__10","DisttoEdge",100,-60,0);
   DisttoEdge_4__10->SetBinContent(7,0.001158773);
   DisttoEdge_4__10->SetBinContent(8,0.007184391);
   DisttoEdge_4__10->SetBinContent(9,0.01112422);
   DisttoEdge_4__10->SetBinContent(10,0.0229437);
   DisttoEdge_4__10->SetBinContent(11,0.02943283);
   DisttoEdge_4__10->SetBinContent(12,0.03383616);
   DisttoEdge_4__10->SetBinContent(13,0.0382395);
   DisttoEdge_4__10->SetBinContent(14,0.03360441);
   DisttoEdge_4__10->SetBinContent(15,0.04125231);
   DisttoEdge_4__10->SetBinContent(16,0.04287459);
   DisttoEdge_4__10->SetBinContent(17,0.0560846);
   DisttoEdge_4__10->SetBinContent(18,0.07810128);
   DisttoEdge_4__10->SetBinContent(19,0.09571463);
   DisttoEdge_4__10->SetBinContent(20,0.125611);
   DisttoEdge_4__10->SetBinContent(21,0.1497134);
   DisttoEdge_4__10->SetBinContent(22,0.1874894);
   DisttoEdge_4__10->SetBinContent(23,0.2201668);
   DisttoEdge_4__10->SetBinContent(24,0.2502949);
   DisttoEdge_4__10->SetBinContent(25,0.2978046);
   DisttoEdge_4__10->SetBinContent(26,0.330482);
   DisttoEdge_4__10->SetBinContent(27,0.371039);
   DisttoEdge_4__10->SetBinContent(28,0.4530801);
   DisttoEdge_4__10->SetBinContent(29,0.4804272);
   DisttoEdge_4__10->SetBinContent(30,0.5471725);
   DisttoEdge_4__10->SetBinContent(31,0.5972315);
   DisttoEdge_4__10->SetBinContent(32,0.6067334);
   DisttoEdge_4__10->SetBinContent(33,0.6560971);
   DisttoEdge_4__10->SetBinContent(34,0.6169306);
   DisttoEdge_4__10->SetBinContent(35,0.6456682);
   DisttoEdge_4__10->SetBinContent(36,0.6862252);
   DisttoEdge_4__10->SetBinContent(37,0.7325761);
   DisttoEdge_4__10->SetBinContent(38,0.7826351);
   DisttoEdge_4__10->SetBinContent(39,0.856333);
   DisttoEdge_4__10->SetBinContent(40,0.8980489);
   DisttoEdge_4__10->SetBinContent(41,0.9673435);
   DisttoEdge_4__10->SetBinContent(42,1.039187);
   DisttoEdge_4__10->SetBinContent(43,1.107555);
   DisttoEdge_4__10->SetBinContent(44,1.220419);
   DisttoEdge_4__10->SetBinContent(45,1.311731);
   DisttoEdge_4__10->SetBinContent(46,1.373146);
   DisttoEdge_4__10->SetBinContent(47,1.445685);
   DisttoEdge_4__10->SetBinContent(48,1.489486);
   DisttoEdge_4__10->SetBinContent(49,1.524945);
   DisttoEdge_4__10->SetBinContent(50,1.606986);
   DisttoEdge_4__10->SetBinContent(51,1.636882);
   DisttoEdge_4__10->SetBinContent(52,1.695284);
   DisttoEdge_4__10->SetBinContent(53,1.712434);
   DisttoEdge_4__10->SetBinContent(54,1.778253);
   DisttoEdge_4__10->SetBinContent(55,1.829702);
   DisttoEdge_4__10->SetBinContent(56,1.818114);
   DisttoEdge_4__10->SetBinContent(57,1.891812);
   DisttoEdge_4__10->SetBinContent(58,1.92843);
   DisttoEdge_4__10->SetBinContent(59,1.985441);
   DisttoEdge_4__10->SetBinContent(60,1.957631);
   DisttoEdge_4__10->SetBinContent(61,2.007921);
   DisttoEdge_4__10->SetBinContent(62,2.030865);
   DisttoEdge_4__10->SetBinContent(63,2.030633);
   DisttoEdge_4__10->SetBinContent(64,2.012788);
   DisttoEdge_4__10->SetBinContent(65,2.055895);
   DisttoEdge_4__10->SetBinContent(66,2.080229);
   DisttoEdge_4__10->SetBinContent(67,2.09622);
   DisttoEdge_4__10->SetBinContent(68,2.102941);
   DisttoEdge_4__10->SetBinContent(69,2.055895);
   DisttoEdge_4__10->SetBinContent(70,2.057053);
   DisttoEdge_4__10->SetBinContent(71,2.064469);
   DisttoEdge_4__10->SetBinContent(72,2.073276);
   DisttoEdge_4__10->SetBinContent(73,2.039208);
   DisttoEdge_4__10->SetBinContent(74,2.064701);
   DisttoEdge_4__10->SetBinContent(75,2.022754);
   DisttoEdge_4__10->SetBinContent(76,1.949519);
   DisttoEdge_4__10->SetBinContent(77,1.968987);
   DisttoEdge_4__10->SetBinContent(78,1.927271);
   DisttoEdge_4__10->SetBinContent(79,1.881383);
   DisttoEdge_4__10->SetBinContent(80,1.867942);
   DisttoEdge_4__10->SetBinContent(81,1.799806);
   DisttoEdge_4__10->SetBinContent(82,1.770373);
   DisttoEdge_4__10->SetBinContent(83,1.708494);
   DisttoEdge_4__10->SetBinContent(84,1.649397);
   DisttoEdge_4__10->SetBinContent(85,1.606291);
   DisttoEdge_4__10->SetBinContent(86,1.540241);
   DisttoEdge_4__10->SetBinContent(87,1.451247);
   DisttoEdge_4__10->SetBinContent(88,1.37894);
   DisttoEdge_4__10->SetBinContent(89,1.313585);
   DisttoEdge_4__10->SetBinContent(90,1.23641);
   DisttoEdge_4__10->SetBinContent(91,1.152284);
   DisttoEdge_4__10->SetBinContent(92,0.6992035);
   DisttoEdge_4__10->SetEntries(431491);
   DisttoEdge_4__10->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   DisttoEdge_4__10->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   DisttoEdge_4__10->SetMarkerColor(ci);
   DisttoEdge_4__10->GetXaxis()->SetTitle("cm");
   DisttoEdge_4__10->GetYaxis()->SetTitle("scaled number of entries");
   DisttoEdge_4__10->Draw("H,same");
   
   leg = new TLegend(0.5,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("DisttoEdge_1","ME11A: mean:-9.2cm;RMS:2.3cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_2","ME11B: mean:-12.1cm;RMS:3.8cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_3","ME12+13: mean:-19.0cm;RMS:8.0cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_4","ME2: mean:-22.5cm;RMS:10.2cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_5","ME3: mean:-23.1cm;RMS:10.8cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_6","ME4: mean:-23.1cm;RMS:11.0cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1D *DisttoEdge_5__11 = new TH1D("DisttoEdge_5__11","DisttoEdge",100,-60,0);
   DisttoEdge_5__11->SetBinContent(7,0.003780623);
   DisttoEdge_5__11->SetBinContent(8,0.01008166);
   DisttoEdge_5__11->SetBinContent(9,0.02173858);
   DisttoEdge_5__11->SetBinContent(10,0.03434066);
   DisttoEdge_5__11->SetBinContent(11,0.03654602);
   DisttoEdge_5__11->SetBinContent(12,0.05670935);
   DisttoEdge_5__11->SetBinContent(13,0.05576419);
   DisttoEdge_5__11->SetBinContent(14,0.05796955);
   DisttoEdge_5__11->SetBinContent(15,0.05639429);
   DisttoEdge_5__11->SetBinContent(16,0.06458564);
   DisttoEdge_5__11->SetBinContent(17,0.07970814);
   DisttoEdge_5__11->SetBinContent(18,0.1074327);
   DisttoEdge_5__11->SetBinContent(19,0.1364175);
   DisttoEdge_5__11->SetBinContent(20,0.1830452);
   DisttoEdge_5__11->SetBinContent(21,0.2217966);
   DisttoEdge_5__11->SetBinContent(22,0.2737801);
   DisttoEdge_5__11->SetBinContent(23,0.2958338);
   DisttoEdge_5__11->SetBinContent(24,0.3285992);
   DisttoEdge_5__11->SetBinContent(25,0.4139782);
   DisttoEdge_5__11->SetBinContent(26,0.4580855);
   DisttoEdge_5__11->SetBinContent(27,0.4921111);
   DisttoEdge_5__11->SetBinContent(28,0.5740246);
   DisttoEdge_5__11->SetBinContent(29,0.6266383);
   DisttoEdge_5__11->SetBinContent(30,0.6924841);
   DisttoEdge_5__11->SetBinContent(31,0.7290301);
   DisttoEdge_5__11->SetBinContent(32,0.8197651);
   DisttoEdge_5__11->SetBinContent(33,0.8106286);
   DisttoEdge_5__11->SetBinContent(34,0.7863696);
   DisttoEdge_5__11->SetBinContent(35,0.8629272);
   DisttoEdge_5__11->SetBinContent(36,0.8670229);
   DisttoEdge_5__11->SetBinContent(37,0.9489364);
   DisttoEdge_5__11->SetBinContent(38,1.007221);
   DisttoEdge_5__11->SetBinContent(39,1.042192);
   DisttoEdge_5__11->SetBinContent(40,1.126626);
   DisttoEdge_5__11->SetBinContent(41,1.141118);
   DisttoEdge_5__11->SetBinContent(42,1.171993);
   DisttoEdge_5__11->SetBinContent(43,1.193102);
   DisttoEdge_5__11->SetBinContent(44,1.199718);
   DisttoEdge_5__11->SetBinContent(45,1.265249);
   DisttoEdge_5__11->SetBinContent(46,1.262728);
   DisttoEdge_5__11->SetBinContent(47,1.327944);
   DisttoEdge_5__11->SetBinContent(48,1.354723);
   DisttoEdge_5__11->SetBinContent(49,1.375832);
   DisttoEdge_5__11->SetBinContent(50,1.416473);
   DisttoEdge_5__11->SetBinContent(51,1.435377);
   DisttoEdge_5__11->SetBinContent(52,1.482949);
   DisttoEdge_5__11->SetBinContent(53,1.540604);
   DisttoEdge_5__11->SetBinContent(54,1.557932);
   DisttoEdge_5__11->SetBinContent(55,1.614641);
   DisttoEdge_5__11->SetBinContent(56,1.632284);
   DisttoEdge_5__11->SetBinContent(57,1.681432);
   DisttoEdge_5__11->SetBinContent(58,1.754524);
   DisttoEdge_5__11->SetBinContent(59,1.777208);
   DisttoEdge_5__11->SetBinContent(60,1.842424);
   DisttoEdge_5__11->SetBinContent(61,1.827931);
   DisttoEdge_5__11->SetBinContent(62,1.921187);
   DisttoEdge_5__11->SetBinContent(63,1.941035);
   DisttoEdge_5__11->SetBinContent(64,1.956787);
   DisttoEdge_5__11->SetBinContent(65,1.958363);
   DisttoEdge_5__11->SetBinContent(66,1.974115);
   DisttoEdge_5__11->SetBinContent(67,2.032715);
   DisttoEdge_5__11->SetBinContent(68,1.996799);
   DisttoEdge_5__11->SetBinContent(69,2.052563);
   DisttoEdge_5__11->SetBinContent(70,2.050043);
   DisttoEdge_5__11->SetBinContent(71,1.980731);
   DisttoEdge_5__11->SetBinContent(72,2.025154);
   DisttoEdge_5__11->SetBinContent(73,2.026729);
   DisttoEdge_5__11->SetBinContent(74,1.954582);
   DisttoEdge_5__11->SetBinContent(75,1.976951);
   DisttoEdge_5__11->SetBinContent(76,1.920241);
   DisttoEdge_5__11->SetBinContent(77,1.962773);
   DisttoEdge_5__11->SetBinContent(78,1.899763);
   DisttoEdge_5__11->SetBinContent(79,1.895982);
   DisttoEdge_5__11->SetBinContent(80,1.840533);
   DisttoEdge_5__11->SetBinContent(81,1.796111);
   DisttoEdge_5__11->SetBinContent(82,1.72869);
   DisttoEdge_5__11->SetBinContent(83,1.719553);
   DisttoEdge_5__11->SetBinContent(84,1.671981);
   DisttoEdge_5__11->SetBinContent(85,1.616846);
   DisttoEdge_5__11->SetBinContent(86,1.556672);
   DisttoEdge_5__11->SetBinContent(87,1.509729);
   DisttoEdge_5__11->SetBinContent(88,1.414898);
   DisttoEdge_5__11->SetBinContent(89,1.362915);
   DisttoEdge_5__11->SetBinContent(90,1.27659);
   DisttoEdge_5__11->SetBinContent(91,1.148364);
   DisttoEdge_5__11->SetBinContent(92,0.691854);
   DisttoEdge_5__11->SetEntries(317408);
   DisttoEdge_5__11->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   DisttoEdge_5__11->SetLineColor(ci);

   ci = TColor::GetColor("#00ff00");
   DisttoEdge_5__11->SetMarkerColor(ci);
   DisttoEdge_5__11->GetXaxis()->SetTitle("cm");
   DisttoEdge_5__11->GetYaxis()->SetTitle("scaled number of entries");
   DisttoEdge_5__11->Draw("H,same");
   
   leg = new TLegend(0.5,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("DisttoEdge_1","ME11A: mean:-9.2cm;RMS:2.3cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_2","ME11B: mean:-12.1cm;RMS:3.8cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_3","ME12+13: mean:-19.0cm;RMS:8.0cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_4","ME2: mean:-22.5cm;RMS:10.2cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_5","ME3: mean:-23.1cm;RMS:10.8cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_6","ME4: mean:-23.1cm;RMS:11.0cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1D *DisttoEdge_6__12 = new TH1D("DisttoEdge_6__12","DisttoEdge",100,-60,0);
   DisttoEdge_6__12->SetBinContent(7,0.005964997);
   DisttoEdge_6__12->SetBinContent(8,0.01550899);
   DisttoEdge_6__12->SetBinContent(9,0.03380165);
   DisttoEdge_6__12->SetBinContent(10,0.04931065);
   DisttoEdge_6__12->SetBinContent(11,0.06283131);
   DisttoEdge_6__12->SetBinContent(12,0.07515897);
   DisttoEdge_6__12->SetBinContent(13,0.0866913);
   DisttoEdge_6__12->SetBinContent(14,0.07277297);
   DisttoEdge_6__12->SetBinContent(15,0.08947496);
   DisttoEdge_6__12->SetBinContent(16,0.1125396);
   DisttoEdge_6__12->SetBinContent(17,0.1336159);
   DisttoEdge_6__12->SetBinContent(18,0.1912776);
   DisttoEdge_6__12->SetBinContent(19,0.2095702);
   DisttoEdge_6__12->SetBinContent(20,0.2676295);
   DisttoEdge_6__12->SetBinContent(21,0.3129635);
   DisttoEdge_6__12->SetBinContent(22,0.3765902);
   DisttoEdge_6__12->SetBinContent(23,0.4195382);
   DisttoEdge_6__12->SetBinContent(24,0.4203335);
   DisttoEdge_6__12->SetBinContent(25,0.4418075);
   DisttoEdge_6__12->SetBinContent(26,0.4986738);
   DisttoEdge_6__12->SetBinContent(27,0.5209431);
   DisttoEdge_6__12->SetBinContent(28,0.5603121);
   DisttoEdge_6__12->SetBinContent(29,0.5968974);
   DisttoEdge_6__12->SetBinContent(30,0.660524);
   DisttoEdge_6__12->SetBinContent(31,0.6589334);
   DisttoEdge_6__12->SetBinContent(32,0.714209);
   DisttoEdge_6__12->SetBinContent(33,0.736876);
   DisttoEdge_6__12->SetBinContent(34,0.7519873);
   DisttoEdge_6__12->SetBinContent(35,0.7659057);
   DisttoEdge_6__12->SetBinContent(36,0.833509);
   DisttoEdge_6__12->SetBinContent(37,0.8947496);
   DisttoEdge_6__12->SetBinContent(38,0.9205979);
   DisttoEdge_6__12->SetBinContent(39,1.014845);
   DisttoEdge_6__12->SetBinContent(40,1.008482);
   DisttoEdge_6__12->SetBinContent(41,1.114659);
   DisttoEdge_6__12->SetBinContent(42,1.119034);
   DisttoEdge_6__12->SetBinContent(43,1.189818);
   DisttoEdge_6__12->SetBinContent(44,1.188227);
   DisttoEdge_6__12->SetBinContent(45,1.234357);
   DisttoEdge_6__12->SetBinContent(46,1.232766);
   DisttoEdge_6__12->SetBinContent(47,1.265375);
   DisttoEdge_6__12->SetBinContent(48,1.319457);
   DisttoEdge_6__12->SetBinContent(49,1.375131);
   DisttoEdge_6__12->SetBinContent(50,1.401774);
   DisttoEdge_6__12->SetBinContent(51,1.385868);
   DisttoEdge_6__12->SetBinContent(52,1.437167);
   DisttoEdge_6__12->SetBinContent(53,1.509144);
   DisttoEdge_6__12->SetBinContent(54,1.576748);
   DisttoEdge_6__12->SetBinContent(55,1.566011);
   DisttoEdge_6__12->SetBinContent(56,1.647532);
   DisttoEdge_6__12->SetBinContent(57,1.61731);
   DisttoEdge_6__12->SetBinContent(58,1.75013);
   DisttoEdge_6__12->SetBinContent(59,1.759674);
   DisttoEdge_6__12->SetBinContent(60,1.814552);
   DisttoEdge_6__12->SetBinContent(61,1.874998);
   DisttoEdge_6__12->SetBinContent(62,1.878974);
   DisttoEdge_6__12->SetBinContent(63,1.947373);
   DisttoEdge_6__12->SetBinContent(64,1.954928);
   DisttoEdge_6__12->SetBinContent(65,1.972426);
   DisttoEdge_6__12->SetBinContent(66,2.027304);
   DisttoEdge_6__12->SetBinContent(67,1.9939);
   DisttoEdge_6__12->SetBinContent(68,1.978788);
   DisttoEdge_6__12->SetBinContent(69,2.003841);
   DisttoEdge_6__12->SetBinContent(70,2.035257);
   DisttoEdge_6__12->SetBinContent(71,1.97004);
   DisttoEdge_6__12->SetBinContent(72,2.04162);
   DisttoEdge_6__12->SetBinContent(73,1.95294);
   DisttoEdge_6__12->SetBinContent(74,2.014976);
   DisttoEdge_6__12->SetBinContent(75,1.951747);
   DisttoEdge_6__12->SetBinContent(76,1.976402);
   DisttoEdge_6__12->SetBinContent(77,1.968449);
   DisttoEdge_6__12->SetBinContent(78,1.935443);
   DisttoEdge_6__12->SetBinContent(79,1.890109);
   DisttoEdge_6__12->SetBinContent(80,1.822903);
   DisttoEdge_6__12->SetBinContent(81,1.851535);
   DisttoEdge_6__12->SetBinContent(82,1.782739);
   DisttoEdge_6__12->SetBinContent(83,1.712352);
   DisttoEdge_6__12->SetBinContent(84,1.737405);
   DisttoEdge_6__12->SetBinContent(85,1.651907);
   DisttoEdge_6__12->SetBinContent(86,1.599017);
   DisttoEdge_6__12->SetBinContent(87,1.538969);
   DisttoEdge_6__12->SetBinContent(88,1.441939);
   DisttoEdge_6__12->SetBinContent(89,1.391833);
   DisttoEdge_6__12->SetBinContent(90,1.268158);
   DisttoEdge_6__12->SetBinContent(91,1.126589);
   DisttoEdge_6__12->SetBinContent(92,0.685577);
   DisttoEdge_6__12->SetEntries(251467);
   DisttoEdge_6__12->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   DisttoEdge_6__12->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   DisttoEdge_6__12->SetMarkerColor(ci);
   DisttoEdge_6__12->GetXaxis()->SetTitle("cm");
   DisttoEdge_6__12->GetYaxis()->SetTitle("scaled number of entries");
   DisttoEdge_6__12->Draw("H,same");
   
   leg = new TLegend(0.5,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("DisttoEdge_1","ME11A: mean:-9.2cm;RMS:2.3cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_2","ME11B: mean:-12.1cm;RMS:3.8cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_3","ME12+13: mean:-19.0cm;RMS:8.0cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_4","ME2: mean:-22.5cm;RMS:10.2cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_5","ME3: mean:-23.1cm;RMS:10.8cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("DisttoEdge_6","ME4: mean:-23.1cm;RMS:11.0cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.01,0.9390678,0.263871,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   TText *AText = pt->AddText("DisttoEdge");
   pt->Draw();
   DisttoEdge->Modified();
   DisttoEdge->cd();
   DisttoEdge->SetSelected(DisttoEdge);
}
