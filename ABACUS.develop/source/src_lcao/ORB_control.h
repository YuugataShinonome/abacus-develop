#ifndef ORB_CONTROL_H 
#define ORB_CONTROL_H 

#include "ORB_gen_tables.h"
#include "ORB_read.h"

class ORB_control 
{

	public:

    ORB_control();
    ~ORB_control();

    // Generate the S(overlap),T,NL matrix.
    void set_orb_tables(
		ORB_gen_tables &OGT, 
		LCAO_Orbitals &orb,
		const double &lcao_ecut_in, // mohan add 2021-04-16
		const double &lcao_dk_in, // mohan add 2021-04-16
		const double &lcao_dr_in, // mohan add 2021-04-16
		const double &lcao_rmax_in, // mohan add 2021-04-16
		const double &lat0,
		const int &Lmax_exx);

    void clear_after_ions(
		ORB_gen_tables &OGT, 
		LCAO_Orbitals &orb);

};
#endif
