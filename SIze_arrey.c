#include<stdio.h>ntfnt
int main(){
int i,size=0,sum;
printf("Type Your Size of your arrey:");
scanf("%d",&size);
int arr[size];
for (i=0;i<size;i++){
    printf("Enter elements ",i);

scanf("%d",&arr[i]);
sum +=arr[i];
}

printf("sum of arrey elements:%d\n",sum);











return 0;
}
