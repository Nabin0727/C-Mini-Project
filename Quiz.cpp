//Project By G-5 Team
//KO BANCHHA ASIANPATEE
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>  //For Beep Sound
	int choice,age,i,prize=0,iqs=0,ch,pp;
	char name[50],address[50];
	long int number;
	FILE *fp;
void show();  //Shows option at the begining
void showdata();  //Show data from previous game
void start();  //First registration
void play();  //Play game first
void iq();    //Check the IQ
void prizes();  //Claculate prize
void play1();   //Second game
void testagain();  //Test IQ again
void quiznew();   //To goto play1
void registration(); //For registration
void onemore();  //To paly once again
int main()
{

	printf("________________________________________________________________________________________________________________________________________________________________________\n\n");
	printf("***************************************************************************KO BANCHHA ASIANPATEE************************************************************************");
	printf("\n________________________________________________________________________________________________________________________________________________________________________\n");
	printf("\n\t\t\t\t\t\t\t\t\t!! Welcome To Ko Banchha AsianPatee !!\n");
	printf("\n\t\t\t\t\t\t\t!! In a Co-ordination with WRH ( WE ARE HUMANS ) Group Nepal !!\n\n");
	printf("\n\t\t\t\t\t\t\t   !! Tittle Sponser By Mannu Nannu International Company !!\n");
	show(); //Function Call to Show Function
	
    //Testing IQ Here!!
	for(i=1;i<=5;i++)
    	{
			switch(i)
			{
		case 1:
	            printf("\nQ.1 Who is the Chief Minister of Provinince no. 3 ?\n\n");
	            printf("\t\tA. [  Sher Dhan Rai  ]\t\t\t  B. [  Trilochan Bhatta ]\n");
	            printf("\t\tC. [  Dormani Paudel  ]\t\t\t  D. [  Prithibhi Shubba Gurung  ]\n");
	            printf("\n\tChoose Your Answer:");
             	scanf("%d",&choice);
                if(choice==3)
                {
                	printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
                	printf("\n******************************\n");
	                printf("\nLet's Move To Another Question\n");
	                printf("\n******************************\n");
	                iqs++;
	                break;
				}
				else
				{
					printf("\n********************************************************************************************\n");
					printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
					printf("\n********************************************************************************************\n");
					Beep(1000,1000);
			        iq();
		        	break;
			    }
		case 2:
			//Second Question
	        printf("\nQ.2 Brazil won Footaball Worldcup for____?\n\n");
	        printf("\t\tA. [  3 Times ]\t\t  B. [  4 Times  ]\n");
         	printf("\t\tC. [  5 Times  ]\t  D. [  6 Times  ]\n");
         	printf("\n\tChoose Your Answer:");
        	scanf("%d",&choice);
        	if(choice==3)
        	{
        		printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
        		printf("\n******************************\n");
	            printf("\nLet's Move To Another Question!!\n");
	            printf("\n******************************\n");
	            iqs++;
			    break;	
        	}
        	else
        	{
        		printf("\n********************************************************************************************\n");
        		printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
        		printf("\n********************************************************************************************\n");
        		Beep(1000,1000);
				iq();
				
			    break;
        	}
        case 3:
			//Third Question
	        printf("\nQ.3 The writer of the book \"The Tales of Two Cities\" is____?\n\n");
	        printf("\t\tA. [ Paulo Coulleo ]\t\t  B. [  Charles Dickens  ]\n");
	        printf("\t\tC. [  William Shakepere  ]\t  D. [  G.G Marquees  ]\n");
	        printf("\n\tChoose Your Answer:");
	        scanf("%d",&choice);
	        if(choice==2)
	        {
	        	printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
	        	printf("\n******************************\n");
	            printf("\nLet's Move To Another Question!!\n");
	            printf("\n******************************\n");
	            iqs++;
		    	break;	
	        }
	        else
			{
				printf("\n********************************************************************************************\n");
			    printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
			    printf("\n********************************************************************************************\n");
			    Beep(1000,1000);
		    	iq();
		    	break;	
	        }

		
		case 4:
			//Fourth Question
	        printf("\nQ.4 Who is known as Monster of Geometry ?\n\n");
	        printf("\t\tA. [ Newton ]\t\t  B. [  Pascal  ]\n");
	        printf("\t\tC. [  Arya Bhatt  ]\t  D. [  Archimidies  ]\n");
	        printf("\n\tChoose Your Answer:");
	        scanf("%d",&choice);
	        if(choice==4)
	        {
	        	printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
	        	printf("\n******************************\n");
	            printf("\nLet's Move To Another Question!!\n");
	            printf("\n******************************\n");
	            iqs++;
		     	break;	
	        }
	        else 
			{
				printf("\n********************************************************************************************\n");
				printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
				printf("\n********************************************************************************************\n");
				Beep(1000,1000);
			    iq();
		     	break;		
	        }
	    case 5:
	    	//Fifth Question
	        printf("\nQ.5 How many zeros make One Thousands ?\n\n");
        	printf("\t\tA. [ One ]\t\t  B. [  Two  ]\n");
        	printf("\t\tC. [  Three  ]\t\t  D. [ None  ]\n");
        	printf("\n\tChoose Your Answer:");
        	scanf("%d",&choice);
        	if(choice==4)
        	{
        		printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
        		printf("\n*******************************************\n");
	            printf("\n!! You Sucessfully Completed The IQ Test !!\n");
	            printf("\n*******************************************\n");
	            iqs++;
	            iq();
			    break;
        	}
        	else
        	{
        		printf("\n********************************************************************************************\n");
        		printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
        		printf("\n********************************************************************************************\n");
        		Beep(1000,1000);
			    iq();
		     	break;	
        	}
        	
		
		default:
			printf("\n*******************************************************************************************\n");
			printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
			printf("\n******************************************************************************************\n");
			Beep(1000,1000);
			iq();
			break;
	     	}
	}
	    //Writing to a file.
	    fp=fopen("D:\\AsianPatee.txt","w");
    	fprintf(fp,"  %s\n %s\n %ld\n  %d\n  %d",name,address,number,age,prize*100);
    	pp=prize*100;	
	return 0;	
}

