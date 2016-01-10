/*
* global_variables.h
*
* Created: 2015-12-07 00:18:34
*  Author: Stefan
*/


#ifndef GLOBAL_VARIABLES_H_
#define GLOBAL_VARIABLES_H_
// -------------------------------CALIBRATION CONFIG-------------------------------------
// CALIBRATION CONFIG AREA
//Minimum/Maximum PWM output from PID-regulation
#define PID_PWM_MIN 360
#define PID_PWM_MAX 999

// Setpoint ADC to centimeter
#define CENTIMETER_10 3050
#define CENTIMETER_20 1580
#define CENTIMETER_30 1070
#define CENTIMETER_40 820
#define CENTIMETER_50 700
#define CENTIMETER_DEFAULT 820

// ------------------------------CALIBRATION CONFIG--------------------------------------

// -------------------------------DEBUGGING CONFIG-------------------------------------
// DEBUGGING CONFIG AREA

/** 
	P,I and D values
	set value 100 times bigger, for instance if you want 5.0, set P, I or D to 500.
	example for kP=5.0  insert "KP_GAIN_DEBUGGING 500"
	
	WORKING PID VALUES WITH SETPOINT
	#define KP_GAIN_DEBUGGING 600
	#define KI_GAIN_DEBUGGING 99
	#define KD_GAIN_DEBUGGING 300
	#define SETPOINT_DEBUGGING 40
**/
#define KP_GAIN_DEBUGGING 600
#define KI_GAIN_DEBUGGING 99
#define KD_GAIN_DEBUGGING 400
#define SETPOINT_DEBUGGING 20
// ------------------------------DEBUGGING CONFIG--------------------------------------




extern xSemaphoreHandle sem;

/* PID / UART */
// Variables bellow are used for both PID calculation and storing values sent from Matlab
extern double kP_Gain;
extern double kI_Gain;
extern double kD_Gain;
extern int setPoint;

// dt �r 50ms eller 0.5s
#define DTIME_MS 50
#define DT_SECONDS 0.5

// Convert ms to s
//#define DTIME_SECONDS DTIME_MS/1000

extern uint8_t isMatlab;
extern int output_value;
extern int distance;
extern int error;
extern int error_sum;
extern int error_old;

/* PWM */
pwm_channel_t pwm_channel;

#endif /* GLOBAL_VARIABLES_H_ */