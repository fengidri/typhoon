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

#define logerror(format, ...) fprintf(stdout, format, ## __VA_ARGS__)
#define logwarn(format, ...) fprintf(stdout, format, ## __VA_ARGS__)

static void handler(u_char *arg, const struct pcap_pkthdr *pkthdr, const u_char *packet)
{
    if (pkthdr->caplen != pkthdr->len)
    {
        logwarn("This pkt the date get is short.\n");
        return;
    }
    logerror("network type: %d\n", net_network_type(packet));

}

int main(int argc, char **argv)
{
    const char *device = "any";
    char errbuf[PCAP_ERRBUF_SIZE];
    pcap_t * pcap;

    pcap = pcap_open_live(device, 65535, 0, 0, errbuf);
    if (!pcap)
    {
        logerror("error: pcap_open_live(): %s\n", errbuf);
        exit(-1);
    }
    pcap_loop(pcap, -1, handler, NULL);

    pcap_close(pcap);

    return 0;
}
