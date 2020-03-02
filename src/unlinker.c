#include "../include/bitcoin_ipc_mq.h"

int main(int argc, char* argv[])
{
    int i;
    for (i = 1; i < argc;++i){
        mq_unlink(argv[i]);
    }
}

