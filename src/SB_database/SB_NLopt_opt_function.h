/*@ ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 **
 **   Project      : MAGEMin
 **   License      : GNU GENERAL PUBLIC LICENSE Version 3, 29 June 2007
 **   Developers   : Nicolas Riel, Boris Kaus
 **   Contributors : Dominguez, H., Assunção J., Green E., Berlie N., and Rummel L.
 **   Organization : Institute of Geosciences, Johannes-Gutenberg University, Mainz
 **   Contact      : nriel[at]uni-mainz.de, kaus[at]uni-mainz.de
 **
 ** ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ @*/
#ifndef __SB_NLOPT_OPT_FUNCTION_H_
#define __SB_NLOPT_OPT_FUNCTION_H_

#include "../MAGEMin.h"

typedef SS_ref (*NLopt_type) (		global_variable 	 gv,
									SS_ref 				 SS_ref_db		);

void SB_NLopt_opt_init(	        	NLopt_type 			*NLopt_opt,
									global_variable 	 gv				){


	if (gv.EM_database == 0){				// metapelite database //
		SB_sb11_NLopt_opt_init(	 				NLopt_opt,
												gv							);
	}
	else if (gv.EM_database == 1){				// metapelite database //
		SB_sb21_NLopt_opt_init(	 				NLopt_opt,
												gv							);
	}
	else if (gv.EM_database == 2){				// stixrude 2024 database //
		SB_sb24_NLopt_opt_init(	 				NLopt_opt,
												gv							);
	}
}
#endif

