/* ======================================================== */
/*   bitcoin.h				       						    */
/* ======================================================== */
#ifndef BITCOIN_H
#define BITCOIN_H

//---------------------------------------------------------------------------
//----------------------------- Includes ------------------------------------
//---------------------------------------------------------------------------
#include "definitions.h"
#include "linked_list.h"

//---------------------------------------------------------------------------
//--------------------------- Bitcoin Defines -------------------------------
//---------------------------------------------------------------------------
#define DIFFICULTY 16
#define PLACE_HOLDER_TILL_MINER_WILL_MINE   0

//---------------------------------------------------------------------------
//---------------------- Bitcoin Block Data Structure -----------------------
//---------------------------------------------------------------------------
typedef struct _bitcoin_block_data
{
	Uint height;
	Uint time_stamp;
	Uint hash;
	Uint prev_hash;
	Uint difficulty;
	Uint nonce;
	Uint relayed_by;
	
} bitcoin_block_data;

//---------------------------------------------------------------------------
//---------------------- Public Method Prototypes ---------------------------
//---------------------------------------------------------------------------
bitcoin_block_data* initialize_new_block(bitcoin_block_data* i_head_block);
void print_bitcoin_block_data(bitcoin_block_data* block_to_print);
void release_bitcoin_block_data(pVoid block_to_release);

#endif // !BITCOIN_H