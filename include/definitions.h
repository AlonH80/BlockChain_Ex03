/* ======================================================== */
/*   definitions.h		        						    */
/* ======================================================== */
#ifndef DEFENITIONS_H
#define DEFENITIONS_H

//---------------------------------------------------------------------------
//----------------------------- Includes ------------------------------------
//---------------------------------------------------------------------------
#include <sys/resource.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <pthread.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <mqueue.h>
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <zlib.h>
#include <time.h>

//---------------------------------------------------------------------------
//----------------------------- General Defines -----------------------------
//---------------------------------------------------------------------------
#define PRIVATE
#define PUBLIC

//---------------------------------------------------------------------------
//----------------------------- General Typedefs ----------------------------
//---------------------------------------------------------------------------
typedef enum boolType { FALSE=0, TRUE=1 } EBoolType;
typedef enum executionStatus { SUCCESS = 0, FAILURE = 1, PARSED = 2 } EExecutionStatus;
typedef void* pVoid;
typedef unsigned int Uint;

//---------------------------------------------------------------------------
//----------------------------- Debugging -----------------------------------
//---------------------------------------------------------------------------
#define DEBUG 1
#define DEB if (DEBUG) {printf("func %s, line %d\n", __func__, __LINE__);}

#endif // !DEFENITIONS_H
