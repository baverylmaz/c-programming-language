#include<stdio.h>
#define array_stack 10

int array[array_stack];
int top=-1;

int push(int data){

if(top>=array_stack){
    printf("\nstack overflow...");
    return top;
}

array[top+1]=data;
top++;
return top;
}

int pop(){


if(top==-1){
    printf("stack is empty\n");
    return top;
}

array[top]=-1;
top--;
return top;
}

int peek(){
return top;
}

void printstack(){
for(int i=top; i>=-1; i--){
    if(i==top){
        printf("\n%d ==> top",array[i]);
    }
    else{
        printf("\n%d",array[i]);
    }
}
}

int main(){
push(65);
push(45);
push(47);
push(36);
push(12);
push(11);
push(21);
push(72);
push(99);
printstack();
printf("\n\n\n");
pop();
pop();
pop();
pop();
pop();
printstack();
peek();
return 0;
}
