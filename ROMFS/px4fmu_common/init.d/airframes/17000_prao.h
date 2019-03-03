#!/bin/sh
#
#@name prao
#
#@type boat
#
#@maintainer Johan Poccard <johan.poccard-saudart@epfl.ch>
#
#@output MAIN1 steering
#@output MAIN2 main foil
#@output MAIN3 small foil
#@output MAIN4 throttle
#
#@output AUX A DEFINIR
#

sh /etc/init.d/rc.fw_defaults // peut-être besoin de créer un nouveau fichier defaults

if [$AUTOCNF = yes]
then
        param set FW_AIRSPD_MAX 10  //recopié du bifoiler
        param set FW_AIRSPD_MIN 3
        param set FW_AIRSPD_TRIM 5
        param set FW_ATT_TC 0.3
        param set FW_L1_DAMPING 0.74
        param set FW_L1_PERIOD 16
        param set FW_LND_ANG 15
        param set FW_LND_FLALT 5
        param set FW_LND_HHDIST 15
        param set FW_LND_HVIRT 13
        param set FW_LND_TLALT 5
        param set FW_THR_LND_MAX 0
        param set FW_PR_FF 0.35
        param set FW_PR_IMAX 0.4
        param set FW_PR_P 0.08
        param set FW_RR_FF 0.6
        param set FW_RR_IMAX 0.2
        param set FW_RR_P 0.04
        param set SYS_COMPANION 157600
        param set PWM_MAIN_REV0 1
        param set PWM_MAIN_REV1 1
        param set PWM_DISARMED 0
        param set PWM_MIN 1000
        param set PWM_MAX 2000
fi

//Configure this as plane
set MAV_TYPE 11

//Set mixer
set MIXER prao

//PWM
set PWM_DISARMED p:PWM_DISARMED
set PWM_MIN p:PWM_MIN
set PWM_MAX p:PWM_MAX