//Show Function Defination
void show()
{
	int ch;
	printf("\n******************************************************************CHOOSE WHAT YOU WANT TO DO***************************************************************************\n");
	printf("Press '1' To See Record and Play New Game\n");
	printf("Press '2' To Play \"Ko Banchha AsianPatee\"\n");
	printf("Press Any Key To Quit\n");
    scanf("%d",&ch);
	if(ch==1)
	showdata();
	else if(ch==2)
	start();
	else
	{
		
	//Writing to file at the end of the program
	fp=fopen("D:\\AsianPatee.txt","w+");
	if(fp==NULL)
	{
		
	printf("Not Register.");
	exit(0);
	
    }
	else
    	printf("\n********************************************************************************************\n");
	    printf("\n !! Sucessfully Register Reocrd To Database !!\n");
    	fprintf(fp," %s\n %s\n  %ld\n  %d\n %d",name,address,number,age,prize*100);
    	pp=prize*100;
		
		printf("\n********************************************************************************************\n");
		printf("\n\n!! THANK YOU FOR PARTICIPATING IN \"KO BANCHHA ASIANPATEE\" !! \n ");
		printf("\n\n !!!!! REGARDS G5-TEAM !!!!!\n \t\t    -Nabin Lopchan\n \t\t    -Manoj Paudel\n \t\t    -Muna Ghishing\n");
		printf("\n********************************************************************************************\n");
		exit(0);
	}
}

//Show Data Function Defination
void showdata()
{
	fp=fopen("D:\\AsianPatee.txt","r");		
	fscanf(fp," %s\n  %s\n  %ld\n  %d\n %d",&name,&address,&number,&age,&pp);
	printf("\n\n*********************************************************\n");
	printf("\n!! Data Of The Previous Game !!\n");
    printf(" Name: %s\n Address: %s\n Mobile: %ld\n Age: %d\n Prize Money: %d\n",name,address,number,age,pp);
    printf("\n\n*********************************************************\n");		
	fclose(fp);
	start();
}

//Start Function Defination
void start()
{
	printf("\nPlease Register Here!!\n");
	printf("************************\n");
	printf("************************\n");
	printf("Your Full Name\n");
	scanf("%s",name);
	printf("************************\n");
	printf("************************\n");
	printf("Your Full Address\n");
	scanf("%s",address);
	printf("************************\n");
	printf("************************\n");
	printf("Your Mobile Number:\n");
	scanf("%ld",&number);
	printf("************************\n");
	printf("************************\n");
	printf("Your Age \n");
	scanf("%d",&age);
	system("cls");
	printf("_____________________________________________________________________________________________________________________________________________________________________\n");
	printf("*************************************************************YOU HAVE SUCESSFULLY REISTER TO \"KO BANCHHA ASIANPATEE\"****************************************************\n");
	printf("________________________________________________________________________________________________________________________________________________________________________\n");
	printf("\n***Prize Money***\n Rs. 100 For Each Question\n ");
	printf("\n\t\t\tRules for playing \"KO BANCHHA ASIANPATI\"\n");
	printf("\n1. Contentest should be from Asian School Of Management and Technology.\n2. Participant can quite the game anytime.\n3. There will be no life line and green line.\n4. Every participants should follow the rules and regulation of the college.\n5. There are four option and participants should choose answer in numeric order 1,2,3,4.\n6. Participants should first play IQ test Quiz.\n7. There are three total three rounds and Grand Prize Money is 3,000.\n8. Registration Fee is Rs. 50.\n\n ");
    printf("\t\t\t\t\t\t************************\n");
	printf("\t\t\t\t\t\t  Let's Check Your IQ\n");
	printf("\t\t\t\t\t\t************************\n");
	  
}

