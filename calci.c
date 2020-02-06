#include<stdio.h>
void main()
{int ch,a,b,result;
char con;
do{
printf("Enter your choice\n 1. Sum \n2.Substract\n 3.multiply\n 4.divide\n ");
scanf("%d",&ch);
printf("Enter two numbers");
scanf("%d %d",&a, &b);
if(ch==1){
result= a+b;
printf("Sum: %d",result);
}
else if(ch==2){
result= a-b;
printf("Sum: %d",result);

}
else if(ch==3){
result= a*b;
printf("Sum: %d",result);

}
else if(ch==4){
result= a/b;
printf("Sum: %d",result);

}
else{
printf("invalid choice");
}
printf("\n Do you want to continue Y/N:");
scanf("%c",&con);
}while(con =='Y' || con =='y');
}
