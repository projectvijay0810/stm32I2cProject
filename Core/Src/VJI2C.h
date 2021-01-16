/*
 * VJI2C.h
 *
 *  Created on: Jan 16, 2021
 *      Author: hp
 */

#ifndef SRC_VJI2C_H_
#define SRC_VJI2C_H_

class VJ_I2C {
public:
	VJ_I2C();
	virtual ~VJ_I2C();

	void i2cInit();
	void i2cRead();
	void i2cWrite();
};

#endif /* SRC_VJI2C_H_ */
