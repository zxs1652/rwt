/*
File Name: mirdwt.c
Last Modification Date:	%G%	%U%
Current Version: %M%	%I%
File Creation Date: Wed Oct 12 08:44:43 1994
Author: Markus Lang  <lang@jazz.rice.edu>

Copyright: All software, documentation, and related files in this distribution
           are Copyright (c) 1994  Rice University

Permission is granted for use and non-profit distribution providing that this
notice be clearly maintained. The right to distribute any portion for profit
or as part of any commercial product is specifically reserved for the author.

Change History: Fixed code such that the result has the same dimension as the 
                input for 1D problems. Also, added some standard error checking.
		Jan Erik Odegard <odegard@ece.rice.edu> Wed Jun 14 1995

*/

#include "mex.h"
#include "dwt.h"


void mexFunction(int nlhs,mxArray *plhs[],int nrhs,const mxArray *prhs[])
{
  dwtInit(nlhs,plhs,nrhs,prhs,INVERSE_REDUNDANT_DWT);
}