//IQ calculation
void iq()
{
	if(iqs==0)
	{
		printf("\n\n********************************************************************************************\n");
	    printf("\n!!SORRY!! Your IQ Level is too weak !! %s !!\n !!Please Try Another Time!!",name);
	    printf("\n\n********************************************************************************************\n");
	    testagain();
	
    }
	else if(iqs==1)
	{
		printf("\n\n********************************************************************************************\n");
		printf("\n!!SORRY!! Try Hard Next Time !! %s !!\n THANK YOU FOR PARTICIPATING!! \" %s \"",name,name);
		printf("\n\n********************************************************************************************\n");
		testagain();
	}

	else if(iqs==2)
	{
		printf("\n\n********************************************************************************************\n");
		printf("\n!!SORRY!! Try Hard Next Time !! %s !!\n THANK YOU FOR PARTICIPATING!! \" %s \"",name,name);
		printf("\n\n********************************************************************************************\n");
		testagain();
		
	}
    
	else if(iqs==3)
	{
		printf("\n\n********************************************************************************************\n");
		 printf("\n!!SORRY!! Try Hard Next Time !! %s !!\n THANK YOU FOR PARTICIPATING!! \" %s \"",name,name);
		 printf("\n\n********************************************************************************************\n");
		 testagain();
		
	}
   
	else if(iqs==4)
	{
		printf("\n\n********************************************************************************************\n");
		 printf("\n!!CONGRATULATION!! Your IQ Level is Quite Good !! %s !!\n THANK YOU FOR PARTICIPATING!! \" %s \"",name,name);
		 printf("\n\n********************************************************************************************\n");
		 play();
	}
   
	else
	{
		printf("\n\n********************************************************************************************\n");
		printf("\n!!CONGRATULATION!! Your IQ Level is Very Good !! %s !! \n THANK YOU FOR PARTICIPATING!! \" %s \"",name,name);
		printf("\n\n********************************************************************************************\n");
		play();
	}
}


//To test IQ again
void testagain()
{
		printf("\n\n*********************************************************\n");
		printf("\nPress ' 1 ' To Test IQ Again or Any Key To Exit!!\n");
		scanf("%d",&ch);
		if(ch==1)		
		registration();
		else
		{
			printf("\n********************************************************************************************\n");
			printf("\n\n!! THANK YOU FOR PARTICIPATING IN \"KO BANCHHA ASIANPATEE\" !! \n ");
			printf("\n\n !!!!! REGARDS G5-TEAM !!!!!\n \t\t    -Nabin Lopchan\n \t\t    -Manoj Paudel\n \t\t    -Muna Ghishing\n");
			printf("\n********************************************************************************************\n");
			exit(0);
		}		
}
	
//Registration IQ Test  
void registration()
{
  for(i=1;i<=5;i++)
    {
		switch(i)
		{
		case 1:
	            printf("\nQ.1 Who is the Chief Minister of Provinince no. 3 ?\n\n");
	            printf("\t\tA. [  Sher Dhan Rai  ]\t\t\t  B. [  Trilochan Bhatta ]\n");
	            printf("\t\tC. [  Dormani Paudel  ]\t\t\t  D. [  Prithibhi Shubba Gurung  ]\n");
	            printf("\n\tChoose Your Answer:");
             	scanf("%d",&choice);
                if(choice==3)
                {
                	printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
                	printf("\n******************************\n");
	                printf("\nLet's Move To Another Question\n");
	                printf("\n******************************\n");
	                iqs++;
	                break;
				}
				else
				{
					printf("\n********************************************************************************************\n");
					printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
					printf("\n********************************************************************************************\n");
					Beep(1000,1000);
			        iq();
		        	break;
			    }
		case 2:
			//Second Question
	        printf("\nQ.2 Brazil won Footaball Worldcup for____?\n\n");
	        printf("\t\tA. [  3 Times ]\t\t  B. [  4 Times  ]\n");
         	printf("\t\tC. [  5 Times  ]\t  D. [  6 Times  ]\n");
         	printf("\n\tChoose Your Answer:");
        	scanf("%d",&choice);
        	if(choice==3)
        	{
        		printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
        		printf("\n******************************\n");
	            printf("\nLet's Move To Another Question!!\n");
	            printf("\n******************************\n");
	            iqs++;
			    break;	
        	}
        	else
        	{
        		printf("\n********************************************************************************************\n");
        		printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
        		printf("\n********************************************************************************************\n");
        		Beep(1000,1000);
				iq();
			    break;
        	}
        case 3:
			//Third Question
	        printf("\nQ.3 The writer of the book \"The Tales of Two Cities\" is____?\n\n");
	        printf("\t\tA. [ Paulo Coulleo ]\t\t  B. [  Charles Dickens  ]\n");
	        printf("\t\tC. [  William Shakepere  ]\t  D. [  G.G Marquees  ]\n");
	        printf("\n\tChoose Your Answer:");
	        scanf("%d",&choice);
	        if(choice==2)
	        {
	        	printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
	        	printf("\n******************************\n");
	            printf("\nLet's Move To Another Question!!\n");
	            printf("\n******************************\n");
	            iqs++;
		    	break;	
	        }
	        else
			{
				printf("\n********************************************************************************************\n");
			    printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
			    printf("\n********************************************************************************************\n");
			    Beep(1000,1000);
		    	iq();
		    	break;	
	        }

		
		case 4:
			//Fourth Question
	        printf("\nQ.4 Who is known as Monster of Geometry ?\n\n");
	        printf("\t\tA. [ Newton ]\t\t  B. [  Pascal  ]\n");
	        printf("\t\tC. [  Arya Bhatt  ]\t  D. [  Archimidies  ]\n");
	        printf("\n\tChoose Your Answer:");
	        scanf("%d",&choice);
	        if(choice==4)
	        {
	        	printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
	        	printf("\n******************************\n");
	            printf("\nLet's Move To Another Question!!\n");
	            printf("\n******************************\n");
	            iqs++;
		     	break;	
	        }
	        else 
			{
				printf("\n********************************************************************************************\n");
				printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
				printf("\n********************************************************************************************\n");
				Beep(1000,1000);
			    iq();
		     	break;		
	        }
	    case 5:
	    	//Fifth Question
	        printf("\nQ.5 How many zeros make One Thousands ?\n\n");
        	printf("\t\tA. [ One ]\t\t  B. [  Two  ]\n");
        	printf("\t\tC. [  Three  ]\t\t  D. [ None  ]\n");
        	printf("\n\tChoose Your Answer:");
        	scanf("%d",&choice);
        	if(choice==4)
        	{
        		printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
        		printf("\n*******************************************\n");
	            printf("\n!! You Sucessfully Completed The IQ Test !!\n");
	            printf("\n*******************************************\n");
	            iqs++;
	            iq();
			    break;
        	}
        	else
        	{
        		printf("\n********************************************************************************************\n");
        		printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
        		printf("\n********************************************************************************************\n");
        		Beep(1000,1000);
			    iq();
		     	break;	
        	}
        	
		
		default:
			printf("\n*******************************************************************************************\n");
			printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
			printf("\n******************************************************************************************\n");
			Beep(1000,1000);
			iq();
			break;
	     	}
	}	
}


