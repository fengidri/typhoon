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


#endif


