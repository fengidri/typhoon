/**
 *   author       :   丁雪峰
 *   time         :   2015-07-12 22:53:37
 *   email        :   fengidri@yeah.net
 *   version      :   1.0.1
 *   description  :
 */
#ifndef  __TYPHOON_H__
#define __TYPHOON_H__
#include <pcap.h>

#include <netinet/in.h>
#include "sys/socket.h"

typedef struct {
    pcap_t *pcap;
    int linktype;
    u_short network_type_offset;
} typhoon_t;

typedef struct{
    u_short len;

    u_short th_sport; /* source port */
    u_short th_dport; /* destination port */
    tcp_seq th_seq; /* sequence number */
    tcp_seq th_ack; /* acknowledgement number */
    char fin;
    char syn;
    char rst;
    char push;
    char ack;

    const char *data;
}packet_t;

#endif


