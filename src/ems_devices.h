/*
 * General information about known EMS devices
 * 
 * Paul Derbyshire - https://github.com/proddy/EMS-ESP
 *
 * See ChangeLog.md for History
 *
 */

#pragma once

#include "ems.h"

// Fixed EMS Device IDs
#define EMS_ID_BOILER 0x08 // all UBA Boilers have 0x08

/*
 * Common Type
 */
#define EMS_TYPE_Version 0x02
#define EMS_TYPE_UBADevices 0x07 // EMS connected devices

/*
 * Boiler Telegram Types...
 */
#define EMS_TYPE_UBAMonitorFast 0x18              // is an automatic monitor broadcast
#define EMS_TYPE_UBAMonitorSlow 0x19              // is an automatic monitor broadcast
#define EMS_TYPE_UBAMonitorWWMessage 0x34         // is an automatic monitor broadcast
#define EMS_TYPE_UBAMaintenanceStatusMessage 0x1C // is an automatic monitor broadcast
#define EMS_TYPE_MC10Status 0x2A
#define EMS_TYPE_UBAParameterWW 0x33
#define EMS_TYPE_UBATotalUptimeMessage 0x14
#define EMS_TYPE_UBAFlags 0x35
#define EMS_TYPE_UBAMaintenanceSettingsMessage 0x15
#define EMS_TYPE_UBAParametersMessage 0x16
#define EMS_TYPE_UBASetPoints 0x1A
#define EMS_TYPE_UBAFunctionTest 0x1D

// EMS+ specific
#define EMS_TYPE_UBAOutdoorTemp 0xD1  // external temp
#define EMS_TYPE_UBAMonitorFast2 0xE4 // Monitor fast for newer EMS+
#define EMS_TYPE_UBAMonitorSlow2 0xE5 // Monitor slow for newer EMS+

#define EMS_OFFSET_UBAParameterWW_wwtemp 2                  // WW Temperature
#define EMS_OFFSET_UBAParameterWW_wwactivated 1             // WW Activated
#define EMS_OFFSET_UBAParameterWW_wwOneTime 0x00            // WW OneTime loading
#define EMS_OFFSET_UBAParameterWW_wwCirulation 1            // WW circulation
#define EMS_OFFSET_UBAParameterWW_wwComfort 9               // WW is in comfort or eco mode
#define EMS_VALUE_UBAParameterWW_wwComfort_Hot 0x00         // the value for hot
#define EMS_VALUE_UBAParameterWW_wwComfort_Eco 0xD8         // the value for eco
#define EMS_VALUE_UBAParameterWW_wwComfort_Intelligent 0xEC // the value for intelligent

#define EMS_OFFSET_UBASetPoints_flowtemp 0 // flow temp

// Installation settings
#define EMS_TYPE_IBASettingsMessage 0xA5      // installation settings
#define EMS_OFFSET_IBASettings_Display 0      // display
#define EMS_OFFSET_IBASettings_Language 1     // language
#define EMS_OFFSET_IBASettings_MinExtTemp 5   // min. ext. temperature
#define EMS_OFFSET_IBASettings_Building 6     // building
#define EMS_OFFSET_IBASettings_CalIntTemp 2   // cal. int. temperature
#define EMS_OFFSET_IBASettings_ClockOffset 12 // clock offset

#define EMS_VALUE_IBASettings_LANG_GERMAN 0
#define EMS_VALUE_IBASettings_LANG_DUTCH 1
#define EMS_VALUE_IBASettings_LANG_FRENCH 2
#define EMS_VALUE_IBASettings_LANG_ITALIAN 3

#define EMS_VALUE_IBASettings_BUILDING_LIGHT 0
#define EMS_VALUE_IBASettings_BUILDING_MEDIUM 1
#define EMS_VALUE_IBASettings_BUILDING_HEAVY 2

#define EMS_VALUE_IBASettings_DISPLAY_INTTEMP 0
#define EMS_VALUE_IBASettings_DISPLAY_INTSETPOINT 1
#define EMS_VALUE_IBASettings_DISPLAY_EXTTEMP 2
#define EMS_VALUE_IBASettings_DISPLAY_BURNERTEMP 3
#define EMS_VALUE_IBASettings_DISPLAY_WWTEMP 4
#define EMS_VALUE_IBASettings_DISPLAY_FUNCMODE 5
#define EMS_VALUE_IBASettings_DISPLAY_TIME 6
#define EMS_VALUE_IBASettings_DISPLAY_DATE 7
#define EMS_VALUE_IBASettings_DISPLAY_SMOKETEMP 9

