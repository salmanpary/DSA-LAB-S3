#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct Term{
int coeff;
int exp;
};
struct Poly{
int n;
struct Term *terms;
};
void create(struct Poly *p){
int i;
printf("enter the number of terms");
scanf("%d",&p->n);
p->terms=(struct Term*)malloc(p->n*sizeof(struct Term));
printf("enter the term\n");
for(i=0;i<p->n;i++){
scanf("%d%d",&p->terms[i].coeff,&p->terms[i].exp);
}
}
void display(struct Poly p,int *exp){
int i;
int sum=0;
for(i=0;i<p.n;i++){
sum=sum+p.terms[i].coeff*pow(*exp,p.terms[i].exp);
}
printf("the sum is %d",sum);
}
void main(){
int exp;
printf("enter the exponent");
scanf("%d",&exp);
struct Poly p1;
create(&p1);

display(p1,&exp);

}
