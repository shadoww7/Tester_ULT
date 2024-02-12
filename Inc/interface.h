/*
 * measurements.h
 *
 *  Created on: 27 sie 2023
 *      Author: shadow7
 */
#include "stm32l4xx_hal.h"
#include "main.h"



int chooseFunction(int analog_choice);

void printFunction(int choice);

double scaleNormPressure(int pressure);

char* double2string(double pressure, uint8_t x, uint8_t y);

char* float2string(float value, uint8_t x, uint8_t y);

void turboLeakTest(void);

void cylinderLeakTest(double inputPressure, double targetPressure,double testPressure);

void compressionTest(void);

void trottleFlowTest(void);

