/**
 *   author       :   丁雪峰
 *   time         :   2015-07-12 10:17:41
 *   email        :   fengidri@yeah.net
 *   version      :   1.0.1
 *   description  :
 */
#ifndef  __PASER_NET_H__
#define __PASER_NET_H__

u_short net_network_type(const u_char *pk);

/**
 * network_type_offset --
 * @type: the link type
 * return the offset of network prot type in the link data
 */
u_short network_type_offset(int type);
#endif


