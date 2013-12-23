// -*- C++ -*-
#ifndef ACS_H
#define ACS_H
#include "Math/LorentzVector.h"
#include "Math/Point3D.h"
#include "TMath.h"
#include "TBranch.h"
#include "TTree.h"
#include "TH1F.h"
#include "TFile.h"
#include "TBits.h"
#include <vector> 
typedef ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > LorentzVector;

using namespace std; 
class ACS {
private: 
protected: 
	unsigned int index;
	float	met_;
	TBranch *met_branch;
	bool met_isLoaded;
	float	metphi_;
	TBranch *metphi_branch;
	bool metphi_isLoaded;
	float	met_cor_;
	TBranch *met_cor_branch;
	bool met_cor_isLoaded;
	float	genmet_;
	TBranch *genmet_branch;
	bool genmet_isLoaded;
	float	genmetphi_;
	TBranch *genmetphi_branch;
	bool genmetphi_isLoaded;
	float	scale_1fb_;
	TBranch *scale_1fb_branch;
	bool scale_1fb_isLoaded;

	int	type_;
	TBranch *type_branch;
	bool type_isLoaded;
	int	ll_id_;
	TBranch *ll_id_branch;
	bool ll_id_isLoaded;
	int	lt_id_;
	TBranch *lt_id_branch;
	bool lt_id_isLoaded;
	int	ll_charge_;
	TBranch *ll_charge_branch;
	bool ll_charge_isLoaded;
	int	lt_charge_;
	TBranch *lt_charge_branch;
	bool lt_charge_isLoaded;
	int	ll_index_;
	TBranch *ll_index_branch;
	bool ll_index_isLoaded;
	int	lt_index_;
	TBranch *lt_index_branch;
	bool lt_index_isLoaded;

