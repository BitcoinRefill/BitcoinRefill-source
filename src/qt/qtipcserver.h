#ifndef QTIPCSERVER_H
#define QTIPCSERVER_H

// Define BitcoinRefill-Qt message queue name
#define BITCOINURI_QUEUE_NAME "BitcoinRefillURI"

void ipcScanRelay(int argc, char *argv[]);
void ipcInit(int argc, char *argv[]);

#endif // QTIPCSERVER_H
