#ifndef _TSH_H
#define _TSH_H

#define CONNECT_BACK_HOST  "127.0.0.1"
#define CONNECT_BACK_DELAY 10


char *secret = "abcabc";
char *cb_host = CONNECT_BACK_HOST;

#define SERVER_PORT 9001
short int server_port = SERVER_PORT;

#define FAKE_PROC_NAME "tsh"

#define GET_FILE 1
#define PUT_FILE 2
#define RUNSHELL 3

#endif /* tsh.h */
