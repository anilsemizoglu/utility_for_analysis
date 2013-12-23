#include "ACS.h"
ACS acs;
namespace tas {
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jets_p4() 	{ return acs.jets_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jets_p4_cut(){ return acs.jets_p4_cut(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &gen_ps_p4()  { return acs.gen_ps_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &gen_b() 	{ return acs.gen_b(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jet_b() 	{ return acs.jet_b(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &gen_mm_p4()  { return acs.gen_mm_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &gen_em_p4()  { return acs.gen_em_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &gen_ee_p4()  { return acs.gen_ee_p4(); }
std::vector<ROOT::Math::LorentzVector <ROOT::Math::PxPyPzE4D<float> > > &all_p4()		{ return acs.all_p4(); }
std::vector<ROOT::Math::LorentzVector <ROOT::Math::PxPyPzE4D<float> > > &ll_p4() 		{ return acs.ll_p4(); }
std::vector<ROOT::Math::LorentzVector <ROOT::Math::PxPyPzE4D<float> > > &lt_p4() 		{ return acs.lt_p4(); }
	std::vector<int>   &genpsid() 							{ return acs.genpsid();}
	std::vector<bool>  &is_b() 							{ return acs.is_b();}
	std::vector<float> &btagDisc() 							{ return acs.btagDisc();}
	float &met() 	   								{ return acs.met(); }
	float &genmet()    								{ return acs.genmet(); }
	float &met_cor()   								{ return acs.met_cor(); }
	float &metphi()    								{ return acs.metphi(); }
	float &genmetphi() 								{ return acs.genmetphi(); }
	float &scale_1fb() 								{ return acs.scale_1fb(); }
	int &type() 	   								{ return acs.type(); }
	int &ll_id() 	   								{ return acs.ll_id(); }
	int &lt_id() 	   								{ return acs.lt_id(); }
	int &ll_charge()   								{ return acs.ll_charge(); }
	int &lt_charge()   								{ return acs.lt_charge(); }
	int &ll_index()    								{ return acs.ll_index(); }
	int &lt_index()    								{ return acs.lt_index(); }
}
