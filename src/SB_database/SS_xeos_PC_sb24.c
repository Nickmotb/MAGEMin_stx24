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
#include "../MAGEMin.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// ... PC_xeos functions*/

void SB_sb24_pc_init_function(      PC_ref      *SS_pc_xeos,
                                    int          iss,
                                    char        *name                           ){
        if      (strcmp( name, "plg")  == 0 ){
            SS_pc_xeos[iss].ss_pc_xeos   = sb24_plg_pc_xeos;            }
        else if (strcmp( name, "sp")  == 0 ){
            SS_pc_xeos[iss].ss_pc_xeos   = sb24_sp_pc_xeos;             }
        else if (strcmp( name, "ol")  == 0 ){
            SS_pc_xeos[iss].ss_pc_xeos   = sb24_ol_pc_xeos;             }
        else if (strcmp( name, "wa")  == 0 ){
            SS_pc_xeos[iss].ss_pc_xeos   = sb24_wa_pc_xeos;             }
        else if (strcmp( name, "ri")  == 0 ){
            SS_pc_xeos[iss].ss_pc_xeos   = sb24_ri_pc_xeos;             }
        else if (strcmp( name, "opx")  == 0 ){
            SS_pc_xeos[iss].ss_pc_xeos   = sb24_opx_pc_xeos;            }
        else if (strcmp( name, "cpx")  == 0 ){
            SS_pc_xeos[iss].ss_pc_xeos   = sb24_cpx_pc_xeos;            }
        else if (strcmp( name, "hpcpx")  == 0 ){
            SS_pc_xeos[iss].ss_pc_xeos   = sb24_hpcpx_pc_xeos;          }
        else if (strcmp( name, "ak")  == 0 ){
            SS_pc_xeos[iss].ss_pc_xeos   = sb24_ak_pc_xeos;             }
        else if (strcmp( name, "gtmj")  == 0 ){
            SS_pc_xeos[iss].ss_pc_xeos   = sb24_gtmj_pc_xeos;           }
        else if (strcmp( name, "pv")  == 0 ){
            SS_pc_xeos[iss].ss_pc_xeos   = sb24_pv_pc_xeos;             }
        else if (strcmp( name, "ppv")  == 0 ){
            SS_pc_xeos[iss].ss_pc_xeos   = sb24_ppv_pc_xeos;            }
        else if (strcmp( name, "cf")  == 0 ){
            SS_pc_xeos[iss].ss_pc_xeos   = sb24_cf_pc_xeos;             }
        else if (strcmp( name, "mw")  == 0 ){
            SS_pc_xeos[iss].ss_pc_xeos   = sb24_mw_pc_xeos;             }
        else if (strcmp( name, "nal")  == 0 ){
            SS_pc_xeos[iss].ss_pc_xeos   = sb24_nal_pc_xeos;            }
        else{
            printf("\nsolid solution '%s' is not in the database, cannot be initiated\n", name);
        }
};