// Mixing Modules
// MM100/MM200 (EMS Plus)
#define EMS_TYPE_MMPLUSStatusMessage_HC1 0x01D7          // mixing status HC1
#define EMS_TYPE_MMPLUSStatusMessage_HC2 0x01D8          // mixing status HC2
#define EMS_TYPE_MMPLUSStatusMessage_HC3 0x01D9          // mixing status HC3
#define EMS_TYPE_MMPLUSStatusMessage_HC4 0x01DA          // mixing status HC4
#define EMS_TYPE_MMPLUSStatusMessage_WWC1 0x0231         // mixing status WWC1
#define EMS_TYPE_MMPLUSStatusMessage_WWC2 0x0232         // mixing status WWC2
#define EMS_OFFSET_MMPLUSStatusMessage_flow_temp 3       // flow temperature
#define EMS_OFFSET_MMPLUSStatusMessage_pump_mod 5        // pump modulation
#define EMS_OFFSET_MMPLUSStatusMessage_valve_status 2    // valve in percent
#define EMS_OFFSET_MMPLUSStatusMessage_WW_flow_temp 0    // flow temperature
#define EMS_OFFSET_MMPLUSStatusMessage_WW_pump_mod 2     // pump on 6, off 0
#define EMS_OFFSET_MMPLUSStatusMessage_WW_temp_status 11 // 0,1,2

// MM10
#define EMS_TYPE_MMStatusMessage 0xAB             // mixing status
#define EMS_OFFSET_MMStatusMessage_flow_set 0     // flow setpoint
#define EMS_OFFSET_MMStatusMessage_flow_temp 1    // flow temperature
#define EMS_OFFSET_MMStatusMessage_pump_mod 3     // pump modulation in percent
#define EMS_OFFSET_MMStatusMessage_valve_status 4 // valve 0..255
#define EMS_TYPE_MM10ParameterMessage 0xAC        // mixing parameters

// Solar Module
// Assuming here that the SM200 behaves like SM100
#define EMS_TYPE_SM10Monitor 0x97    // SM10Monitor
#define EMS_TYPE_SM100Monitor 0x0262 // SM100Monitor
#define EMS_TYPE_SM100Status 0x0264  // SM100Status
#define EMS_TYPE_SM100Status2 0x026A // SM100Status2
#define EMS_TYPE_SM100Energy 0x028E  // SM100Energy
// ISPM solar module
#define EMS_TYPE_ISM1StatusMessage 0x0003  // Solar Module Junkers ISM1 Status
#define EMS_TYPE_ISM1Set 0x0001            // for setting values of the solar module like max boiler temp
#define EMS_OFFSET_ISM1Set_MaxBoilerTemp 6 // position of max boiler temp  e.g. 50 in the following example: 90 30 FF 06 00 01 50 (CRC=2C)

// Heat Pump
#define EMS_TYPE_HPMonitor1 0xE3 // HeatPump Monitor 1
#define EMS_TYPE_HPMonitor2 0xE5 // HeatPump Monitor 2

/*
 * Thermostat Types
 */

// Common for all thermostats
#define EMS_TYPE_RCTime 0x06               // is an automatic thermostat broadcast
#define EMS_TYPE_RCOutdoorTempMessage 0xA3 // is an automatic thermostat broadcast, outdoor external temp

// RC10 specific
#define EMS_TYPE_RC10StatusMessage 0xB1         // is an automatic thermostat broadcast giving us temps
#define EMS_OFFSET_RC10StatusMessage_setpoint 1 // setpoint temp
#define EMS_OFFSET_RC10StatusMessage_curr 2     // current temp

#define EMS_TYPE_RC10Set 0xB0     // for setting values like temp and mode
#define EMS_OFFSET_RC10Set_temp 4 // position of thermostat setpoint temperature

// RC20 specific
#define EMS_TYPE_RC20StatusMessage 0x91         // is an automatic thermostat broadcast giving us temps
#define EMS_OFFSET_RC20StatusMessage_setpoint 1 // setpoint temp
#define EMS_OFFSET_RC20StatusMessage_curr 2     // current temp

