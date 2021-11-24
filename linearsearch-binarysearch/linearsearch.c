#include<stdio.h>
int search(int ar[],int n,int key){
int i;
for(i=0;i<n;i++){
if(ar[i]==key){
return i;
}
else{
return -1;
}
}
}
void main(){
int i,searche,ar[100],n;
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the elements of array\n");
for(i=0;i<n;i++){
scanf("%d",&ar[i]);


}
printf("enter the search element");
scanf("%d",&searche);
int result=search(ar,n,searche);
if(result!=-1){
printf("the element %d is found at index %d",searche,result);

}
else{
printf("element not found");
}

}
