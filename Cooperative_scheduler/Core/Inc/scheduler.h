/*
 * scheduler.h
 *
 *  Created on: Nov 5, 2026
 *      Author: ADMIN
 */
#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include "stdint.h"
#include <stddef.h>

#define SCH_MAX_TASKS 	41


typedef struct {
    void (*pTask)(void);
    uint32_t Delay;
    uint32_t Period;
    uint8_t RunMe;
    uint32_t TaskID;
} sTask;

// Khai báo biến toàn cục với volatile để tránh tối ưu hóa sai
extern volatile uint32_t timer_tick;

//void SCH_Init(void);
//void SCH_Update(void);
//void SCH_Dispatch_Tasks(void);
//uint32_t SCH_Add_Task(void (*pFunction)(void), uint32_t DELAY, uint32_t PERIOD);
//uint8_t SCH_Delete_Task(uint32_t taskID);
//uint32_t get_time(void);


void     SCH_Init(void);
void     SCH_Update(void);
void     SCH_Dispatch_Tasks(void);
uint32_t SCH_Add_Task(void (*pFunction)(void), uint32_t DELAY, uint32_t PERIOD);
uint8_t  SCH_Delete_Task(uint32_t taskID);
uint32_t get_time(void);        // ms ke tu luc bat timer
//double linked list lưu trữ các task
//typedef struct TaskNode {
//	sTasks task;
//	struct TaskNode* next;
////	struct TaskNode* prev;
//} TaskNode;

//extern TaskNode* head;
////extern TaskNode* prev;
//extern TaskNode* tail;


//void SCH_Init(void);
//void SCH_Add_Task ( void (*pFunction)() ,
//					uint32_t DELAY,
//					uint32_t PERIOD);  //same setTimer()
//void SCH_Update(void); //Same timer_run->goi trong ngat timer
//void SCH_Dispatch_Tasks(void); //same check timer_flag = 1 -> execute task
//uint8_t  SCH_Delete_Task(uint32_t task_id);
////void SCH_Delete_Task(TaskNode* node);

//void insert_task_sorted(TaskNode* new_node);





#endif /* INC_SCHEDULER_H_ */
