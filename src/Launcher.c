/* ======================================================== */
/*   launcher.c		        								*/
/* ======================================================== */

//---------------------------------------------------------------------------
//----------------------------- Includes ------------------------------------
//---------------------------------------------------------------------------
#include "../include/launcher.h"

//---------------------------------------------------------------------------
//---------------------- Private Methods Prototypes -------------------------
//---------------------------------------------------------------------------
void program_destroy();
void program_init();

//---------------------------------------------------------------------------
//-----------------------Private Methods Implementations---------------------
//---------------------------------------------------------------------------
PRIVATE
void 
program_init()
{
	//main program - Need to initialize here both the server and the miners?
}

PRIVATE
void 
program_destroy()
{
	//main program - Need to destroy here both the server and the miners?
}

//---------------------------------------------------------------------------
//---------------------- Public Methods Implementations----------------------
//---------------------------------------------------------------------------

//here was also func the generaterd miners (4 good + 1 false) as different threads

int 
main()
{
    program_init();
    server();
    program_destroy();
	
	return 0;
}