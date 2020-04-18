#ifndef ETH_H__
#define ETH_H__

#include <stdint.h>
#include "netif/etharp.h"

void usb_ecm_recv_callback(const uint8_t *data, int size);
uint32_t sys_now();
err_t output_fn(struct netif *netif, struct pbuf *p, ip_addr_t *ipaddr);
err_t netif_init_cb(struct netif *netif);
void start_server(void);

#endif /* ETH_H__ */
