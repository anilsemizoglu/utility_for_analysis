// C++
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <iomanip>
#include <fstream>
#include <cstdio>

//get time and date for getbin file name
/*
const std::string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%m-%d-%y", &tstruct);
    return buf;
}
*/
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
		for (unsigned int i=1; (i <= max); i++ ){
	file << a->GetBinContent(i) << endl;
				}
			  }
  return (result);
		}

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
