#ifndef _CLIENT_CHECKOUT_DEVICE_CFG_H_
#define _CLIENT_CHECKOUT_DEVICE_CFG_H_

/*
** CLIENT Checkout Configuration
*/
#define CLIENT_CFG
/* Note: NOS3 uart requires matching handle and bus number */
#define CLIENT_CFG_STRING           "/dev/usart_27"
#define CLIENT_CFG_HANDLE           27
#define CLIENT_CFG_BAUDRATE_HZ      115200
#define CLIENT_CFG_MS_TIMEOUT       250
#define CLIENT_CFG_DEBUG

#endif /* _CLIENT_CHECKOUT_DEVICE_CFG_H_ */
