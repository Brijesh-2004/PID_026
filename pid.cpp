#include <stdio.h>
#include<string.h>
int input();

int main()
{
	printf("PLEASE LOGIN HERE\n\n");
	char id[50];

User:

printf("Enter your id:");

scanf("%s", &id);

if (strcmp(id,"brijesh")==0)

{

printf("Id is correct\n");

}

else

{

printf("You have entered an invalid user id\nPlease enter id again\n");

goto User;

}

char pass[50];

pass:

printf("Enter your password: ");

scanf("%s", &pass);

 if(strcmp(pass,"1274")==0)

{

printf("You have successfully logged in \n\n");

}

else

{

printf("You have entered a wrong password\nEnter your password again\n");

}



	printf("1.choose your area\n");
	printf("2.governmet scheme\n");
	printf("3.warrenty information \n");
	printf("4.Get help for Other Services \n");
	int choice, num;
	choice:
	printf("ENTER YOUR CHOICE:");
	
	
	choice = input();
	
	switch (choice) {
	char hlo,hii;
	hlo:
	printf("IF YOU WANT TO CONTINUE TYPE Y 0r y :");
	scanf("%s",&hii);
	if(hii=='y' || hii=='Y')
	{
		goto choice1;
	}
	else
	{
	    goto choice;	
	}
	  char a,b;
	a:
	printf("IF YOU WANT TO CONTINUE TYPE Y 0r y :");
	scanf("%s",&b);
	if(b=='y' || b=='Y')
	{
		goto choice2;
	}
	else
	{
	    goto choice;	
	}
		
		
	case 1: {
				printf("\n area we cover!!\n\n");
			printf("1.naroda\n");
			printf("2.thaltej\n");
			printf("3.kalupur\n");
			printf("4.sola\n");
			printf("5.gota\n");
			
		
		    int choice1;
		    choice1:
		    printf("ENTER YOUR CHOICE FOR AREA!!:");
		    scanf("%d",&choice1);
			if(choice1==1)
			{
				printf("\the partner\n");
				printf("fees\n");
				printf("open-close timing\n");
				goto hlo;
				
			 } 
			 else if(choice1==2)
			 {
				printf("\nthe partner:ashokbhai,shop number-310\n");
				printf("fees:300rs for 10 plates ,automatic cleaning robo	\n");
				printf("opening time=8am,closing time=6pm\n");
				goto hlo;
			 }
			  else if(choice1==3)
			 {
			 		printf("\nthe partner:anilbhai,shop number-12	\n");
				printf("fees:400rs for 10 plates ,offline person\n");
				printf("opening time=7:30am,closing time=6pm\n");
				goto hlo;
			 }
			   else if(choice1==4)
			 {
			 		printf("\nthe partner:rakeshbhai,shop number-98	\n");
				printf("fees:350rs for 10 plates ,motor cleaning \n");
				printf("opening time=6am,closing time=6pm\n");
				goto hlo;
			 }
			  else if(choice1==5)
			 {
			 		printf("\nthe partner:deepakbhai,shop number-113\n");
				printf("fees:450rs for 10 plates ,advance robo\n");
				printf("opening time=7:30am,closing time=8pm\n");
				goto hlo;
			 }
		    else
		    {
				
		    	printf("SORRY WRONG CHOICE");
			}
		    
		
	}
	case 2: {
            	printf("\n\n");
				printf("1>2.5 KW(Solar System Capacity)	\n");
				printf("2>3 KW(Solar System Capacity)\n\n");
				printf("3>4 KW(Solar System Capacity)\n\n");
				printf("4>6 KW(Solar System Capacity)\n\n");
				printf("5>10 KW(Solar System Capacity)\n\n");
				
				int choice2;
				choice2:
		        printf(":");
                scanf("%d",&choice2);
  
                
                if(choice2==1)
                {
                	
					printf("Rs. 14588/- X 2.5 = Rs. 36,470/-(Subsidy Break down )\n\n\n");
					goto a;
				 }
				  if(choice2==2)
                {
                	
					printf(".	Rs. 14588/- X 2.5 = Rs.43,764/-(Subsidy Break down )\n\n");
					goto a;
				 }
				  if(choice2==3)
                {
                	
					printf("Rs. 14588/- X 2.5 = Rs. 51,058/-(Subsidy Break down )\\n\n");
					goto a;
				 }
				  if(choice2==4)
                {
                	
					printf("Rs. 14588/- X 2.5 = Rs. 69,293/-(Subsidy Break down )\n\n");
					goto a;
				 }
				  if(choice2==5)
                {
                	
					printf("Rs. 14588/- X 2.5 = Rs. 94822/-(Subsidy Break down ).\n\n");
					goto a;
				 }
				  if(choice2==6)
                {
                	
					printf("for extra use above calculation\n\n");
					goto a;
				 }
				  else
		    {
		    	printf("SORRY WRONG CHOICE");
			}
				 
				 break;
		
		
	}
	case 3:
	{
	
		printf("the warrenty will be decided by the product");
	}
	{
	
	case 4:
		printf("for service call brijesh s upadhyay number=(+91-6351144994)");
}
	default:
		printf("wrong Input\n");
	}
return 0;
}


int input()
{
    int number;
    scanf("%d", &number);
    return(number);
}