//Quiz First
void play()
{
	printf("\n--------------------WELCOME !! %s !! LET'S PLAY \"KO BANCHHA ASIANPATI\"--------------------\n",name);
	for(i=1;i<=10;i++)
	{
			switch(i)
			{
				//system("cls");
		case 1:
	            printf("\nQ.1 How many Rural Municipality are there according  to the provinice of 2072 ?\n\n");
	            printf("\t\tA. [  478  ]\t\t\t  B. [  479  ]\n");
	            printf("\t\tC. [  480  ]\t\t\t  D. [  481  ]\n");
	            printf("\n\tChoose Your Answer:");
             	scanf("%d",&choice);
                if(choice==2)
                {
                	printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
                	printf("\n******************************\n");
	                printf("\nLet's Move To Another Question\n");
	                printf("\n******************************\n");
	                prize++;
	                break;
				}
				else
				{
					printf("\n********************************************************************************************\n");
					printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
					printf("\n\n********************************************************************************************\n");
					Beep(1000,900);
			        prizes();
		        	break;
			    }
		case 2:
			//Second Question
	        printf("\nQ.2 Who was the last Rana Prime Minister?\n\n");
	        printf("\t\tA. [  Shree 3 Janga Bahadur Rana  ]\t\t  B. [  Shree 3 Chandra Shamsher  ]\n");
         	printf("\t\tC. [  Shree 3 Mohan Shamsher  ]\t\t\t  D. [  Shree 3 Dev Shamsher  ]\n");
         	printf("\n\tChoose Your Answer:");
        	scanf("%d",&choice);
        	if(choice==3)
        	{
        		printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
        		printf("\n******************************\n");
	            printf("\nLet's Move To Another Question!!\n");
	            printf("\n******************************\n");
	            prize++;
			    break;	
        	}
        	else
        	{
        		printf("\n********************************************************************************************\n");
        		printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
        		printf("\n\n********************************************************************************************\n");
        		Beep(1000,900);
				prizes();
			    break;
        	}
        case 3:
			//Third Question
	        printf("\nQ.3 Which country uses Paper Money only ?\n\n");
	        printf("\t\tA. [ Lahos ]\t\t  B. [  Iseral  ]\n");
	        printf("\t\tC. [  Saudi Arab  ]\t  D. [  Kuwait  ]\n");
	        printf("\n\tChoose Your Answer:");
	        scanf("%d",&choice);
	        if(choice==1)
	        {
	        	printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
	        	printf("\n******************************\n");
	            printf("\nLet's Move To Another Question!!\n");
	            printf("\n******************************\n");
	            prize++;
		    	break;	
	        }
	        else
			{
				printf("\n********************************************************************************************\n");
			    printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
			    printf("\n\n********************************************************************************************\n");
			    Beep(1000,900);
		    	prizes();
		    	break;	
	        }

		
		case 4:
			//Fourth Question
	        printf("\nQ.4 Common Cold is caused by which Virus ?\n\n");
	        printf("\t\tA. [ Evola Virus ]\t\t  B. [  Retro Virus  ]\n");
	        printf("\t\tC. [  Paramyxo Virus  ]\t\t D. [  Rhino Virus  ]\n");
	        printf("\n\tChoose Your Answer:");
	        scanf("%d",&choice);
	        if(choice==4)
	        {
	        	printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
	        	printf("\n******************************\n");
	            printf("\nLet's Move To Another Question!!\n");
	            printf("\n******************************\n");
	            prize++;
		     	break;	
	        }
	        else 
			{
				printf("\n********************************************************************************************\n");
				printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
				printf("\n\n********************************************************************************************\n");
				Beep(1000,900);
			    prizes();
		     	break;		
	        }
	    case 5:
	    	//Fifth Question
	        printf("\nQ.5 Which country won the 9th SAFF Football Champaionship ?\n\n");
        	printf("\t\tA. [ India ]\t\t  B. [  Afganistan  ]\n");
        	printf("\t\tC. [  Nepal  ]\t\t  D. [  Sirlanka  ]\n");
        	printf("\n\tChoose Your Answer:");
        	scanf("%d",&choice);
        	if(choice==1)
        	{
        		printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
        		printf("\n******************************\n");
	            printf("\nLet's Move To Another Question!!\n");
	            printf("\n******************************\n");
	            prize++;
			    break;
        	}
        	else
        	{
        		printf("\n********************************************************************************************\n");
        		printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
        		printf("\n\n********************************************************************************************\n");
        		Beep(1000,900);
			    prizes();
		     	break;	
        	}
        	
		case 6:
			//Sixth Question
	        printf("\nQ.6 How many times a piece of paper can be folded at the most ?\n\n");
        	printf("\t\tA. [ Five Times ]\t\t  B. [  Six Times  ]\n");
	        printf("\t\tC. [  Seven Times  ]\t\t  D. [  Depends on it's size  ]\n");
        	printf("\n\tChoose Your Answer:");
        	scanf("%d",&choice);
        	if(choice==3)
        	{
        		printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
        		printf("\n******************************\n");
	            printf("\nLet's Move To Another Question!!\n");
				printf("\n******************************\n");
	            prize++;
	            break;
        	}
        	else
        	{
        		printf("\n********************************************************************************************\n");
        	    printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
        	    printf("\n\n********************************************************************************************\n");
        	    Beep(1000,900);
	        	prizes();
			    break;	        		
        	}
        case 7:
		    //Seventh Question
	        printf("\nQ.7 In which Culture \"Sindur\" is not used during marrige ?\n\n");
           	printf("\t\tA. [ Rai Culture ]\t\t  B. [  Tharu Culture  ]\n");
	        printf("\t\tC. [  Tamang Culture  ]\t\t  D. [  Thakali Culture  ]\n");
	        printf("\n\tChoose Your Answer:");
	        scanf("%d",&choice);
	        if(choice==3)
	        {
	        	printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
	        	printf("\n******************************\n");
	            printf("\nLet's Move To Another Question!!\n");
	            printf("\n******************************\n");
	            prize++;
		     	break;	
	        }
	        else
	        {
	        	printf("\n********************************************************************************************\n");
	        	printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
	        	printf("\n\n********************************************************************************************\n");
	        	Beep(1000,900);
		    	prizes();
			    break;	
	        }

		case 8:
			//Eighth Question
          	printf("\nQ.8 \"PINAS KO ATMA KATHAA\" was written by_______ ?\n\n");
         	printf("\t\tA. [ Somnath Sigdel ]\t\t  B. [  Shambhu Prashad Dhungel  ]\n");
          	printf("\t\tC. [  Shanker Lamichhane  ]\t  D. [  Shidhi Charan Shrestha  ]\n");
	        printf("\n\tChoose Your Answer:");
         	scanf("%d",&choice);
         	if(choice==2)
         	{
         		printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
         		printf("\n******************************\n");
	            printf("\nLet's Move To Another Question!!\n");
	            printf("\n******************************\n");
	            prize++;
		     	break;         		
         	}
         	else
         	{
         		printf("\n********************************************************************************************\n");
         		printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
         		printf("\n\n********************************************************************************************\n");
         		Beep(1000,900);
		    	prizes();
			    break;       		
         	}

		case 9:
			//Ninth Question
          	printf("\nQ.9 What is the color of the Black Box in aeroplanes ?\n\n");
        	printf("\t\tA. [ White ]\t\t  B. [ Black  ]\n");
	        printf("\t\tC. [  Red  ]\t\t  D. [  Orange  ]\n");
         	printf("\n\tChoose Your Answer:");
         	scanf("%d",&choice);
         	if(choice==4)
         	{
         		printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
         		printf("\n******************************\n");
	            printf("\nLet's Move To Another Question!!\n");
	            printf("\n******************************\n");
	            prize++;
		    	break;
         	}
         	else
         	{
         		printf("\n********************************************************************************************\n");
         		printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
         		printf("\n\n********************************************************************************************\n");
         		Beep(1000,900);
				prizes();
		    	break;		
         	}
			 			
		case 10:
		    //Tenth Question
	        printf("\nQ.10 When was Facebook Founded ?\n\n");
          	printf("\t\tA. [ 5 Feb 2004 ]\t\t  B. [ 5 Feb 2005  ]\n");
          	printf("\t\tC. [ 4 Feb 2004 ]\t\t  D. [ 4 Feb 2005  ]\n");
          	printf("\n\tChoose Your Answer:");
        	scanf("%d",&choice);
        	if(choice==3)
        	{
        		printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
        		printf("\n*********************************************************\n");
	            printf("\n!! You Have Completed Ko Banchha AsianPatee Sucessfully!!\n");
	            printf("\n*********************************************************\n");
	            prize++;
	            prizes();
		     	break;	
        	}
        	else
        	{
        		printf("\n********************************************************************************************\n");
        		printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
        		printf("\n\n********************************************************************************************\n");
        		Beep(1000,900);
		     	prizes();
		    	break;   		
        	}
	
		default:
			    printf("\n********************************************************************************************\n");
		    	printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
		    	printf("\n\n********************************************************************************************\n");
		    	Beep(1000,900);
		       	prizes();
		    	break;
		    }
		    //system("cls");
	    }
}


