#include<stdio.h>
#include<stdlib.h>

struct Element{
int i;
int j;
int x;
};
struct Sparse{
int m;
int n;
int num;
struct Element *ele;
};
void sparcity(struct Sparse *s){
float nonzero=s->num;
float total=s->m*s->n;
float sparcity=nonzero/total;
printf("%f",sparcity);

}
void create(struct Sparse *s){

int i;
printf("enter the dimensions");
scanf("%d %d",&s->m,&s->n);
printf("enter number of non 0 elements");
scanf("%d",&s->num);
s->ele=(struct Element*)malloc(s->num*sizeof(struct Element));
printf("enter non 0 elements");
for (i=0;i<s->num;i++){
scanf("%d %d %d",&s->ele[i].i,&s->ele[i].j,&s->ele[i].x);

}


}
void display(struct Sparse s)
{
int i,j,k=0;
for(i=0;i<s.m;i++)
{
for(j=0;j<s.n;j++)
{
{
if(i==s.ele[k].i && j==s.ele[k].j){
printf("%d ",s.ele[k++].x);
}
else{
printf("0 ");
}
}

}
printf("\n");
}
}

int main(){
struct Sparse s1;
create(&s1);
display(s1);
sparcity(&s1);


return 0;

}

