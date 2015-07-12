/**
 *   author       :   丁雪峰
 *   time         :   2015-07-11 21:31:19
 *   email        :   fengidri@yeah.net
 *   version      :   1.0.1
 *   description  :
 */
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <netinet/in.h>

#include "net_headers.h"
#include "typhoon.h"

u_short net_network_type(const u_char *pk)
{
    return ntohs(((struct header_ethernet *)pk)->ether_type);
}


u_short network_type_offset(int type)
{
    int offset = 12;
    switch(type)
    {
        case 113://LINKTYPE_LINUX_SLL:
            offset = 14;
            break;
    }
    return offset;
}


//u_short net_transport_type(void *pk)
//{
//((struct header_ethernet *)pk)->network
//    return ntohs(((struct header_ethernet *)pk)->ether_type);
//}