//Prize Calculation Function
void prizes()
{
	if(prize==0)
	{
	    printf("\n******************************************************************\n");		
	    printf("\n!!SORRY!! You Didn't Won Any Money\n !!Please Try Another Time!!"); 
	    printf("\n\n******************************************************************\n");
	    onemore();
	
	}
	else if(prize==1)
	{
		printf("\n\n!!CONGRATULATION!! You Have Sucessfully Won Rs. %d\n THANK YOU FOR PARTICIPATING!! \" %s \"",prize*100,name);
		onemore();
	}
	
	else if(prize==2)
	{
		printf("\n\n!!CONGRATULATION!! You Have Sucessfully Won Rs. %d\n THANK YOU FOR PARTICIPATING!! \" %s \"",prize*100,name);
		onemore();
		
	}
	
	else if(prize==3)
	{
		printf("\n\n!!CONGRATULATION!! You Have Sucessfully Won Rs. %d\n THANK YOU FOR PARTICIPATING!! \" %s \"",prize*100,name);
		onemore();
		
	}

	else if(prize==4)
	{
		printf("\n\n!!CONGRATULATION!! You Have Sucessfully Won Rs. %d\n THANK YOU FOR PARTICIPATING!! \" %s \"",prize*100,name);
		onemore();
			
	}

	else if(prize==5)
	{
		printf("\n\n!!CONGRATULATION!! You Have Sucessfully Won Rs. %d\n THANK YOU FOR PARTICIPATING!! \" %s \"",prize*100,name);
		onemore();
	}
	
	else if(prize==6)
	{
		printf("\n\n!!CONGRATULATION!! You Have Sucessfully Won Rs. %d\n THANK YOU FOR PARTICIPATING!! \" %s \"",prize*100,name);
		onemore();
	}
	
	else if(prize==7)
	{
		printf("\n\n!!CONGRATULATION!! You Have Sucessfully Won Rs. %d\n THANK YOU FOR PARTICIPATING!! \" %s \"",prize*100,name);
		onemore();
	}
	
	else if(prize==8)
	{
		printf("\n\n**********************************************************************************************\n");
		printf("\n!!CONGRATULATION!! You Have Sucessfully Won Rs. %d\n THANK YOU FOR PARTICIPATING!! \" %s \"",prize*100,name);
		printf("\n\n**********************************************************************************************\n");
		onemore();
	}
	

	else if(prize==9)
	{
		printf("\n\n**********************************************************************************************\n");
		printf("\n!!CONGRATULATION!! You Have Sucessfully Won Rs. %d\n THANK YOU FOR PARTICIPATING!! \" %s \"",prize*100,name);
		printf("\n\n**********************************************************************************************\n");
		onemore();		
	}
	
	else
	{
		printf("\n\n**********************************************************************************************\n");
		printf("\n!!CONGRATULATION!! You Have Sucessfully Won Rs. %d\n THANK YOU FOR PARTICIPATING!! \" %s \"",prize*100,name);
		printf("\n\n**********************************************************************************************\n");
		quiznew();	
    }
}


