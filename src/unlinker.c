#include "../include/bitcoin_ipc_mq.h"

int main(int argc, char* argv[])
{
    int i;
    mq_unlink("/server_mq");
    char miner_q[] = "/miner_0_q"
    for (i = 0; i < 100;++i){
        miner_q[7] = (char)(itoa(i));
        mq_unlink(argv[i]);
    }
}

