//Basic converter for arithmetic calculations
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(void)
{

	float dist;
	int input,num;
	char option;
	do
{
	printf("WELCOME TO OUR CONVERTER !!!!\n\n") ;
	//options to choose which conversion the user wants
	printf("Press the button \n\n [1]For conversion of kilometer to cm, m, inch, feet \n\n [2]For the conversion of centimeter to km,m,inch,feet \n \n [3]For the conversion of meter to cm,km,inch,feet \n \n [4]For the conversion of inches to cm,m,km,feet \n \n [5] For the conversion of feet to cm,m,inch,km\n \n");
	scanf("%d",&num);
	if(num==1)
{
	printf("Enter the distance in kilometer\a\n");
	scanf("%f",&dist)  ;
	//options to choose which conversion the user wants
	printf("press 1 to convert it into meters\n\n press 2 to convert it in cm\n \n press 3 to convert it into feet \n \n press 4 to convert it to inches\n\n ");
	printf("enter your choice\n");
	scanf("%d",&input);

	switch(input)
{

	case 1:
		dist=dist*1000;
		printf("Distance in meters is %f\n",dist);
		break;
	case 2:
		dist = dist*1000*100;
		printf("Distance in cm is %f \n",dist);
		break;
	case 3:
		dist = dist*100000*2.54*12;

		printf("Distance in feet is %f ",dist);
		break;
	case 4:
		dist = dist*100000*2.54 ;
		printf("Distance in inch is %f ",dist);
		break;
		default:
			 printf("ENTER CORRECTLY!!!!!!! ");

}
 }
	if(num==2)
{
	printf("Enter the distance in centimeter\a\n");
	scanf("%f",&dist)  ;
	printf("press 1 to convert it into meters\n \n press 2 to convert it in kilometer \n\n press 3 to convert it into feet \n \n press 4 to convert it to inches \n\n ");
	printf("enter your choice\n");
	scanf("%d",&input);
	switch(input)
{

	case 1:
		dist=dist/100;
		printf("Distance in m is %f\n",dist);
		break;
	case 2:
		dist = dist/1000*100;
		printf("Distance in km is %f \n",dist);
		break;
	case 3:

		dist = dist/2.54;
		dist=dist*12;
		printf("Distance in feet is %f ",dist);
		break;
	case 4:
		dist = dist/100000 ;
		dist = dist/2.54;
		printf("Distance in inch is %f ",dist);
		break;
		default:
			 printf("ENTER CORRECTLY!!!!!!! ");

}
 }
	if(num==3)
{
	printf("Enter the distance in Meter \a\n");
	scanf("%f",&dist)  ;
	printf("press 1 to convert it into kilometer \n\n press 2 to convert it in cm \n \n press 3 to convert it into feet \n \n press 4 to convert it to inches \n\n ");
	printf("enter your choice\n\n");
	scanf("%d",&input);
	switch(input)
{

	case 1:
		dist=dist/1000;
		printf("Distance in kilometers is %f\n",dist);
		break;
	case 2:
		dist = dist*100;
		printf("Distance in cm is %f \n",dist);
		break;
	case 3:
		dist = dist*100;
		dist = dist/2.54;
		dist=dist*12;
		printf("Distance in feet is %f ",dist);
		break;
	case 4:
		dist = dist*100 ;
		dist = dist/2.54;
		printf("Distance in inch is %f ",dist);
		break;
	default:
		printf("ENTER CORRECTLY!!!!!!! ");
}
 }
	if(num==4)
{
	printf("Enter the distance in inches \a\n");
	scanf("%f",&dist)  ;
	printf("press 1 to convert it into meters \n\n press 2 to convert it in cm \n \n press 3 to convert it into feet \n \n press 4 to convert it to kilometer \n\n ");
	printf("enter your choice\n");
	scanf("%d",&input);
	switch(input)
{

	case 1:
		dist=dist*2.54;
		dist =dist/100;
		printf("Distance in meters is %f\n",dist);
		break;
	case 2:
		dist = dist*2.54;
		printf("Distance in cm is %f \n",dist);
		break;
	case 3:

		dist = dist*2.54;
		dist=dist*12;
		printf("Distance in feet is %f ",dist);
		break;
	case 4:
		dist = dist*2.54;
		printf("Distance in inch is %f ",dist);
		break;
		default:
			printf("ENTER CORRECTLY!!!!!!! ");

}
}
	if(num!=1||num!=2||num!=3||num!=4||num!=5)
{
			printf("\nWRONG INPUT!!!!!!") ;
	}
	if(num==5)
{
	printf("Enter the distance in feet \a\n");
	scanf("%f",&dist)  ;
	printf("press 1 to convert it into meters\n\n press 2 to convert it in cm\n \n press 3 to convert it into inch \n \n press 4 to convert it to kilometer\n\n ");
	printf("enter your choice\n");
	scanf("%d",&input);
	switch(input)
{

	case 1:
		dist=dist*12;
		dist = dist*2.54;
		dist = dist/100;
		printf("Distance in meters is %f\n",dist);
		break;
	case 2:
		dist = dist*12;
	dist= dist*2.54;
	printf("Distance in cm is %f \n",dist);
	break;
	case 3:
		dist = dist*12;
		printf("Distance in feet is %f ",dist);
		break;
	case 4:
		dist = dist*12 ;
		dist = dist*2.54;
		dist =dist/100000;
		printf("Distance in inch is %f ",dist);
		break;
		default:
			 printf("ENTER CORRECTLY!!!!!!! ");

}

 }

      printf("\n\nDO YOU WANT TO CONTINUE??????? PRESS Y FOR CONTINUATION AND FOR DISCONTINUATION PRESS N!!!!!!!!!!");
             option=getche();
      }
             while(option=='y'&&'Y');
             getch();

   return 0;

}