//To Play Again If did't won any Money or Didn't complete the quiz
void onemore()
{
	printf("\n\n*********************************************************\n");
	printf("\nPress ' 1 ' To Play Again or Press Any Key To Exit!!\n");
	scanf("%d",&ch);
	if(ch==1)
	play();
	else
	{
	//Writing to file at the end of the program
	fp=fopen("D:\\AsianPatee.txt","w+");
	if(fp==NULL)
	{
		
	printf("Not Register.");
	exit(0);
	
    }
	else
    	printf("\n********************************************************************************************\n");
	    printf("\n !! Sucessfully Register Reocrd To Database !!\n");
    	fprintf(fp,"  %s\n  %s\n  %ld\n  %d\n  %d",name,address,number,age,prize*100);
    	pp=prize*100;
		printf("\n********************************************************************************************\n");
		printf("\n\n!! THANK YOU FOR PARTICIPATING IN \"KO BANCHHA ASIANPATEE\" !! \n ");
		printf("\n\n !!!!! REGARDS G5-TEAM !!!!!\n \t\t    -Nabin Lopchan\n \t\t    -Manoj Paudel\n \t\t    -Muna Ghishing\n");
		printf("\n********************************************************************************************\n");
		exit(0);				
	}	
		
}


		
//New Quiz  If wish to paly more 
void quiznew()
{
	printf("\n\n*********************************************************\n");
	printf("\nPress ' 1 ' To Play Another Quiz or Any Key To Exit!!\n");
	scanf("%d",&ch);
	if(ch==1)		
	play1();
	else
	{
	//Writing to file at the end of the program 
	fp=fopen("D:\\AsianPatee.txt","w+");
	if(fp==NULL)
	{
		
	printf("Not Register.");
	exit(0);
	
    }
	else
    	printf("\n********************************************************************************************\n");
    	printf("\n !! Sucessfully Register Reocrd To Database !!\n");
	    fprintf(fp,"  %s\n  %s\n  %ld\n  %d\n  %d",name,address,number,age,prize*100);
	    pp=prize*100;
		
		printf("\n********************************************************************************************\n");
		printf("\n\n!! THANK YOU FOR PARTICIPATING IN \"KO BANCHHA ASIANPATEE\" !! \n ");
		printf("\n\n !!!!! REGARDS G5-TEAM !!!!!\n \t\t    -Nabin Lopchan\n \t\t    -Manoj Paudel\n \t\t    -Muna Ghishing\n");
		printf("\n********************************************************************************************\n");
		exit(0);			
	}
		
		
		
}


	
//Quiz Second for winner of Quiz One
void play1()
{
	printf("\n--------------------WELCOME ONCE AGAIN !! %s !! LET'S PLAY \"KO BANCHHA ASIANPATI\"--------------------\n",name);
	for(i=1;i<=10;i++)
	{
		switch(i)
		{
			//system("cls");
			case 1:
	            printf("\nQ.1 During the Rana Regim Nepal was divided into __________ District ?\n\n");
	            printf("\t\tA. [  34  ]\t\t\t  B. [  35  ]\n");
	            printf("\t\tC. [  36  ]\t\t\t  D. [  37  ]\n");
	            printf("\n\tChoose Your Answer:");
             	scanf("%d",&choice);
                if(choice==2)
                {
                	printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
                	printf("\n******************************\n");
	                printf("\nLet's Move To Another Question\n");
	                printf("\n******************************\n");
	                prize++;
	                break;
				}
				else
				{
					printf("\n********************************************************************************************\n");
					printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
					printf("\n\n********************************************************************************************\n");
					Beep(1000,900);
			        prizes();
		        	break;
			    }
		case 2:
			//Second Question
	        printf("\nQ.2 Who is the current Education Minister of Nepal ?\n\n");
	        printf("\t\tA. [  Giriraj Mani Pokharel  ]\t\t  B. [  Gokul Baskota  ]\n");
         	printf("\t\tC. [  Yubraj Khatiwada  ]\t\t  D. [  Pradeep Gyawali  ]\n");
         	printf("\n\tChoose Your Answer:");
        	scanf("%d",&choice);
        	if(choice==1)
        	{
        		printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
        		printf("\n******************************\n");
	            printf("\nLet's Move To Another Question!!\n");
	            printf("\n******************************\n");
	            prize++;
			    break;	
        	}
        	else
        	{
        		printf("\n********************************************************************************************\n");
        		printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
        		printf("\n\n********************************************************************************************\n");
        		Beep(1000,900);
				prizes();
			    break;
        	}
        case 3:
			//Third Question
	        printf("\nQ.3 Which of the following is the oldest game ?\n\n");
	        printf("\t\tA. [ Ping Pong ]\t\t  B. [ Polo  ]\n");
	        printf("\t\tC. [  Soocer  ]\t\t       D. [  Cricket  ]\n");
	        printf("\n\tChoose Your Answer:");
	        scanf("%d",&choice);
	        if(choice==2)
	        {
	        	printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
	        	printf("\n******************************\n");
	            printf("\nLet's Move To Another Question!!\n");
	            printf("\n******************************\n");
	            prize++;
		    	break;	
	        }
	        else
			{
				printf("\n********************************************************************************************\n");
			    printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
			    printf("\n\n********************************************************************************************\n");
			    Beep(1000,900);
		    	prizes();
		    	break;	
	        }

		
		case 4:
			//Fourth Question
	        printf("\nQ.4 Paper was invented _____  ?\n\n");
	        printf("\t\tA. [ 102 B.C. ]\t\t  B. [  103 B.C.  ]\n");
	        printf("\t\tC. [  104 B.C.  ]\t  D. [  105 B.C.  ]\n");
	        printf("\n\tChoose Your Answer:");
	        scanf("%d",&choice);
	        if(choice==4)
	        {
	        	printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
	        	printf("\n******************************\n");
	            printf("\nLet's Move To Another Question!!\n");
	            printf("\n******************************\n");
	            prize++;
		     	break;	
	        }
	        else 
			{
				printf("\n********************************************************************************************\n");
				printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
				printf("\n\n********************************************************************************************\n");
				Beep(1000,900);
			    prizes();
		     	break;		
	        }
	    case 5:
	    	//Fifth Question
	        printf("\nQ.5 LUI 17 was the king to rule for the most short period of time, so how long did he ruled ?\n\n");
        	printf("\t\tA. [ 3 Minutes ]\t\t  B. [  4 Minutes  ]\n");
        	printf("\t\tC. [ 5 Minutes ]\t\t  D. [  6 Minutes  ]\n");
        	printf("\n\tChoose Your Answer:");
        	scanf("%d",&choice);
        	if(choice==1)
        	{
        		printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
        		printf("\n******************************\n");
	            printf("\nLet's Move To Another Question!!\n");
	            printf("\n******************************\n");
	            prize++;
			    break;
        	}
        	else
        	{
        		printf("\n********************************************************************************************\n");
        		printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
        		printf("\n\n********************************************************************************************\n");
        		Beep(1000,900);
			    prizes();
		     	break;	
        	}
        	
		case 6:
			//Sixth Question
	        printf("\nQ.6 Who became the Prime Minister  after the 2046 B.S. \"JANA AANDOLAN\" ?\n\n");
        	printf("\t\tA. [ Ganeshman Shing ]\t\t  B. [  Krishna Prassad Koirala  ]\n");
	        printf("\t\tC. [  Krishna Prassad Bhatarai ]   D. [  Marichman Shing  ]\n");
        	printf("\n\tChoose Your Answer:");
        	scanf("%d",&choice);
        	if(choice==3)
        	{
        		printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
        		printf("\n******************************\n");
	            printf("\nLet's Move To Another Question!!\n");
	            printf("\n******************************\n");
	            prize++;
	            break;
        	}
        	else
        	{
        		printf("\n********************************************************************************************\n");
        	    printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
        	    printf("\n\n********************************************************************************************\n");
        	    Beep(1000,900);
	        	prizes();
			    break;	        		
        	}
        case 7:
		    //Seventh Question
	        printf("\nQ.7 National Game of Nepal is________ ?\n\n");
           	printf("\t\tA. [ Dandi Biyo ]\t\t  B. [  Kabaddi  ]\n");
	        printf("\t\tC. [ Volley Ball ]\t\t  D. [  Cricket  ]\n");
	        printf("\n\tChoose Your Answer:");
	        scanf("%d",&choice);
	        if(choice==3)
	        {
	        	printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
	        	printf("\n******************************\n");
	            printf("\nLet's Move To Another Question!!\n");
	            printf("\n******************************\n");
	            prize++;
		     	break;	
	        }
	        else
	        {
	        	printf("\n********************************************************************************************\n");
	        	printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
	        	printf("\n\n********************************************************************************************\n");
	        	Beep(1000,900);
		    	prizes();
			    break;	
	        }

		case 8:
			//Eighth Question
          	printf("\nQ.8 \"MAHABHARAT\" was written by_______ ?\n\n");
         	printf("\t\tA. [ Adhi Shankara ]\t\t  B. [  Vyasa  ]\n");
          	printf("\t\tC. [  Valmiki  ]\t\t   D. [ Tulsidas  ]\n");
	        printf("\n\tChoose Your Answer:");
         	scanf("%d",&choice);
         	if(choice==2)
         	{
         		printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
         		printf("\n******************************\n");
	            printf("\nLet's Move To Another Question!!\n");
	            printf("\n******************************\n");
	            prize++;
		     	break;         		
         	}
         	else
         	{
         		printf("\n********************************************************************************************\n");
         		printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
         		printf("\n\n********************************************************************************************\n");
         		Beep(1000,900);
		    	prizes();
			    break;       		
         	}

		case 9:
			//Ninth Question
          	printf("\nQ.9 FTP is the short form of_________ ?\n\n");
        	printf("\t\tA. [ File Transmission Protocol ]\t\t  B. [ File Text Protocol   ]\n");
	        printf("\t\tC. [  File Terminate Protocol  ]\t\t  D. [  File Transfer Protocol  ]\n");
         	printf("\n\tChoose Your Answer:");
         	scanf("%d",&choice);
         	if(choice==4)
         	{
         		printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
         		printf("\n******************************\n");
	            printf("\nLet's Move To Another Question!!\n");
	            printf("\n******************************\n");
	            prize++;
		    	break;
         	}
         	else
         	{
         		printf("\n********************************************************************************************\n");
         		printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
         		printf("\n\n********************************************************************************************\n");
         		Beep(1000,900);
				prizes();
		    	break;		
         	}
			 			
		case 10:
		    //Tenth Question
	        printf("\nQ.10 World's first Satellite Television Program is__________ ?\n\n");
          	printf("\t\tA. [ My Life as a Zuchuchi ]\t\t  B. [ The planet Earth ]\n");
          	printf("\t\tC. [  Out of the World  ]\t\t D. [ In to the Universe  ]\n");
          	printf("\n\tChoose Your Answer:");
        	scanf("%d",&choice);
        	if(choice==3)
        	{
        		printf("\n\t\t!!CONGRATULATION!!\n\n Your Answer is Absolutely Correct.\n");
        		printf("\n**********************************************************\n");
	            printf("\n!! You Have Completed Ko Banchha AsianPatee Sucessfully!!\n");
	            printf("\n*********************************************************\n");
	            prize++;
	            prizes();
		     	break;	
        	}
        	else
        	{
        		printf("\n********************************************************************************************\n");
        		printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
        		printf("\n\n********************************************************************************************\n");
        		Beep(1000,900);
			    prizes();
			    break;   		
        	}
	
		default:
		    	printf("\n********************************************************************************************\n");
			    printf("\nSORRY! Your Answer is not Correct. Thank you for participating on \"KO BANCHHA ASIANPATEE\"\n");
			    printf("\n\n********************************************************************************************\n");
			    Beep(1000,900);
		    	prizes();
			    break;
			}
			//system("cls");
	    }
}