	vector<int> *genpsid_;
	TBranch *genpsid_branch;
	bool genpsid_isLoaded;
	vector<float> *btagDisc_;
	TBranch *btagDisc_branch;
	bool btagDisc_isLoaded;
	vector<bool> *is_b_;
	TBranch *is_b_branch;
	bool is_b_isLoaded;

	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > *jets_p4_;
	TBranch *jets_p4_branch;
	bool jets_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > *jets_p4_cut_;
	TBranch *jets_p4_cut_branch;
	bool jets_p4_cut_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > *gen_ps_p4_;
	TBranch *gen_ps_p4_branch;
	bool gen_ps_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > *all_p4_;
	TBranch *all_p4_branch;
	bool all_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > *ll_p4_;
	TBranch *ll_p4_branch;
	bool ll_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > *lt_p4_;
	TBranch *lt_p4_branch;
	bool lt_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > *jet_b_;
	TBranch *jet_b_branch;
	bool jet_b_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > *gen_b_;
	TBranch *gen_b_branch;
	bool gen_b_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > *gen_mm_p4_;
	TBranch *gen_mm_p4_branch;
	bool gen_mm_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > *gen_ee_p4_;
	TBranch *gen_ee_p4_branch;
	bool gen_ee_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > *gen_em_p4_;
	TBranch *gen_em_p4_branch;
	bool gen_em_p4_isLoaded;
public: 
void Init(TTree *tree) {
	jets_p4_branch = 0;
	if (tree->GetBranch("jets_p4") != 0) {
		jets_p4_branch = tree->GetBranch("jets_p4");
		jets_p4_branch->SetAddress(&jets_p4_);
	}
	jets_p4_cut_branch = 0;
	if (tree->GetBranch("jets_p4_cut") != 0) {
		jets_p4_cut_branch = tree->GetBranch("jets_p4_cut");
		jets_p4_cut_branch->SetAddress(&jets_p4_cut_);
	}
	gen_ps_p4_branch = 0;
	if (tree->GetBranch("gen_ps_p4") != 0) {
		gen_ps_p4_branch = tree->GetBranch("gen_ps_p4");
		gen_ps_p4_branch->SetAddress(&gen_ps_p4_);
	}

	all_p4_branch = 0;
	if (tree->GetBranch("all_p4") != 0) {
		all_p4_branch = tree->GetBranch("all_p4");
		all_p4_branch->SetAddress(&all_p4_);
	}
	ll_p4_branch = 0;
	if (tree->GetBranch("ll_p4") != 0) {
		ll_p4_branch = tree->GetBranch("ll_p4");
		ll_p4_branch->SetAddress(&ll_p4_);
	}
	lt_p4_branch = 0;
	if (tree->GetBranch("lt_p4") != 0) {
		lt_p4_branch = tree->GetBranch("lt_p4");
		lt_p4_branch->SetAddress(&lt_p4_);
	}


	jet_b_branch = 0;
	if (tree->GetBranch("jet_b") != 0) {
		jet_b_branch = tree->GetBranch("jet_b");
		jet_b_branch->SetAddress(&jet_b_);
	}
	gen_b_branch = 0;
	if (tree->GetBranch("gen_b") != 0) {
		gen_b_branch = tree->GetBranch("gen_b");
		gen_b_branch->SetAddress(&gen_b_);
	}
	is_b_branch = 0;
	if (tree->GetBranch("is_b") != 0) {
		is_b_branch = tree->GetBranch("is_b");
		is_b_branch->SetAddress(&gen_b_);
	}
	gen_mm_p4_branch = 0;
	if (tree->GetBranch("gen_mm_p4") != 0) {
		gen_mm_p4_branch = tree->GetBranch("gen_mm_p4");
		gen_mm_p4_branch->SetAddress(&gen_mm_p4_);
	}
	gen_ee_p4_branch = 0;
	if (tree->GetBranch("gen_ee_p4") != 0) {
		gen_ee_p4_branch = tree->GetBranch("gen_ee_p4");
		gen_ee_p4_branch->SetAddress(&gen_ee_p4_);
	}
	gen_em_p4_branch = 0;
	if (tree->GetBranch("gen_em_p4") != 0) {
		gen_em_p4_branch = tree->GetBranch("gen_em_p4");
		gen_em_p4_branch->SetAddress(&gen_em_p4_);
	}
  tree->SetMakeClass(1);
	met_branch = 0;
	if (tree->GetBranch("met") != 0) {
		met_branch = tree->GetBranch("met");
		met_branch->SetAddress(&met_);
	}
	genmet_branch = 0;
	if (tree->GetBranch("genmet") != 0) {
		genmet_branch = tree->GetBranch("genmet");
		genmet_branch->SetAddress(&genmet_);
	}
	genmetphi_branch = 0;
	if (tree->GetBranch("genmetphi") != 0) {
		genmetphi_branch = tree->GetBranch("genmetphi");
		genmetphi_branch->SetAddress(&genmetphi_);
	}
	metphi_branch = 0;
	if (tree->GetBranch("metphi") != 0) {
		metphi_branch = tree->GetBranch("metphi");
		metphi_branch->SetAddress(&metphi_);
	}
	met_cor_branch = 0;
	if (tree->GetBranch("met_cor") != 0) {
		met_cor_branch = tree->GetBranch("met_cor");
		met_cor_branch->SetAddress(&met_cor_);
	}
	type_branch = 0;
	if (tree->GetBranch("type") != 0) {
		type_branch = tree->GetBranch("type");
		type_branch->SetAddress(&type_);
	}
	ll_id_branch = 0;
	if (tree->GetBranch("ll_id") != 0) {
		ll_id_branch = tree->GetBranch("ll_id");
		ll_id_branch->SetAddress(&ll_id_);
	}
	lt_id_branch = 0;
	if (tree->GetBranch("lt_id") != 0) {
		lt_id_branch = tree->GetBranch("lt_id");
		lt_id_branch->SetAddress(&lt_id_);
	}
	ll_charge_branch = 0;
	if (tree->GetBranch("ll_charge") != 0) {
		ll_charge_branch = tree->GetBranch("ll_charge");
		ll_charge_branch->SetAddress(&ll_charge_);
	}
	lt_charge_branch = 0;
	if (tree->GetBranch("lt_charge") != 0) {
		lt_charge_branch = tree->GetBranch("lt_charge");
		lt_charge_branch->SetAddress(&lt_charge_);
	}
	ll_index_branch = 0;
	if (tree->GetBranch("ll_index") != 0) {
		ll_index_branch = tree->GetBranch("ll_index");
		ll_index_branch->SetAddress(&ll_index_);
	}
	lt_index_branch = 0;
	if (tree->GetBranch("lt_index") != 0) {
		lt_index_branch = tree->GetBranch("lt_index");
		lt_index_branch->SetAddress(&lt_index_);
	}
	scale_1fb_branch = 0;
	if (tree->GetBranch("scale_1fb") != 0) {
		scale_1fb_branch = tree->GetBranch("scale_1fb");
		scale_1fb_branch->SetAddress(&scale_1fb_);
	}
	genpsid_branch = 0;
	if (tree->GetBranch("genpsid") != 0) {
		genpsid_branch = tree->GetBranch("genpsid");
		genpsid_branch->SetAddress(&genpsid_);
	}
	btagDisc_branch = 0;
	if (tree->GetBranch("btagDisc") != 0) {
		btagDisc_branch = tree->GetBranch("btagDisc");
		btagDisc_branch->SetAddress(&btagDisc_);
	}
  tree->SetMakeClass(0);
}
void GetEntry(unsigned int idx) 
	// this only marks branches as not loaded, saving a lot of time
	{
		index = idx;
		met_isLoaded = false;
		met_cor_isLoaded = false;
		metphi_isLoaded = false;
		genmetphi_isLoaded = false;
		genmet_isLoaded = false;

		jets_p4_isLoaded = false;
		jets_p4_cut_isLoaded = false;
		gen_ps_p4_isLoaded = false;
		genpsid_isLoaded = false;
		type_isLoaded = false;
		all_p4_isLoaded = false;
		ll_p4_isLoaded = false;
		lt_p4_isLoaded = false;
		
		is_b_isLoaded = false;
		jet_b_isLoaded = false;
		gen_b_isLoaded = false;
		btagDisc_isLoaded = false;

		ll_id_isLoaded = false;
		lt_id_isLoaded = false;
		ll_charge_isLoaded = false;
		lt_charge_isLoaded = false;
		ll_index_isLoaded = false;
		lt_index_isLoaded = false;

		scale_1fb_isLoaded = false;
		gen_mm_p4_isLoaded = false;
		gen_ee_p4_isLoaded = false;
		gen_em_p4_isLoaded = false;
	}

void LoadAllBranches() 
	// load all branches
{
	if (met_branch != 0) met();
	if (met_cor_branch != 0) met_cor();
	if (genmet_branch != 0) genmet();
	if (genmetphi_branch != 0) genmetphi();
	if (metphi_branch != 0) metphi();
	if (jets_p4_branch != 0) jets_p4();
	if (jets_p4_cut_branch != 0) jets_p4_cut();
	if (type_branch != 0) type();
	if (all_p4_branch != 0) all_p4();
	if (ll_p4_branch != 0) ll_p4();
	if (lt_p4_branch != 0) lt_p4();
	if (jet_b_branch != 0) jet_b();
	if (is_b_branch != 0) is_b();
	if (gen_b_branch != 0) gen_b();
	if (btagDisc_branch != 0) btagDisc();
	if (ll_id_branch != 0) ll_id();
	if (lt_id_branch != 0) lt_id();
	if (ll_charge_branch != 0) ll_charge();
	if (lt_charge_branch != 0) lt_charge();
	if (ll_index_branch != 0) ll_index();
	if (lt_index_branch != 0) lt_index();
	if (scale_1fb_branch != 0) scale_1fb();
	if (genpsid_branch != 0) genpsid();
	if (gen_ps_p4_branch != 0) gen_ps_p4();
	if (gen_mm_p4_branch != 0) gen_mm_p4();
	if (gen_ee_p4_branch != 0) gen_ee_p4();
	if (gen_em_p4_branch != 0) gen_em_p4();
}

