#include<stdio.h>

// we define the structure for hours, minutes and seconds.
typedef struct{
	int hour;
	int min;
	int sec;
}time;

/* we printed a function whose name is a set.
This function ensures that hours,minutes and seconds are not irrational numbers. */
time set(int hour, int min, int sec){
	time t;

	if(hour>0 && hour<24){
		t.hour=hour;
	}
	else{
		t.hour=-1;
	}

	if(min>0 && min<60){
		t.min=min;
	}
	else{
		t.min=-1;
	}

	if(sec>0 && sec<60){
		t.sec=sec;
	}
	else{
		sec=-1;
	}
	return t;
}

/* this function, named addtime is used to advance and print the clock in the specified second. */
time addtime(time t, int sec){
	t.sec+=sec;
	t.min+=t.sec/60;
	t.sec%=60;
	t.hour%=24;

	return t;
}

/* this function called compare, compares the two specified times and returns
   the function'1' and '-1' according the situation. */
int compare(time t1, time t2){
	if(t1.hour!=t2.hour && t1.hour>t2.hour){
		return 1;
	}
	else if(t1.hour<=t2.hour){
		return -1;
	}

	else if(t1.min!=t2.min && t1.min>t2.min){
		return 1;
	}
	else if(t1.min<=t2.min){
		return -1;
	}

	else if(t1.sec!=t2.sec && t1.sec>t2.sec){
		return 1;
	}
	else if(t1.sec<=t2.sec){
		return -1;
	}
	return 0;
}

/* finally, this function called print is used to print a specific time. */
void print(time t){
	printf("%02d:%02d:%02d¨\n",t.hour,t.min,t.sec);
}



int main(){

	// we call the set functions.
	time t1=set(17, 23, 59);
	time t2=set(23, 45, 39);

	// we print time1 and time2
	printf("initial time 1: ");
	print(t1);
	printf("initial time 2: ");
	print(t2);

	// we call the addtime functions.
	t1=addtime(t1, 5000);
	printf("Time 1 after advancing by 5000 seconds: ");
    print(t1);

    /* we call the compare functions and use the if-else structure
    to interpret them according to the situation*/
     int comparison = compare(t1, t2);
    if (comparison > 0) {
        printf("Time 1 is later than Time 2.\n");
    } else if (comparison < 0) {
        printf("Time 1 is earlier than Time 2.\n");
    } else {
        printf("Time 1 is the same as Time 2.\n");
    }

    return 0;
}
