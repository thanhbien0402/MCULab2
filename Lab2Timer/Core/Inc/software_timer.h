/*
 * software_timer.h
 *
 *  Created on: Sep 30, 2023
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer_flag[5];

void setTimer(int duration, int timer);
void timerRun(int timer);

#endif /* INC_SOFTWARE_TIMER_H_ */