	float &met()
	{
		if (not met_isLoaded) {
			if (met_branch != 0) {
				met_branch->GetEntry(index);
			} else { 
				printf("branch met_branch does not exist!\n");
				exit(1);
			}
			met_isLoaded = true;
		}
		return met_;
	}
	float &genmet()
	{
		if (not genmet_isLoaded) {
			if (genmet_branch != 0) {
				genmet_branch->GetEntry(index);
			} else { 
				printf("branch genmet_branch does not exist!\n");
				exit(1);
			}
			genmet_isLoaded = true;
		}
		return genmet_;
	}
	float &genmetphi()
	{
		if (not genmetphi_isLoaded) {
			if (genmetphi_branch != 0) {
				genmetphi_branch->GetEntry(index);
			} else { 
				printf("branch genmetphi_branch does not exist!\n");
				exit(1);
			}
			genmetphi_isLoaded = true;
		}
		return genmetphi_;
	}
	float &met_cor()
	{
		if (not met_cor_isLoaded) {
			if (met_cor_branch != 0) {
				met_cor_branch->GetEntry(index);
			} else { 
				printf("branch met_cor_branch does not exist!\n");
				exit(1);
			}
			met_cor_isLoaded = true;
		}
		return met_cor_;
	}
	float &metphi()
	{
		if (not metphi_isLoaded) {
			if (metphi_branch != 0) {
				metphi_branch->GetEntry(index);
			} else { 
				printf("branch metphi_branch does not exist!\n");
				exit(1);
			}
			metphi_isLoaded = true;
		}
		return metphi_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jets_p4()
	{
		if (not jets_p4_isLoaded) {
			if (jets_p4_branch != 0) {
				jets_p4_branch->GetEntry(index);
			} else { 
				printf("branch jets_p4_branch does not exist!\n");
				exit(1);
			}
			jets_p4_isLoaded = true;
		}
		return *jets_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jets_p4_cut()
	{
		if (not jets_p4_cut_isLoaded) {
			if (jets_p4_cut_branch != 0) {
				jets_p4_cut_branch->GetEntry(index);
			} else { 
				printf("branch jets_p4_cut_branch does not exist!\n");
				exit(1);
			}
			jets_p4_cut_isLoaded = true;
		}
		return *jets_p4_cut_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &gen_ps_p4()
	{
		if (not gen_ps_p4_isLoaded) {
			if (gen_ps_p4_branch != 0) {
				gen_ps_p4_branch->GetEntry(index);
			} else { 
				printf("branch gen_ps_p4_branch does not exist!\n");
				exit(1);
			}
			gen_ps_p4_isLoaded = true;
		}
		return *gen_ps_p4_;
	}
	int &type()
	{
		if (not type_isLoaded) {
			if (type_branch != 0) {
				type_branch->GetEntry(index);
			} else { 
				printf("branch type_branch does not exist!\n");
				exit(1);
			}
			type_isLoaded = true;
		}
		return type_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &all_p4()
	{
		if (not all_p4_isLoaded) {
			if (all_p4_branch != 0) {
				all_p4_branch->GetEntry(index);
			} else { 
				printf("branch all_p4_branch does not exist!\n");
				exit(1);
			}
			all_p4_isLoaded = true;
		}
		return *all_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &ll_p4()
	{
		if (not ll_p4_isLoaded) {
			if (ll_p4_branch != 0) {
				ll_p4_branch->GetEntry(index);
			} else { 
				printf("branch ll_p4_branch does not exist!\n");
				exit(1);
			}
			ll_p4_isLoaded = true;
		}
		return *ll_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &lt_p4()
	{
		if (not lt_p4_isLoaded) {
			if (lt_p4_branch != 0) {
				lt_p4_branch->GetEntry(index);
			} else { 
				printf("branch lt_p4_branch does not exist!\n");
				exit(1);
			}
			lt_p4_isLoaded = true;
		}
		return *lt_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jet_b()
	{
		if (not jet_b_isLoaded) {
			if (jet_b_branch != 0) {
				jet_b_branch->GetEntry(index);
			} else { 
				printf("branch jet_b_branch does not exist!\n");
				exit(1);
			}
			jet_b_isLoaded = true;
		}
		return *jet_b_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &gen_b()
	{
		if (not gen_b_isLoaded) {
			if (gen_b_branch != 0) {
				gen_b_branch->GetEntry(index);
			} else { 
				printf("branch gen_b_branch does not exist!\n");
				exit(1);
			}
			gen_b_isLoaded = true;
		}
		return *gen_b_;
	}
	int &ll_id()
	{
		if (not ll_id_isLoaded) {
			if (ll_id_branch != 0) {
				ll_id_branch->GetEntry(index);
			} else { 
				printf("branch ll_id_branch does not exist!\n");
				exit(1);
			}
			ll_id_isLoaded = true;
		}
		return ll_id_;
	}
	int &lt_id()
	{
		if (not lt_id_isLoaded) {
			if (lt_id_branch != 0) {
				lt_id_branch->GetEntry(index);
			} else { 
				printf("branch lt_id_branch does not exist!\n");
				exit(1);
			}
			lt_id_isLoaded = true;
		}
		return lt_id_;
	}
	int &ll_charge()
	{
		if (not ll_charge_isLoaded) {
			if (ll_charge_branch != 0) {
				ll_charge_branch->GetEntry(index);
			} else { 
				printf("branch ll_charge_branch does not exist!\n");
				exit(1);
			}
			ll_charge_isLoaded = true;
		}
		return ll_charge_;
	}
	int &lt_charge()
	{
		if (not lt_charge_isLoaded) {
			if (lt_charge_branch != 0) {
				lt_charge_branch->GetEntry(index);
			} else { 
				printf("branch lt_charge_branch does not exist!\n");
				exit(1);
			}
			lt_charge_isLoaded = true;
		}
		return lt_charge_;
	}
	int &ll_index()
	{
		if (not ll_index_isLoaded) {
			if (ll_index_branch != 0) {
				ll_index_branch->GetEntry(index);
			} else { 
				printf("branch ll_index_branch does not exist!\n");
				exit(1);
			}
			ll_index_isLoaded = true;
		}
		return ll_index_;
	}
	int &lt_index()
	{
		if (not lt_index_isLoaded) {
			if (lt_index_branch != 0) {
				lt_index_branch->GetEntry(index);
			} else { 
				printf("branch lt_index_branch does not exist!\n");
				exit(1);
			}
			lt_index_isLoaded = true;
		}
		return lt_index_;
	}
	float &scale_1fb()
	{
		if (not scale_1fb_isLoaded) {
			if (scale_1fb_branch != 0) {
				scale_1fb_branch->GetEntry(index);
			} else { 
				printf("branch scale_1fb_branch does not exist!\n");
				exit(1);
			}
			scale_1fb_isLoaded = true;
		}
		return scale_1fb_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &gen_mm_p4()
	{
		if (not gen_mm_p4_isLoaded) {
			if (gen_mm_p4_branch != 0) {
				gen_mm_p4_branch->GetEntry(index);
			} else { 
				printf("branch gen_mm_p4_branch does not exist!\n");
				exit(1);
			}
			gen_mm_p4_isLoaded = true;
		}
		return *gen_mm_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &gen_ee_p4()
	{
		if (not gen_ee_p4_isLoaded) {
			if (gen_ee_p4_branch != 0) {
				gen_ee_p4_branch->GetEntry(index);
			} else { 
				printf("branch gen_ee_p4_branch does not exist!\n");
				exit(1);
			}
			gen_ee_p4_isLoaded = true;
		}
		return *gen_ee_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &gen_em_p4()
	{
		if (not gen_em_p4_isLoaded) {
			if (gen_em_p4_branch != 0) {
				gen_em_p4_branch->GetEntry(index);
			} else { 
				printf("branch gen_em_p4_branch does not exist!\n");
				exit(1);
			}
			gen_em_p4_isLoaded = true;
		}
		return *gen_em_p4_;
	}
	vector<float> &btagDisc()
	{
		if (not btagDisc_isLoaded) {
			if (btagDisc_branch != 0) {
				btagDisc_branch->GetEntry(index);
			} else { 
				printf("branch btagDisc_branch does not exist!\n");
				exit(1);
			}
			btagDisc_isLoaded = true;
		}
		return *btagDisc_;
	}
	vector<int> &genpsid()
	{
		if (not genpsid_isLoaded) {
			if (genpsid_branch != 0) {
				genpsid_branch->GetEntry(index);
			} else { 
				printf("branch genpsid_branch does not exist!\n");
				exit(1);
			}
			genpsid_isLoaded = true;
		}
		return *genpsid_;
	}
	vector<bool> &is_b()
	{
		if (not is_b_isLoaded) {
			if (is_b_branch != 0) {
				is_b_branch->GetEntry(index);
			} else { 
				printf("branch is_b_branch does not exist!\n");
				exit(1);
			}
			is_b_isLoaded = true;
		}
		return *is_b_;
	}
  static void progress( int nEventsTotal, int nEventsChain ){
    int period = 1000;
    if(nEventsTotal%1000 == 0) {
      // xterm magic from L. Vacavant and A. Cerri
      if (isatty(1)) {
        if( ( nEventsChain - nEventsTotal ) > period ){
          float frac = (float)nEventsTotal/(nEventsChain*0.01);
          printf("\015\033[32m ---> \033[1m\033[31m%4.1f%%"
               "\033[0m\033[32m <---\033[0m\015", frac);
          fflush(stdout);
        }
        else {
          printf("\015\033[32m ---> \033[1m\033[31m%4.1f%%"
                 "\033[0m\033[32m <---\033[0m\015", 100.);
          cout << endl;
        }
      }
    }
  }
  
};

#ifndef __CINT__
extern ACS acs;
#endif

namespace tas {
	float &met();
	float &met_cor();
	float &genmetphi();
	float &genmet();
	float &metphi();
	float &scale_1fb();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jets_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jets_p4_cut();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &gen_ps_p4();
	std::vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &all_p4();
	std::vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &ll_p4();
	std::vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &lt_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jet_b();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &gen_b();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &gen_mm_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &gen_ee_p4();
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &gen_em_p4();
	int &type();
	int &ll_id();
	int &lt_id();
	int &ll_charge();
	int &lt_charge();
	int &ll_index();
	int &lt_index();
	vector<int>   &genpsid();
	vector<float> &btagDisc();
	vector<bool>  &is_b();
}
#endif
