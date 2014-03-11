// C++
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdio>
#include <set>
//ROOT
#include "TROOT.h"
#include "TFile.h"
#include "TChain.h"
#include "TTree.h"
#include "THStack.h"
#include "TLegend.h"
#include "TStyle.h"
#include "TCanvas.h"
#include "TLatex.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TLine.h"
#include "Math/LorentzVector.h"
#include "Math/VectorUtil.h"

struct DorkyEventIdentifier {
  // this is a workaround for not having unique event id's in MC
  unsigned long int evt_run, evt_event, evt_lumi;
  bool operator < (const DorkyEventIdentifier &) const;
  bool operator == (const DorkyEventIdentifier &) const;
};

bool DorkyEventIdentifier::operator < (const DorkyEventIdentifier &other) const
{
  if (evt_run != other.evt_run)
    return evt_run < other.evt_run;
  if (evt_event != other.evt_event)
    return evt_event < other.evt_event;
  if(evt_lumi != other.evt_lumi)
    return evt_lumi < other.evt_lumi;
  return false;
}

bool DorkyEventIdentifier::operator == (const DorkyEventIdentifier &other) const
{
  if (evt_run != other.evt_run)
    return false;
  if (evt_event != other.evt_event)
    return false;
  return true;
}

std::set<DorkyEventIdentifier> already_seen;
bool is_duplicate (const DorkyEventIdentifier &id) {
  std::pair<std::set<DorkyEventIdentifier>::const_iterator, bool> ret =
    already_seen.insert(id);
  return !ret.second;
}




		//NORMALIZE//
//Normalize to normalize a histogram
template <class T>
T Normalize (T a) {
  T result;
	double integral = a->Integral();
	if (integral > 0){a->Scale(100*(1/integral));}
  return (result);
}

//Normalize2 to normalize two histograms stacked
template <class T>
T Normalize2 (T a) {
  T result;
	double integral = a->Integral();
	if (integral > 0){a->Scale(50*(1/integral));}
  return (result);
}
//Normalize3 to normalize two histograms stacked
template <class T>
T Normalize3 (T a) {
  T result;
	double integral = a->Integral();
	if (integral > 0){a->Scale(100*(1/(3*integral)));}
  return (result);
}
//Normalize4 to normalize two histograms stacked
template <class T>
T Normalize4 (T a) {
  T result;
	double integral = a->Integral();
	if (integral > 0){a->Scale(25*(1/integral));}
  return (result);
}
//Normalize5 to normalize two histograms stacked
template <class T>
T Normalize5 (T a) {
  T result;
	double integral = a->Integral();
	if (integral > 0){a->Scale(20*(1/integral));}
  return (result);
}

//Normalize6 to normalize two histograms stacked
template <class T>
T Normalize6 (T a) {
  T result;
	double integral = a->Integral();
	if (integral > 0){a->Scale(100*(1/(6*integral)));}
  return (result);
}

	//GET BIN CONTENT//	
template <class get>
	get getbin (get a, const string b) {
	get result;
	//delete getbincontent, then make new directory//
	//system("exec rm -r /home/users/sanil/MT2/getbincontent");
	//system("exec mkdir /home/users/sanil/MT2/getbincontent");
	const string c =  "/home/users/sanil/MT2/getbincontent/" + b + ".txt";
	const char* d = c.c_str();

	ofstream file(d);
	if(! file.is_open()){return 0;}
	if(file.is_open()){
	int max = a->FindLastBinAbove(0,1);
		for (int i=1; (i <= max); i++ ){
	file << a->GetBinContent(i) << endl;
				}
			  }
  return (result);
		}
/*
	template <class histo>
	histo color_histo (histo a, const char b) {
	histo result;

	a->SetFillColor(b);
	a->SetLineColor(b);

  return (result);
		}
	template<class leg>
	leg leg_Draw (leg a){
	leg result;
	
	
  return (result);
}
*/