#define EMS_TYPE_RC20NStatusMessage 0xAE
#define EMS_OFFSET_RC20NStatusMessage_setpoint 2 // setpoint temp in AE
#define EMS_OFFSET_RC20NStatusMessage_curr 3     // current temp in AE

#define EMS_TYPE_RC20NSet 0xAD
#define EMS_OFFSET_RC20NSet_temp_day 2   // position of thermostat setpoint temperature for day time
#define EMS_OFFSET_RC20NSet_temp_night 1 // position of thermostat setpoint temperature for night time
#define EMS_OFFSET_RC20NSet_mode 3       // position mode
#define EMS_OFFSET_RC20NSet_heatingtype 0

#define EMS_TYPE_RC20Set 0xA8      // for setting values like temp and mode
#define EMS_OFFSET_RC20Set_mode 23 // position of thermostat mode
#define EMS_OFFSET_RC20Set_temp 28 // position of thermostat setpoint temperature

// RC30 specific
#define EMS_TYPE_RC30StatusMessage 0x41         // is an automatic thermostat broadcast giving us temps
#define EMS_OFFSET_RC30StatusMessage_setpoint 1 // setpoint temp
#define EMS_OFFSET_RC30StatusMessage_curr 2     // current temp

#define EMS_TYPE_RC30Set 0xA7      // for setting values like temp and mode
#define EMS_OFFSET_RC30Set_mode 23 // position of thermostat mode
#define EMS_OFFSET_RC30Set_temp 28 // position of thermostat setpoint temperature

// RC35 specific
#define EMS_TYPE_RC35StatusMessage_HC1 0x3E // is an automatic thermostat broadcast giving us temps on HC1
#define EMS_TYPE_RC35StatusMessage_HC2 0x48 // is an automatic thermostat broadcast giving us temps on HC2
#define EMS_TYPE_RC35StatusMessage_HC3 0x52 // is an automatic thermostat broadcast giving us temps on HC3
#define EMS_TYPE_RC35StatusMessage_HC4 0x5C // is an automatic thermostat broadcast giving us temps on HC4

#define EMS_OFFSET_RC35StatusMessage_setpoint 2 // desired temp
#define EMS_OFFSET_RC35StatusMessage_curr 3     // current temp
#define EMS_OFFSET_RC35StatusMessage_mode 1     // day mode, also summer on RC3's
#define EMS_OFFSET_RC35StatusMessage_mode1 0    // for holiday mode

#define EMS_TYPE_RC35Set_HC1 0x3D // for setting values like temp and mode (Working mode HC1)
#define EMS_TYPE_RC35Set_HC2 0x47 // for setting values like temp and mode (Working mode HC2)
#define EMS_TYPE_RC35Set_HC3 0x51 // for setting values like temp and mode (Working mode HC3)
#define EMS_TYPE_RC35Set_HC4 0x5B // for setting values like temp and mode (Working mode HC4)

#define EMS_OFFSET_RC35Set_mode 7             // position of thermostat mode
#define EMS_OFFSET_RC35Set_temp_day 2         // position of thermostat setpoint temperature for day time
#define EMS_OFFSET_RC35Set_temp_night 1       // position of thermostat setpoint temperature for night time
#define EMS_OFFSET_RC35Set_temp_holiday 3     // temp during holiday mode
#define EMS_OFFSET_RC35Set_heatingtype 0      // e.g. floor heating = 3
#define EMS_OFFSET_RC35Set_circuitcalctemp 14 // calculated circuit temperature
#define EMS_OFFSET_RC35Set_seltemp 37         // selected temp

// Easy specific
#define EMS_TYPE_EasyStatusMessage 0x0A          // reading values on an Easy Thermostat
#define EMS_OFFSET_EasyStatusMessage_setpoint 10 // setpoint temp
#define EMS_OFFSET_EasyStatusMessage_curr 8      // current temp

