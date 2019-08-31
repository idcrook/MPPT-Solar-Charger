/*
 * config.h
 *
 *  Global default system configuration parameters
 *
 */

#ifndef INC_CONFIG_H_
#define INC_CONFIG_H_

// Firmware version
//  Each field should be limited to 4-bits
#define FW_ID               1
#define FW_VER_MAJOR        1
#define FW_VER_MINOR        2

// Charge Voltage Thresholds (mV)
#define V_NIGHT_THRESH      3500
#define V_MAX_SOLARV        21000
#define V_MIN_GOOD_SOLAR    18000
#define V_MIN_SOLARV        12000
#define V_MIN_IDLE_2_FLT    12700
#define V_BULK_DEFAULT      14700
#define V_FLOAT_DEFAULT     13650
#define V_DELTA_CHANGE      20

// Load Control Voltage Thresholds (mV)
#define V_LOAD_OFF          11500
#define V_LOAD_ON           12500

// Bad Battery Voltage Threshold (mV)
#define V_BAD_BATTERY       10500

// Adjustable threshold limits
#define V_BULK_MIN          14000
#define V_BULK_MAX          15000
#define V_FLOAT_MIN         13000
#define V_FLOAT_MAX         14000
#define V_LOAD_OFF_MIN      11000
// V_LOAD_OFF_MAX set by current V_LOAD_ON
#define V_LOAD_ON_MIN       12000
#define V_LOAD_ON_MAX       13000

// Hysteresis to prevent night timer operation toggling around a critically low
// battery voltage
#define PWR_LB_HYST_MV      250

// Current Thresholds (mA)
#define I_SOLAR_MIN_THRESH  10
#define I_SOLAR_MAX         2000
#define I_ABS_CUTOFF        300

// Power Thresholds (mW)
#define P_MIN_THRESH        100

// Charging temperature limits (C)
#define TEMP_LIMIT_HIGH     50
#define TEMP_LIMIT_LOW     -20
#define TEMP_LIMIT_HYST     5

// Temperature compensation (mV for 6 cells per degree C)
//  x 10 to enable rounding of an integer calculation
#define V_BULK_COMP_X10    -300
#define V_FLOAT_COMP_X10   -198

// Buck regulator voltage regulation hysteresis (mV)
#define V_BUCK_HYST         15

// Timeouts (seconds) - should fit in an uint16_t
#define WAKE_TIMEOUT          60
#define NIGHT_TIMEOUT         300
#define MPPT_SCAN_TIMEOUT     600
#define HIGH_CHARGE_TIMEOUT   36000
#define CHG_RCVR_PERIOD       3
#define LOWPWR_TIMEOUT        60
#define PWROFF_WARN_TIMEOUT   60
#define PWROFF_DEF_WD_TIMEOUT 10
#define PWROFF_LB_CHG_TIMEOUT 3600
// Timeouts (seconds) - should fit in an uint8_t
#define LOW_PROD_TIMEOUT      15
#define ABS_TERM_TIMEOUT      30

// MPPT Step voltages
#define MPPT_HI_I_STEP_MV   50
#define MPPT_MID_I_STEP_MV  100
#define MPPT_LO_I_STEP_MV   200
#define MPPT_HI_I_STEP_MA   200
#define MPPT_LO_I_STEP_MA   100

// MPPT Scan Step voltage
#define MPPT_SCAN_STEP_MV   200

// Diagnostic output port bits for use by any module
SI_SBIT(DIAG1, SFR_P1, 6);
SI_SBIT(DIAG2, SFR_P1, 7);


#endif /* INC_CONFIG_H_ */
