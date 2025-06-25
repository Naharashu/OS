#include "../drivers/screen.h"
#include "../drivers/time.h"
#include "../drivers/scheduler.h"


void processA();
void processB();

void main()
{
	//video_memory[0] = 'A';
	screen_init();
	timer_init();
	kprint("Welcome to the bare bones kernel -- in protectected mode.");
	println();
	processes_init();
	scheduler_init();
	process_t p1, p2;
	process_create(&processA, &p1);
	process_create(&processB, &p2);
	
	/*
	int i = timer_count(), j = i;

	while (i != j + 10) {
		kprint("Hello ");
		printi(i);
		println();
		i = timer_count();
	}
	kprint("END"); */
	
	/*for (int i = 0; i < 10000;i++) {
		kprinti(i);println();
	}*/
	/*for (int i = 0; i < 1000; i++)
		asm volatile ("int $0x03");*/
	while(1);
}

void processA() {
	
	while(1)
		//print ("process A ");
		asm("mov $123, %eax");
}

void processB() {
	
		while(1)
		//print ("process B ");
			asm("mov $200, %eax");
}
