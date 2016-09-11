/*
 * led_sysdefs_dummy.h
 *
 *  Created on: 11 Sep 2016
 *      Author: leo@leodearden.org
 *
 *  This is a partial stubbing out of the system specific aspects of FastLED
 *  It WON'T give a functional FastLED build, but will allow a subset of
 *  FastLED to build without errors (eg: hsv2rgb.cpp).
 *
 *  This allows, for example, unit testing or other previewing of portable
 *  pattern generation code that depends on FastLED pixel types, on an
 *  unsupported platform such as a Linux workstation.
 *
 */

#ifndef PLATFORMS_DUMMY_LED_SYSDEFS_DUMMY_H_
#define PLATFORMS_DUMMY_LED_SYSDEFS_DUMMY_H_

// No platform headers
typedef bool boolean;
typedef unsigned char byte;
typedef unsigned long long RwReg;
typedef unsigned long long RoReg;
#define INPUT 0
#define OUTPUT 1
#define LOW 0
#define HIGH 1
extern int micros();
extern int millis();
extern int digitalPinToBitMask(int);
extern int digitalPinToPort(int);
extern RwReg* portOutputRegister(int);
extern RoReg* portInputRegister(int);
extern void pinMode(int, int);
extern int pow(int, int);
extern void digitalWrite(int, int);
#define F_CPU 16000000

#endif /* PLATFORMS_DUMMY_LED_SYSDEFS_DUMMY_H_ */
