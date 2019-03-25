//
// Created by Johan on 09.03.2019.
//

/****************************************************************************
 *
 *   Copyright (c) 2015 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/**
 * @file PRAOAttitudeControl_params.c
 * Parameters for the PRAO Attitude Controller
 *
 * @author Johan Poccard <johan.poccard-saudart@epfl.ch>
 */

/**
 * Proportionnal gain of pitch controller
 *
 * @min 0.0
 * @max 100.0
 * @group PRAO Attitude Control
 */
 PARAM_DEFINE_FLOAT(PRAO_P_P,0.5f);

/**
* Integral gain of pitch controller
*
* @min 0.0
* @max 100.0
* @group PRAO Attitude Control
*/
PARAM_DEFINE_FLOAT(PRAO_P_I,0.5f);

/**
 * Proportionnal gain of roll controller
 *
 * @min 0.0
 * @max 100.0
 * @group PRAO Attitude Control
 */
PARAM_DEFINE_FLOAT(PRAO_R_P,0.5f);

/**
 * Integral gain of roll controller
 *
 * @min 0.0
 * @max 100.0
 * @group PRAO Attitude Control
 */
PARAM_DEFINE_FLOAT(PRAO_R_I,0.5f);

/**
 * Proportionnal gain of yaw controller
 *
 * @min 0.0
 * @max 100.0
 * @group PRAO Attitude Control
 */
PARAM_DEFINE_FLOAT(PRAO_Y_P,0.5f);

/**
 * Integral gain of yaw controller
 *
 * @min 0.0
 * @max 100.0
 * @group PRAO Attitude Control
 */
PARAM_DEFINE_FLOAT(PRAO_Y_I,0.5f);

/**
 * Limit of integrator on pitch
 *
 * @min 0.0
 * @max 100.0
 * @group PRAO Attitude Control
 */
PARAM_DEFINE_FLOAT(PRAO_INT_MAX_PITCH,0.5f);

/**
 * Limit of integrator on roll
 *
 * @min 0.0
 * @max 100.0
 * @group PRAO Attitude Control
 */
PARAM_DEFINE_FLOAT(PRAO_INT_MAX_ROLL,0.5f);

/**
 * Pitch scaler
 *
 * @min 0.0
 * @max 100.0
 * @group PRAO Attitude Control
 */
PARAM_DEFINE_FLOAT(PRAO_P_SCALER,0.5f);

/**
 * Roll scaler
 *
 * @min 0.0
 * @max 100.0
 * @group PRAO Attitude Control
 */
PARAM_DEFINE_FLOAT(PRAO_R_SCALER,0.5f);

/**
 * Mode
 *
 * @min 0.0
 * @max 100.0
 * @group PRAO Attitude Control
 */
PARAM_DEFINE_FLOAT(PRAO_MODE,0.0f);
