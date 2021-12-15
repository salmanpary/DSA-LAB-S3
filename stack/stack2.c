#include<stdio.h>
#include<stdlib.h>

struct Stack{
int top;
int size;
int *s;

};
void create(struct Stack *st){
printf("enter the size of the stack");
scanf("%d",&st->size);
int top=-1;
st->s=(int *)malloc(st->size*sizeof(int));
}
void display(struct Stack st){
for(int i=st.top;i>=0;i--){
printf("%d",st.s[i]);
printf("  ");
}

}
void push(struct Stack *st,int x){
if(st->top==st->size){
printf("stack overflow");
}
else{
st->top++;
st->s[st->top]=x;
}

}
int pop(struct Stack *st){
int x=-1;

if(st->top==-1){
printf("stack empty");

}
else{
x=st->s[st->top--];

}
return x;

}
int peek(struct Stack *st,int index){
int x=-1;
if(st->top-index+1<0){
printf("invalid index");



}
else{
x=st->s[st->top--];
}
return x;

}
int isEmpty(struct Stack st)
{
if(st.top==-1){
return 1;}
else{
return 0;}
}
int isFull(struct Stack st)
{
return st.top==st.size-1;
}
int stackTop(struct Stack st)
{
if(!isEmpty(st)){return st.s[st.top];}
else{
return -1;}
}
int main()
{
struct Stack st;
create(&st);
push(&st,10);
push(&st,20);
push(&st,30);
push(&st,40);
printf("%d \n",peek(&st,2));
display(st);
return 0;
}

