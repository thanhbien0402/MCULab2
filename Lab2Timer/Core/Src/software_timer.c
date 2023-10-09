/*
 * software_timer.c
 *
 *  Created on: Sep 30, 2023
 *      Author: Admin
 */

#include "software_timer.h"

int timer_counter[6] = {0};
int timer_flag[6] = {0};

void setTimer(int duration, int timer){
	timer_counter[timer] = duration;
	timer_flag[timer] = 0;
}
void timerRun(int timer){
	if(timer_counter[timer] > 0){
		timer_counter[timer]--;
		if(timer_counter[timer] <= 0){
			timer_flag[timer] = 1;
		}
	}
}
