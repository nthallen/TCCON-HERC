/*
 * This file is based on code originally generated from Atmel START as driver_init.h
 * Whenever the Atmel START project is updated, changes to driver_init.h must be
 * reviewed and copied here as appropriate.
 */
#ifndef HERC_DRIVER_INIT_INCLUDED
#define HERC_DRIVER_INIT_INCLUDED

#include "herc_pins.h"

#ifdef __cplusplus
extern "C" {
#endif

#include <hal_atomic.h>
#include <hal_delay.h>
#include <hal_gpio.h>
#include <hal_init.h>
#include <hal_io.h>
#include <hal_sleep.h>

#include <hal_i2c_m_async.h>

#include "hal_usb_device.h"

extern struct i2c_m_async_desc I2C;

void I2C_PORT_init(void);
void I2C_CLOCK_init(void);
void I2C_init(void);

void USB_DEVICE_INSTANCE_CLOCK_init(void);
void USB_DEVICE_INSTANCE_init(void);

/**
 * \brief Perform system initialization, initialize pins and clocks for
 * peripherals
 */
void system_init(void);

#ifdef __cplusplus
}
#endif
#endif // HERC_DRIVER_INIT_INCLUDED
