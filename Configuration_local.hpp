/////////////////////////////////////////////////////////////////////////////////////////////////////////
// This configuration file was generated by the OAT Configurator at https://config.openastrotech.com for
// firmware Official Versions (V1.11.5 and later).
// Save this as Configuration_local.hpp in the folder where you placed the firmware code.
// Unique ConfigKey: FW:O,HS:N,BD:M,RS:N8,RD:A,RMSA3000:V1200:,RTR:N,RT:1,DS:N8,DD:A,DMSA3000:V1200:,DT:1,DY:NO,GP:N,DL:N,FC:N,AP:N,AH:N

// We live in the Northern Hemisphere
#define NORTHERN_HEMISPHERE 1

// We are using the RAMPS c/w ATMega 2560 (or clone) board
#if defined(BOARD) && BOARD != BOARD_AVR_RAMPS
    #error Selected PIO environment does not match this configuration
#else
    #define BOARD BOARD_AVR_RAMPS
#endif


////////////////////////////////
//OAM Configuration
//
//
#define OAM
#define DEC_WHEEL_CIRCUMFERENCE 816.814f
#define RA_STEPPER_SPR (200 * 9)   // change to (200 * 9) for 1.8° stepper
#define DEC_STEPPER_SPR (200 * 9)  // change to (200 * 9) for 1.8° stepper

#define ALTITUDE_STEPS_PER_ARC_MINUTE ((1640 / 60) * ALT_MICROSTEPPING)
#define AZIMUTH_STEPS_PER_REV (724.0f / (AZ_PULLEY_TEETH * GT2_BELT_PITCH) * AZ_STEPPER_SPR)

#define ALT_MICROSTEPPING 8
#define AZ_MICROSTEPPING 8

#define RA_SLEW_MICROSTEPPING 2
#define DEC_SLEW_MICROSTEPPING 2

////////////////////////////////
// RA Stepper configuration 
// See supported stepper values. Change according to the steppers you are using
// Using the NEMA 17, 1.8°/step stepper for RA
#define RA_STEPPER_TYPE STEPPER_TYPE_ENABLE
#define RA_STEPPER_SPR 200.0f

// Using the Generic A4988 driver for RA stepper motor
#define RA_DRIVER_TYPE DRIVER_TYPE_A4988_GENERIC

// Define some RA stepper motor settings
#define RA_STEPPER_ACCELERATION 3000
#define RA_STEPPER_SPEED 1200

// Track immediately after boot
#define TRACK_ON_BOOT 0

// Define limits for RA... 
#define RA_LIMIT_LEFT     5.5f
#define RA_LIMIT_RIGHT    6.5f
#define RA_TRACKING_LIMIT 6.75f // can't quite get to 7h...

// Using the 16 tooth gear (recommended) for RA belt
#define RA_PULLEY_TEETH 16

////////////////////////////////
// DEC Stepper configuration 
// See supported stepper values. Change according to the steppers you are using
// Using the NEMA 17, 1.8°/step stepper for DEC
#define DEC_STEPPER_TYPE STEPPER_TYPE_ENABLE
#define DEC_STEPPER_SPR 200.0f

// Using the Generic A4988 driver for DEC stepper
#define DEC_DRIVER_TYPE DRIVER_TYPE_A4988_GENERIC

// Define some DEC stepper motor settings
#define DEC_STEPPER_ACCELERATION 3000
#define DEC_STEPPER_SPEED 1200

// Using the 16 tooth gear (recommended) for DEC belt
#define DEC_PULLEY_TEETH 16

////////////////////////////////
// Display configuration 
// Define the type of display we are using. Currently: No display
#define DISPLAY_TYPE DISPLAY_TYPE_NONE

////////////////////////////////
// GPS Addon configuration 
// Define whether we have the GPS addon or not. Currently: No GPS
#define USE_GPS 0

////////////////////////////////
// Digital Level Addon configuration 
// Define whether we have the Digital Level or not. Currently: No Digital Level
#define USE_GYRO_LEVEL 0

////////////////////////////////
// Focuser configuration 
// Define whether to support a focusing stepper motor on E1 or not. Currently: No Focuser
// No Focuser settings

////////////////////////////////
// AutoPA Addon configuration 
// Define whether we have the AutoPA add on or not. Currently: No AutoPA
// No AutoPA settings

////////////////////////////////
// Is the RA Auto Home addon installed
#define USE_HALL_SENSOR_RA_AUTOHOME 0

///////////////////////
// Debug settings
#define DEBUG_LEVEL (DEBUG_NONE)