// RC1010, RC310 and RC300 specific (EMS Plus)
#define EMS_TYPE_RCPLUSStatusMessage_HC1 0x01A5       // is an automatic thermostat broadcast giving us temps for HC1
#define EMS_TYPE_RCPLUSStatusMessage_HC2 0x01A6       // is an automatic thermostat broadcast giving us temps for HC2
#define EMS_TYPE_RCPLUSStatusMessage_HC3 0x01A7       // is an automatic thermostat broadcast giving us temps for HC3
#define EMS_TYPE_RCPLUSStatusMessage_HC4 0x01A8       // is an automatic thermostat broadcast giving us temps for HC4
#define EMS_TYPE_RCPLUSStatusMode 0x1AF               // summer/winter mode
#define EMS_OFFSET_RCPLUSStatusMessage_mode 10        // thermostat mode (auto, manual)
#define EMS_OFFSET_RCPLUSStatusMessage_setpoint 3     // setpoint temp
#define EMS_OFFSET_RCPLUSStatusMessage_curr 0         // current temp
#define EMS_OFFSET_RCPLUSStatusMessage_currsetpoint 6 // target setpoint temp

#define EMS_TYPE_RCPLUSSet 0x01B9               // setpoint temp message and mode
#define EMS_OFFSET_RCPLUSSet_mode 0             // operation mode(Auto=0xFF, Manual=0x00)
#define EMS_OFFSET_RCPLUSSet_temp_comfort3 1    // comfort3 level
#define EMS_OFFSET_RCPLUSSet_temp_comfort2 2    // comfort2 level
#define EMS_OFFSET_RCPLUSSet_temp_comfort1 3    // comfort1 level
#define EMS_OFFSET_RCPLUSSet_temp_eco 4         // eco level
#define EMS_OFFSET_RCPLUSSet_temp_setpoint 8    // temp setpoint, when changing of templevel (in auto) value is reset and set to FF
#define EMS_OFFSET_RCPLUSSet_manual_setpoint 10 // manual setpoint

// Junkers FR10, FR50, FW100, FW120 (EMS Plus)
// HC1 = 0x6F-0x72
#define EMS_TYPE_JunkersStatusMessage_HC1 0x6F
#define EMS_TYPE_JunkersStatusMessage_HC2 0x70
#define EMS_TYPE_JunkersStatusMessage_HC3 0x71
#define EMS_TYPE_JunkersStatusMessage_HC4 0x72

#define EMS_OFFSET_JunkersStatusMessage_daymode 0  // 3 = day, 2 = night
#define EMS_OFFSET_JunkersStatusMessage_mode 1     // current mode, 1 = manual, 2 = auto
#define EMS_OFFSET_JunkersStatusMessage_setpoint 2 // setpoint temp
#define EMS_OFFSET_JunkersStatusMessage_curr 4     // current temp

// HC1-4 0x65-0x68 - EMS_DEVICE_FLAG_JUNKERS1
// Junkers FR10, FR50, FW100, FW120
#define EMS_TYPE_JunkersSetMessage1_HC1 0x65
#define EMS_TYPE_JunkersSetMessage1_HC2 0x66
#define EMS_TYPE_JunkersSetMessage1_HC3 0x67
#define EMS_TYPE_JunkersSetMessage1_HC4 0x68
#define EMS_OFFSET_JunkersSetMessage_day_temp 0x11      // EMS offset to set temperature on thermostat for day mode
#define EMS_OFFSET_JunkersSetMessage_night_temp 0x10    // EMS offset to set temperature on thermostat for night mode
#define EMS_OFFSET_JunkersSetMessage_no_frost_temp 0x0F // EMS offset to set temperature on thermostat for no frost mode
#define EMS_OFFSET_JunkersSetMessage_set_mode 0x0E      // EMS offset to set mode on thermostat

// HC1-4 0x79-0x7C - EMS_DEVICE_FLAG_JUNKERS2
// Junkers FR100
#define EMS_TYPE_JunkersSetMessage2_HC1 0x79
#define EMS_TYPE_JunkersSetMessage2_HC2 0x7A
#define EMS_TYPE_JunkersSetMessage2_HC3 0x7B
#define EMS_TYPE_JunkersSetMessage2_HC4 0x7C
#define EMS_OFFSET_JunkersSetMessage2_no_frost_temp 0x05
#define EMS_OFFSET_JunkersSetMessage2_eco_temp 0x06
#define EMS_OFFSET_JunkersSetMessage3_heat 0x07

/*
 * Table of all known EMS Devices
 * ProductID, DeviceType, Description, Flags
 */
extern const _EMS_Device EMS_Devices[];
extern uint8_t _EMS_Devices_max;
