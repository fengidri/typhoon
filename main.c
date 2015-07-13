/**
 *   author       :   丁雪峰
 *   time         :   2015-07-11 16:11:18
 *   email        :   fengidri@yeah.net
 *   version      :   1.0.1
 *   description  :
 */
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <linux/types.h>
#include <sys/types.h>
#include <stdlib.h>
#include <time.h>

#include <pcap.h>
#include "paser_net.h"
#include "typhoon.h"
#include "net_headers.h"

#define logerror(format, ...) fprintf(stdout, format, ## __VA_ARGS__)
#define logwarn(format, ...) fprintf(stdout, format, ## __VA_ARGS__)

static void handler(u_char *arg, const struct pcap_pkthdr *pkthdr,
        const u_char *packet)
{
#define typh ((typhoon_t *)arg)
    u_short network_type;
    struct header_ip *hdip;
    u_short tcp_len;

    if (pkthdr->caplen != pkthdr->len)
    {
        logwarn("This pkt the date get is short.\n");
        return;
    }

    network_type = *(u_short *)(packet + typh->network_type_offset);
    network_type = ntohs(network_type);

    if (NETWORK_TYPE_IP != network_type)  return;
    // now all IP packet

    hdip = (struct header_ip *)(packet + typh->network_type_offset + 2);
    if (TRANSPORT_TYPE_TCP != hdip->ip_p) return;
    // now all tcp packet
    
    tcp_len = ntohs(hdip->ip_len) - IP_HL(hdip);

    logerror("network type: %d\n", network_type);

#undef typh
}

int main(int argc, char **argv)
{
    const char *device = "lo";
    char errbuf[PCAP_ERRBUF_SIZE];
    pcap_t * pcap;

    typhoon_t * typhoon;

    pcap = pcap_open_live(device, 65535, 0, 0, errbuf);
    if (!pcap)
    {
        logerror("error: pcap_open_live(): %s\n", errbuf);
        exit(-1);
    }

    typhoon = malloc(sizeof(typhoon_t));
    typhoon->linktype = pcap_datalink(pcap);
    typhoon->pcap = pcap;
    typhoon->network_type_offset = network_type_offset(pcap_datalink(pcap));

    logwarn("linktype: %d\n", typhoon->linktype);
    pcap_loop(pcap, -1, handler, (u_char *)typhoon);

    pcap_close(pcap);

    return 0;
}
