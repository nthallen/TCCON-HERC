/*
 * This file is based on code originally generated from Atmel START as usb_start.h
 * Whenever the Atmel START project is updated, changes to usb_start.h must be
 * reviewed and copied here as appropriate.
 */
#ifndef HERC_USB_H
#define HERC_USB_H
#include "subbus.h"

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#include "cdcdf_acm.h"
#include "cdcdf_acm_desc.h"

void cdc_device_acm_init(void);

subbus_driver_t sb_usb;
#define SUBBUS_USB_BASE_ADDR 0xC
#define SUBBUS_USB_HIGH_ADDR (SUBBUS_USB_BASE_ADDR-1)
#define CDC_INPUT_BUFFER_SIZE 256
#define CDC_OUTPUT_BUFFER_SIZE 256

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // HERC_USB_H
