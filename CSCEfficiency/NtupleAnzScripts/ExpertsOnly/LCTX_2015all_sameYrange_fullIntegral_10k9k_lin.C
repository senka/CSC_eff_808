void LCTX_2015all_sameYrange_fullIntegral_10k9k_lin()
{
//=========Macro generated from canvas: LCTX/LCTX
//=========  (Mon Aug  8 07:49:46 2016) by ROOT version6.06/01
   TCanvas *LCTX = new TCanvas("LCTX", "LCTX",0,0,500,500);
   gStyle->SetOptStat(0);
   LCTX->SetHighLightColor(2);
   LCTX->Range(-125,-7.494376,125,67.49938);
   LCTX->SetFillColor(0);
   LCTX->SetBorderMode(0);
   LCTX->SetBorderSize(2);
   LCTX->SetFrameBorderMode(0);
   LCTX->SetFrameBorderMode(0);
   
   TH1D *LCTX_1__43 = new TH1D("LCTX_1__43","LCTX",100,-100,100);
   LCTX_1__43->SetBinContent(0,78.77692);
   LCTX_1__43->SetBinContent(40,0.0002601856);
   LCTX_1__43->SetBinContent(41,0.001040742);
   LCTX_1__43->SetBinContent(42,0.003122227);
   LCTX_1__43->SetBinContent(43,0.007025012);
   LCTX_1__43->SetBinContent(44,0.08039736);
   LCTX_1__43->SetBinContent(45,0.3413635);
   LCTX_1__43->SetBinContent(46,0.7728814);
   LCTX_1__43->SetBinContent(47,1.735568);
   LCTX_1__43->SetBinContent(48,2.508319);
   LCTX_1__43->SetBinContent(49,2.539282);
   LCTX_1__43->SetBinContent(50,2.655194);
   LCTX_1__43->SetBinContent(51,2.623972);
   LCTX_1__43->SetBinContent(52,2.537981);
   LCTX_1__43->SetBinContent(53,2.501294);
   LCTX_1__43->SetBinContent(54,1.697451);
   LCTX_1__43->SetBinContent(55,0.7437406);
   LCTX_1__43->SetBinContent(56,0.3310862);
   LCTX_1__43->SetBinContent(57,0.105115);
   LCTX_1__43->SetBinContent(58,0.01587132);
   LCTX_1__43->SetBinContent(59,0.009887053);
   LCTX_1__43->SetBinContent(60,0.005984269);
   LCTX_1__43->SetBinContent(61,0.003902784);
   LCTX_1__43->SetBinContent(62,0.001821299);
   LCTX_1__43->SetBinContent(64,0.0002601856);
   LCTX_1__43->SetBinContent(67,0.0002601856);
   LCTX_1__43->SetMinimum(0.005);
   LCTX_1__43->SetMaximum(60);
   LCTX_1__43->SetEntries(768682);
   LCTX_1__43->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff00ff");
   LCTX_1__43->SetLineColor(ci);

   ci = TColor::GetColor("#ff00ff");
   LCTX_1__43->SetMarkerColor(ci);
   LCTX_1__43->GetXaxis()->SetTitle("cm");
   LCTX_1__43->GetYaxis()->SetTitle("scaled number of entries");
   LCTX_1__43->Draw("H");
   
   TLegend *leg = new TLegend(0.5,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("LCTX_1","ME11A: mean:0.0cm;RMS:5.3cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_2","ME11B: mean:-0.1cm;RMS:8.4cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_3","ME12+13: mean:0.0cm;RMS:17.5cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_4","ME2: mean:-0.1cm;RMS:23.1cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_5","ME3: mean:-0.1cm;RMS:23.9cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_6","ME4: mean:-0.2cm;RMS:24.2cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1D *LCTX_2__44 = new TH1D("LCTX_2__44","LCTX",100,-100,100);
   LCTX_2__44->SetBinContent(0,72.66503);
   LCTX_2__44->SetBinContent(39,0.005422742);
   LCTX_2__44->SetBinContent(40,0.03253645);
   LCTX_2__44->SetBinContent(41,0.08476602);
   LCTX_2__44->SetBinContent(42,0.2988216);
   LCTX_2__44->SetBinContent(43,0.6561518);
   LCTX_2__44->SetBinContent(44,1.07356);
   LCTX_2__44->SetBinContent(45,1.467066);
   LCTX_2__44->SetBinContent(46,1.922647);
   LCTX_2__44->SetBinContent(47,2.018188);
   LCTX_2__44->SetBinContent(48,2.02889);
   LCTX_2__44->SetBinContent(49,2.076339);
   LCTX_2__44->SetBinContent(50,2.054363);
   LCTX_2__44->SetBinContent(51,2.072843);
   LCTX_2__44->SetBinContent(52,2.088041);
   LCTX_2__44->SetBinContent(53,2.00563);
   LCTX_2__44->SetBinContent(54,2.033528);
   LCTX_2__44->SetBinContent(55,1.880407);
   LCTX_2__44->SetBinContent(56,1.441308);
   LCTX_2__44->SetBinContent(57,1.037956);
   LCTX_2__44->SetBinContent(58,0.6467333);
   LCTX_2__44->SetBinContent(59,0.3016043);
   LCTX_2__44->SetBinContent(60,0.07534757);
   LCTX_2__44->SetBinContent(61,0.02882615);
   LCTX_2__44->SetBinContent(62,0.003710297);
   LCTX_2__44->SetBinContent(63,0.0002854075);
   LCTX_2__44->SetEntries(1401505);
   LCTX_2__44->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   LCTX_2__44->SetLineColor(ci);

   ci = TColor::GetColor("#ff9999");
   LCTX_2__44->SetMarkerColor(ci);
   LCTX_2__44->GetXaxis()->SetTitle("cm");
   LCTX_2__44->GetYaxis()->SetTitle("scaled number of entries");
   LCTX_2__44->Draw("H,same");
   
   leg = new TLegend(0.5,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("LCTX_1","ME11A: mean:0.0cm;RMS:5.3cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_2","ME11B: mean:-0.1cm;RMS:8.4cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_3","ME12+13: mean:0.0cm;RMS:17.5cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_4","ME2: mean:-0.1cm;RMS:23.1cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_5","ME3: mean:-0.1cm;RMS:23.9cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_6","ME4: mean:-0.2cm;RMS:24.2cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1D *LCTX_3__45 = new TH1D("LCTX_3__45","LCTX",100,-100,100);
   LCTX_3__45->SetBinContent(0,46.63707);
   LCTX_3__45->SetBinContent(30,0.003057409);
   LCTX_3__45->SetBinContent(31,0.01485027);
   LCTX_3__45->SetBinContent(32,0.06333205);
   LCTX_3__45->SetBinContent(33,0.1939271);
   LCTX_3__45->SetBinContent(34,0.4068538);
   LCTX_3__45->SetBinContent(35,0.5798159);
   LCTX_3__45->SetBinContent(36,0.9840491);
   LCTX_3__45->SetBinContent(37,1.340456);
   LCTX_3__45->SetBinContent(38,1.612128);
   LCTX_3__45->SetBinContent(39,1.662139);
   LCTX_3__45->SetBinContent(40,1.781815);
   LCTX_3__45->SetBinContent(41,1.768493);
   LCTX_3__45->SetBinContent(42,1.742505);
   LCTX_3__45->SetBinContent(43,1.828986);
   LCTX_3__45->SetBinContent(44,1.733551);
   LCTX_3__45->SetBinContent(45,1.882709);
   LCTX_3__45->SetBinContent(46,1.854974);
   LCTX_3__45->SetBinContent(47,1.826147);
   LCTX_3__45->SetBinContent(48,1.827239);
   LCTX_3__45->SetBinContent(49,1.700575);
   LCTX_3__45->SetBinContent(50,2.14914);
   LCTX_3__45->SetBinContent(51,1.522153);
   LCTX_3__45->SetBinContent(52,1.902801);
   LCTX_3__45->SetBinContent(53,1.780504);
   LCTX_3__45->SetBinContent(54,1.794918);
   LCTX_3__45->SetBinContent(55,1.765436);
   LCTX_3__45->SetBinContent(56,1.794918);
   LCTX_3__45->SetBinContent(57,1.857158);
   LCTX_3__45->SetBinContent(58,1.690529);
   LCTX_3__45->SetBinContent(59,1.824181);
   LCTX_3__45->SetBinContent(60,1.795791);
   LCTX_3__45->SetBinContent(61,1.748838);
   LCTX_3__45->SetBinContent(62,1.744252);
   LCTX_3__45->SetBinContent(63,1.625668);
   LCTX_3__45->SetBinContent(64,1.315123);
   LCTX_3__45->SetBinContent(65,0.930326);
   LCTX_3__45->SetBinContent(66,0.6280792);
   LCTX_3__45->SetBinContent(67,0.4396118);
   LCTX_3__45->SetBinContent(68,0.1782033);
   LCTX_3__45->SetBinContent(69,0.05153919);
   LCTX_3__45->SetBinContent(70,0.01310318);
   LCTX_3__45->SetBinContent(71,0.002620637);
   LCTX_3__45->SetBinContent(72,0.0004367728);
   LCTX_3__45->SetEntries(457904);
   LCTX_3__45->SetStats(0);
   LCTX_3__45->GetXaxis()->SetTitle("cm");
   LCTX_3__45->GetYaxis()->SetTitle("scaled number of entries");
   LCTX_3__45->Draw("H,same");
   
   leg = new TLegend(0.5,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("LCTX_1","ME11A: mean:0.0cm;RMS:5.3cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_2","ME11B: mean:-0.1cm;RMS:8.4cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_3","ME12+13: mean:0.0cm;RMS:17.5cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_4","ME2: mean:-0.1cm;RMS:23.1cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_5","ME3: mean:-0.1cm;RMS:23.9cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_6","ME4: mean:-0.2cm;RMS:24.2cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1D *LCTX_4__46 = new TH1D("LCTX_4__46","LCTX",100,-100,100);
   LCTX_4__46->SetBinContent(0,66.51612);
   LCTX_4__46->SetBinContent(20,0.0007136157);
   LCTX_4__46->SetBinContent(21,0.001784039);
   LCTX_4__46->SetBinContent(22,0.006422542);
   LCTX_4__46->SetBinContent(23,0.02060565);
   LCTX_4__46->SetBinContent(24,0.05472541);
   LCTX_4__46->SetBinContent(25,0.08054938);
   LCTX_4__46->SetBinContent(26,0.1234109);
   LCTX_4__46->SetBinContent(27,0.1491011);
   LCTX_4__46->SetBinContent(28,0.171357);
   LCTX_4__46->SetBinContent(29,0.2218007);
   LCTX_4__46->SetBinContent(30,0.2870965);
   LCTX_4__46->SetBinContent(31,0.3240707);
   LCTX_4__46->SetBinContent(32,0.4097938);
   LCTX_4__46->SetBinContent(33,0.4671507);
   LCTX_4__46->SetBinContent(34,0.5288785);
   LCTX_4__46->SetBinContent(35,0.6272682);
   LCTX_4__46->SetBinContent(36,0.7326604);
   LCTX_4__46->SetBinContent(37,0.8017473);
   LCTX_4__46->SetBinContent(38,0.8483553);
   LCTX_4__46->SetBinContent(39,0.9196277);
   LCTX_4__46->SetBinContent(40,0.9008507);
   LCTX_4__46->SetBinContent(41,0.9000925);
   LCTX_4__46->SetBinContent(42,0.9089235);
   LCTX_4__46->SetBinContent(43,0.9141864);
   LCTX_4__46->SetBinContent(44,0.9222145);
   LCTX_4__46->SetBinContent(45,0.9086112);
   LCTX_4__46->SetBinContent(46,0.9030361);
   LCTX_4__46->SetBinContent(47,0.9251136);
   LCTX_4__46->SetBinContent(48,0.9041511);
   LCTX_4__46->SetBinContent(49,0.8989774);
   LCTX_4__46->SetBinContent(50,1.072877);
   LCTX_4__46->SetBinContent(51,0.7805618);
   LCTX_4__46->SetBinContent(52,0.9087896);
   LCTX_4__46->SetBinContent(53,0.9372451);
   LCTX_4__46->SetBinContent(54,0.8920197);
   LCTX_4__46->SetBinContent(55,0.9140972);
   LCTX_4__46->SetBinContent(56,0.9326958);
   LCTX_4__46->SetBinContent(57,0.9042403);
   LCTX_4__46->SetBinContent(58,0.8837239);
   LCTX_4__46->SetBinContent(59,0.88863);
   LCTX_4__46->SetBinContent(60,0.8941159);
   LCTX_4__46->SetBinContent(61,0.8894328);
   LCTX_4__46->SetBinContent(62,0.887738);
   LCTX_4__46->SetBinContent(63,0.8584351);
   LCTX_4__46->SetBinContent(64,0.7846651);
   LCTX_4__46->SetBinContent(65,0.7067472);
   LCTX_4__46->SetBinContent(66,0.6186156);
   LCTX_4__46->SetBinContent(67,0.5241954);
   LCTX_4__46->SetBinContent(68,0.4645192);
   LCTX_4__46->SetBinContent(69,0.4198737);
   LCTX_4__46->SetBinContent(70,0.3341506);
   LCTX_4__46->SetBinContent(71,0.279113);
   LCTX_4__46->SetBinContent(72,0.2151551);
   LCTX_4__46->SetBinContent(73,0.1925424);
   LCTX_4__46->SetBinContent(74,0.1512419);
   LCTX_4__46->SetBinContent(75,0.1219391);
   LCTX_4__46->SetBinContent(76,0.08322544);
   LCTX_4__46->SetBinContent(77,0.04727704);
   LCTX_4__46->SetBinContent(78,0.02185448);
   LCTX_4__46->SetBinContent(79,0.008206581);
   LCTX_4__46->SetBinContent(80,0.002051645);
   LCTX_4__46->SetBinContent(81,0.0005352118);
   LCTX_4__46->SetBinContent(82,8.920197e-05);
   LCTX_4__46->SetEntries(2242103);
   LCTX_4__46->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   LCTX_4__46->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   LCTX_4__46->SetMarkerColor(ci);
   LCTX_4__46->GetXaxis()->SetTitle("cm");
   LCTX_4__46->GetYaxis()->SetTitle("scaled number of entries");
   LCTX_4__46->Draw("H,same");
   
   leg = new TLegend(0.5,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("LCTX_1","ME11A: mean:0.0cm;RMS:5.3cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_2","ME11B: mean:-0.1cm;RMS:8.4cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_3","ME12+13: mean:0.0cm;RMS:17.5cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_4","ME2: mean:-0.1cm;RMS:23.1cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_5","ME3: mean:-0.1cm;RMS:23.9cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_6","ME4: mean:-0.2cm;RMS:24.2cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1D *LCTX_5__47 = new TH1D("LCTX_5__47","LCTX",100,-100,100);
   LCTX_5__47->SetBinContent(0,61.19938);
   LCTX_5__47->SetBinContent(19,0.0003575374);
   LCTX_5__47->SetBinContent(20,0.0004767166);
   LCTX_5__47->SetBinContent(21,0.002145225);
   LCTX_5__47->SetBinContent(22,0.005482241);
   LCTX_5__47->SetBinContent(23,0.02919889);
   LCTX_5__47->SetBinContent(24,0.0685876);
   LCTX_5__47->SetBinContent(25,0.1047585);
   LCTX_5__47->SetBinContent(26,0.151);
   LCTX_5__47->SetBinContent(27,0.1996847);
   LCTX_5__47->SetBinContent(28,0.23085);
   LCTX_5__47->SetBinContent(29,0.3028938);
   LCTX_5__47->SetBinContent(30,0.3783938);
   LCTX_5__47->SetBinContent(31,0.4389368);
   LCTX_5__47->SetBinContent(32,0.5231368);
   LCTX_5__47->SetBinContent(33,0.6116869);
   LCTX_5__47->SetBinContent(34,0.6790827);
   LCTX_5__47->SetBinContent(35,0.8052935);
   LCTX_5__47->SetBinContent(36,0.9335898);
   LCTX_5__47->SetBinContent(37,0.9811423);
   LCTX_5__47->SetBinContent(38,0.9667812);
   LCTX_5__47->SetBinContent(39,1.035011);
   LCTX_5__47->SetBinContent(40,1.003548);
   LCTX_5__47->SetBinContent(41,1.013499);
   LCTX_5__47->SetBinContent(42,0.992941);
   LCTX_5__47->SetBinContent(43,1.048836);
   LCTX_5__47->SetBinContent(44,1.019339);
   LCTX_5__47->SetBinContent(45,1.032508);
   LCTX_5__47->SetBinContent(46,0.9959205);
   LCTX_5__47->SetBinContent(47,1.001284);
   LCTX_5__47->SetBinContent(48,0.9680326);
   LCTX_5__47->SetBinContent(49,0.9553996);
   LCTX_5__47->SetBinContent(50,1.13977);
   LCTX_5__47->SetBinContent(51,0.8408088);
   LCTX_5__47->SetBinContent(52,0.9682113);
   LCTX_5__47->SetBinContent(53,1.008315);
   LCTX_5__47->SetBinContent(54,0.9634442);
   LCTX_5__47->SetBinContent(55,0.9982445);
   LCTX_5__47->SetBinContent(56,1.009149);
   LCTX_5__47->SetBinContent(57,0.991928);
   LCTX_5__47->SetBinContent(58,0.9910937);
   LCTX_5__47->SetBinContent(59,1.003488);
   LCTX_5__47->SetBinContent(60,1.031495);
   LCTX_5__47->SetBinContent(61,0.9854923);
   LCTX_5__47->SetBinContent(62,0.9744683);
   LCTX_5__47->SetBinContent(63,0.9970527);
   LCTX_5__47->SetBinContent(64,0.9996151);
   LCTX_5__47->SetBinContent(65,0.8839517);
   LCTX_5__47->SetBinContent(66,0.8125634);
   LCTX_5__47->SetBinContent(67,0.6926096);
   LCTX_5__47->SetBinContent(68,0.6014971);
   LCTX_5__47->SetBinContent(69,0.5351739);
   LCTX_5__47->SetBinContent(70,0.4345867);
   LCTX_5__47->SetBinContent(71,0.3797047);
   LCTX_5__47->SetBinContent(72,0.2848977);
   LCTX_5__47->SetBinContent(73,0.2314459);
   LCTX_5__47->SetBinContent(74,0.1974798);
   LCTX_5__47->SetBinContent(75,0.1481993);
   LCTX_5__47->SetBinContent(76,0.1102407);
   LCTX_5__47->SetBinContent(77,0.06179438);
   LCTX_5__47->SetBinContent(78,0.03194001);
   LCTX_5__47->SetBinContent(79,0.009534331);
   LCTX_5__47->SetBinContent(80,0.002145225);
   LCTX_5__47->SetBinContent(81,0.0004767166);
   LCTX_5__47->SetEntries(1678146);
   LCTX_5__47->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   LCTX_5__47->SetLineColor(ci);

   ci = TColor::GetColor("#00ff00");
   LCTX_5__47->SetMarkerColor(ci);
   LCTX_5__47->GetXaxis()->SetTitle("cm");
   LCTX_5__47->GetYaxis()->SetTitle("scaled number of entries");
   LCTX_5__47->Draw("H,same");
   
   leg = new TLegend(0.5,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("LCTX_1","ME11A: mean:0.0cm;RMS:5.3cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_2","ME11B: mean:-0.1cm;RMS:8.4cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_3","ME12+13: mean:0.0cm;RMS:17.5cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_4","ME2: mean:-0.1cm;RMS:23.1cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_5","ME3: mean:-0.1cm;RMS:23.9cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_6","ME4: mean:-0.2cm;RMS:24.2cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1D *LCTX_6__48 = new TH1D("LCTX_6__48","LCTX",100,-100,100);
   LCTX_6__48->SetBinContent(0,56.88638);
   LCTX_6__48->SetBinContent(20,0.0001505458);
   LCTX_6__48->SetBinContent(21,0.001204367);
   LCTX_6__48->SetBinContent(22,0.008430567);
   LCTX_6__48->SetBinContent(23,0.03537827);
   LCTX_6__48->SetBinContent(24,0.06736926);
   LCTX_6__48->SetBinContent(25,0.1299211);
   LCTX_6__48->SetBinContent(26,0.1776441);
   LCTX_6__48->SetBinContent(27,0.2301093);
   LCTX_6__48->SetBinContent(28,0.2933386);
   LCTX_6__48->SetBinContent(29,0.3914945);
   LCTX_6__48->SetBinContent(30,0.4445619);
   LCTX_6__48->SetBinContent(31,0.5299214);
   LCTX_6__48->SetBinContent(32,0.6018823);
   LCTX_6__48->SetBinContent(33,0.7296204);
   LCTX_6__48->SetBinContent(34,0.7992479);
   LCTX_6__48->SetBinContent(35,0.9400082);
   LCTX_6__48->SetBinContent(36,1.021604);
   LCTX_6__48->SetBinContent(37,1.067144);
   LCTX_6__48->SetBinContent(38,1.045541);
   LCTX_6__48->SetBinContent(39,1.117803);
   LCTX_6__48->SetBinContent(40,1.06052);
   LCTX_6__48->SetBinContent(41,1.108996);
   LCTX_6__48->SetBinContent(42,1.050208);
   LCTX_6__48->SetBinContent(43,1.109673);
   LCTX_6__48->SetBinContent(44,1.097178);
   LCTX_6__48->SetBinContent(45,1.129019);
   LCTX_6__48->SetBinContent(46,1.069553);
   LCTX_6__48->SetBinContent(47,1.113362);
   LCTX_6__48->SetBinContent(48,1.092436);
   LCTX_6__48->SetBinContent(49,1.052315);
   LCTX_6__48->SetBinContent(50,1.258714);
   LCTX_6__48->SetBinContent(51,0.9337606);
   LCTX_6__48->SetBinContent(52,1.115469);
   LCTX_6__48->SetBinContent(53,1.108544);
   LCTX_6__48->SetBinContent(54,1.052767);
   LCTX_6__48->SetBinContent(55,1.123223);
   LCTX_6__48->SetBinContent(56,1.101845);
   LCTX_6__48->SetBinContent(57,1.133309);
   LCTX_6__48->SetBinContent(58,1.066768);
   LCTX_6__48->SetBinContent(59,1.126233);
   LCTX_6__48->SetBinContent(60,1.07422);
   LCTX_6__48->SetBinContent(61,1.134062);
   LCTX_6__48->SetBinContent(62,1.06451);
   LCTX_6__48->SetBinContent(63,1.082726);
   LCTX_6__48->SetBinContent(64,1.040573);
   LCTX_6__48->SetBinContent(65,1.035228);
   LCTX_6__48->SetBinContent(66,0.9089205);
   LCTX_6__48->SetBinContent(67,0.8037642);
   LCTX_6__48->SetBinContent(68,0.6678966);
   LCTX_6__48->SetBinContent(69,0.5848706);
   LCTX_6__48->SetBinContent(70,0.5130602);
   LCTX_6__48->SetBinContent(71,0.4485513);
   LCTX_6__48->SetBinContent(72,0.3450511);
   LCTX_6__48->SetBinContent(73,0.2720363);
   LCTX_6__48->SetBinContent(74,0.2131729);
   LCTX_6__48->SetBinContent(75,0.1724503);
   LCTX_6__48->SetBinContent(76,0.1076403);
   LCTX_6__48->SetBinContent(77,0.06383144);
   LCTX_6__48->SetBinContent(78,0.03304481);
   LCTX_6__48->SetBinContent(79,0.00978548);
   LCTX_6__48->SetBinContent(80,0.001204367);
   LCTX_6__48->SetBinContent(81,0.0006021834);
   LCTX_6__48->SetBinContent(82,0.0001505458);
   LCTX_6__48->SetEntries(1328499);
   LCTX_6__48->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   LCTX_6__48->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   LCTX_6__48->SetMarkerColor(ci);
   LCTX_6__48->GetXaxis()->SetTitle("cm");
   LCTX_6__48->GetYaxis()->SetTitle("scaled number of entries");
   LCTX_6__48->Draw("H,same");
   
   leg = new TLegend(0.5,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("LCTX_1","ME11A: mean:0.0cm;RMS:5.3cm","l");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_2","ME11B: mean:-0.1cm;RMS:8.4cm","l");

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_3","ME12+13: mean:0.0cm;RMS:17.5cm","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_4","ME2: mean:-0.1cm;RMS:23.1cm","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_5","ME3: mean:-0.1cm;RMS:23.9cm","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("LCTX_6","ME4: mean:-0.2cm;RMS:24.2cm","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.01,0.945,0.1469355,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   TText *AText = pt->AddText("LCTX");
   pt->Draw();
   LCTX->Modified();
   LCTX->cd();
   LCTX->SetSelected(LCTX);
}
