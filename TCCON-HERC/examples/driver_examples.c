/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include "driver_examples.h"
#include "driver_init.h"
#include "utils.h"

static uint8_t I2C_example_str[12] = "Hello World!";

void I2C_tx_complete(struct i2c_m_async_desc *const i2c)
{
}

void I2C_example(void)
{
	struct io_descriptor *I2C_io;

	i2c_m_async_get_io_descriptor(&I2C, &I2C_io);
	i2c_m_async_enable(&I2C);
	i2c_m_async_register_callback(&I2C, I2C_M_ASYNC_TX_COMPLETE, (FUNC_PTR)I2C_tx_complete);
	i2c_m_async_set_slaveaddr(&I2C, 0x12, I2C_M_SEVEN);

	io_write(I2C_io, I2C_example_str, 12);
}
