#include<stdio.h>
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
void main(){
struct Element el[100];
int m,n,i,j,ar[100][100];
float sparcity,count=0,total;
printf("enter the dimensions");
scanf("%d %d",&m,&n);
total=m*n;
for(i=0;i<m;i++){
for(j=0;j<n;j++){
scanf("%d",&ar[i][j]);
}
}
for(i=0;i<m;i++){
for(j=0;j<n;j++){
printf("%d",ar[i][j]);
printf("    ");
}
printf("\n");
}
for(i=0;i<m;i++){
for(j=0;j<n;j++){
if(ar[i][j]!=0){




count++;
}
}
}
sparcity=(total-count)/total;
printf("\nthe sparcity is:%f",sparcity);
printf("\n the sparse matrix is\n");
printf("row\tcol\tvalue\n");
int count2;
count2=(int)count;
printf("%d\t%d\t%d",m,n,count2);
for(i=0;i<m;i++){
for(j=0;j<n;j++){
if(ar[i][j]!=0){


printf("\n%d\t%d\t%d\t",i,j,ar[i][j]); 
}
}
}










}
