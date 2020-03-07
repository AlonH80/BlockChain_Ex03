/* ======================================================== */
/*   bitcoin.c		        								*/
/* ======================================================== */

//---------------------------------------------------------------------------
//----------------------------- Includes ------------------------------------
//---------------------------------------------------------------------------
#include "../include/bitcoin.h"

//---------------------------------------------------------------------------
//---------------------- Public Methods Implementations----------------------
//---------------------------------------------------------------------------
PUBLIC
bitcoin_block_data*
initialize_new_block(bitcoin_block_data* i_head_block)
{
    bitcoin_block_data* new_block = malloc(sizeof(bitcoin_block_data));
    new_block->height = i_head_block->height + 1;
    new_block->time_stamp = get_current_time_stamp();
    new_block->prev_hash = i_head_block->hash;
    new_block->difficulty = DIFFICULTY;
    new_block->nonce = PLACE_HOLDER_TILL_MINER_WILL_MINE;		// MINER responsibility
    new_block->relayed_by = PLACE_HOLDER_TILL_MINER_WILL_MINE;  // MINER responsibility
    new_block->hash = PLACE_HOLDER_TILL_MINER_WILL_MINE;		// MINER responsibility
    return new_block;
}

PUBLIC
void
print_bitcoin_block_data(bitcoin_block_data* block_to_print)
{
	printf("height(%u), ", block_to_print->height);
	printf("timestamp(%u), ", block_to_print->time_stamp);
	printf("hash(0x%x), ", block_to_print->hash);
	printf("prev_hash(0x%x), ", block_to_print->prev_hash);
	printf("difficulty(%u), ", block_to_print->difficulty);
	printf("nonce(%u)", block_to_print->nonce);
}

PUBLIC
void 
release_bitcoin_block_data(pVoid block_to_release)
{
    free(block_to_release);
}