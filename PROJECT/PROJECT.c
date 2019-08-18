#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome: //Mainhome it will be proceed when go to is used.
     system("cls");
     printf("\t\t\tC PROGRAM QUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t   BECOME A MILLIONAIRE!!!!!!!!!!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > Press R to reset score");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");

     choice=toupper(getch());
     if (choice=='V')
	{
        show_record();
        goto mainhome;
    }
     else if (choice=='H')
	{
        help();
        getch();
        goto mainhome;
	}
	else if (choice=='R')
	{
	    reset_score();
	    getch();
        goto mainhome;
    }
	else if (choice=='Q')
        exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
     gets(playername);

    system("cls");
    printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 20 questions. Each right answer will be awarded $100,000!");
    printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     r1=i;
     switch(r1)
		{
		case 1:
		printf("\n\nWhich of the following is a Armstrong Number?");
		printf("\n\nA.56\t\tB.189\n\nC.15\t\tD.153");
		if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
            }
		else
		       {
		           printf("\n\nWrong!!! The correct answer is D.153");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\nWhen was world war 2 started?");
		printf("\n\nA.September 5 1939\t\tB.October 15 1940\n\nC.September 11 1918\t\tD.September 1 1939 A.D.");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.September 1 1939 A.D.");
		       getch();
		       break;}

        case 3:
		printf("\n\n\nWhat is the baby of Kangaroo called?");
		printf("\n\nA.Foal\t\tB.Fry\n\nC.Joey\t\tD.Nit");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Joey");
		       getch();
		       break;}
		       }
		       }

	if(count>=2)
        {
	    goto test;
	    }
	else
        {
            system("cls");
            printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
            getch();
            goto mainhome;
        }
    test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{
		    goto game;
        }
    game:
     countr=0;
     for(i=1;i<=20;i++)
     {system("cls");
     r=i;
     switch(r)
		{
		case 1:
		printf("\n\n1> What is the National Game of Nepal?");
		printf("\n\nA.Football\t\tB.Basketball\n\nC.Kho kho\t\tD.Kabaddi");
		if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect!!!");
                countr++;
                getch();
                break;
                getch();
			 }
		else
		       {
		           printf("\n\nWrong!!! The correct answer is D.Kabaddi");
                   getch();
		           goto score;
		           break;
		       }
		case 2:
		printf("\n\n\n2> Study of Earthquake is called............,");
		printf("\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology");
		if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");
                countr++;
                getch();
                break;
			 }
		else
		       {
		           printf("\n\nWrong!!! The correct answer is A.Seismology");
                   getch();
		           goto score;
		           break;
		       }

        case 3:
		printf("\n\n\n3>Top Scorer in World Cup 2014? ");
		printf("\n\nA.Arjen Robben\t\t\tB.James Rodriguez\n\nC.Cristiano Ronaldo\t\tD.Lionel Messi");
		if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect!!!");
                countr++;
                getch();
                break;
			 }
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.James Rodriguez");
                   getch();
                   goto score;
		           break;
                }

        case 4:
		printf("\n\n\n4> The Laws of Electromagnetic Induction were given by?");
		printf("\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb");
		if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");
                countr++;
                getch();
                break;
            }
		else
            {
                printf("\n\nWrong!!! The correct answer is A.Faraday");
                getch();
                goto score;
                break;
            }

        case 5:
		printf("\n\n\n5> What is the unit of resistance?");
		printf("\n\nA.Coulomb\t\tB.Ohm\n\nC.Watt\t\t\tD.joule");
		if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect!!!");
                countr++;
                getch();
                break;
			}
		else
            {
                printf("\n\nWrong!!! The correct answer is B.Ohm");
                getch();
                goto score;
                break;
            }
		case 6:
		printf("\n\n\n6> Which element is found in Vitamin B12?");
		printf("\n\nA.Zinc\t\t\tB.Cobalt\n\nC.Calcium\t\tD.Iron");
		if (toupper(getch())=='B' )
			{
			    printf("\n\nCorrect!!!");
                countr++;
                getch();
                break;
            }
		else
            {
                printf("\n\nWrong!!! The correct answer is B.Cobalt");
                goto score;
                getch();
                break;
            }

        case 7:
		printf("\n\n\n7> When was SAARC established?");
		printf("\n\nA.December 16 1985\t\tB.October 9 1986\n\nC.November 8 1985 \t\tD.December 8 1985");
		if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect!!!");
                countr++;
                getch();
                break;
			 }
		else
            {
                printf("\n\nWrong!!! The correct answer is D.December 8 1985");
                getch();
                goto score;
                break;
            }
        case 8:
		printf("\n\n\n8> Establishment of Nepal Rastra Bank?");
		printf("\n\nA.2016B.S.\t\tB.2018B.S.\n\nC.2013 B.S.\t\tD.2014 B.S.");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");
                countr++;
                getch();
                break;
            }
		else
            {
                printf("\n\nWrong!!! The correct answer is C.2013");
                getch();
                goto score;
                break;
            }

        case 9:
		printf("\n\n\n9> What is the capital of Norway?");
		printf("\n\nA.Oslo\t\tB.Helsinki\n\nC.Ajax\t\tD.Galatasaray");
		if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");
                countr++;
                getch();
                break;
            }
		else
            {
                printf("\n\nWrong!!! The correct answer is A.Oslo");
                getch();
                goto score;
                break;}

        case 10:
		printf("\n\n\n10> Formation of European Union?");
		printf("\n\nA.1996\t\tB.1993\n\nC.1992\t\tD.1994");
		if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect!!!");
                countr++;
                getch();
                break;
            }
		else
            {
                printf("\n\nWrong!!! The correct answer is B.1993");
                getch();
                break;
                goto score;
            }

        case 11:
		printf("\n\n\n11>Which country offers a free telephone service?");
		printf("\n\nA.Kuwait\t\tB.Qatar\n\nC.Nepal\t\t\tD.USA");
		if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");
                countr++;
                getch();
                break;
            }
		else
            {
                printf("\n\nWrong!!! The correct answer is A.Kuwait");
                getch();
                break;
                goto score;
            }
        case 12:
		printf("\n\n\n12>First color movie made in Nepal was _________?");
		printf("\n\nA.Kumari\t\tB.Satya Harish Chandra\n\nC.Maiti ghar\t\t D.Aama");
		if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!");
                countr++;
                getch();
                break;
            }
		else
            {
                printf("\n\nWrong!!! The correct answer is A.Kumari");
                getch();
                break;
                goto score;
            }

		case 13:
		printf("\n\n\n13> No of districts of Nepal linking to India?");
		printf("\n\nA.23\t\tB.22\n\nC.25\t\tD.24");
		if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect!!!");
                countr++;
                getch();
                break;
            }
		else
            {
                printf("\n\nWrong!!! The correct answer is D.24");
                getch();
                break;
                goto score;
            }
        case 14:
		printf("\n\n\n14>Who is the author of 'Seto Dharti'?");
		printf("\n\nA.Narayan Wagle\t\tB.Saru Bhakta\n\nC.Amar Neupane\t\tD.Subin Bhattarai");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");
                countr++;
                getch();
                break;
            }
		else
            {
                printf("\n\nWrong!!! The correct answer is C.Amar Neupane");
                getch();
                break;
                goto score;
            }

		case 15:
		printf("\n\n\n15> Which Blood Group is known as the Universal Recipient?");
		printf("\n\nA.A\t\tB.AB\n\nC.B\t\tD.O");
		if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect!!!");
                countr++;
                getch();
                break;
            }
		else
            {
                printf("\n\nWrong!!! The correct answer is B.AB");
                getch();
                goto score;
                break;
            }

		case 16:
		printf("\n\n\n16>What is the unit of measurement of distance between Stars?");
		printf("\n\nA.Light Year\t\tB.Coulomb\n\nC.Nautical Mile\t\tD.Kilometer");
		if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");
                countr++;
                getch();
                break;
			}
		else
            {
                printf("\n\nWrong!!! The correct answer is A.Light Year");
                getch();
                goto score;
                break;
            }
		case 17:
		printf("\n\n\n17> Who is the last malla king of Kantipur?");
		printf("\n\nA.Jaya prakash Malla\t\tB.Yakshya Malla\n\nC.Ranjit Malla\t\tD.Tej Narsing Malla");
		if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");
                countr++;
                getch();
                break;
            }
		else
            {
                printf("\n\nWrong!!! The correct answer is A.Jaya prakash Malla");
                getch();
                goto score;
                break;
            }
		case 18:
		printf("\n\n\n18> Why Charles Babbage is called The Father of Computer?");
		printf("\n\nA.By finding Hexadecimal Number\t\tB.By finding Binary Number\n\nC. By finding RAM\t\tD.By finding Hard disk\n\n");
		if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect!!!");
			    countr++;
			    getch();
                break;
            }
		else
            {
                printf("\n\nWrong!!! The correct answer is B.By finding Binary Number");
                getch();
                goto score;
                break;
            }

		case 19:
		printf("\n\n\n19> Which city in the world is popularly known as The City of Temple?");
		printf("\n\nA.Delhi\tB.Bhaktapur\n\nC.Kathmandu\tD.Agra\n\n");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");
                countr++;
                getch();
                break;
            }
		else
            {
                printf("\n\nWrong!!! The correct answer is C.Kathmandu");
                getch();
                goto score;
                break;
            }
		case 20:
		printf("\n\n\n20> Which hardware was used in the First Generation Computer?");
		printf("\n\nA.Transistor\t\tB.Valves\n\nC.I.C\t\tD.S.S.I");
		if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect!!!");
                countr++;
                getch();
                break;
            }
		else
            {
                printf("\n\nWrong!!! The correct answer is B.Valves");
                getch();
                goto score;
                break;
            }
        }
    }
	score: //Lable score
    system("cls");
	score=countr*100000;
	if(score>0.00 && score<1000000)
        {
            printf("\n\n\t\t**************** CONGRATULATION *****************");
            printf("\n\t You won $%.2f",score);
            goto go;
        }
	else if(score==1000000.00)
        {
            printf("\n\n\n \t\t**************** CONGRATULATION ****************");
            printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
            printf("\n\t\t You won $%.2f",score);
            printf("\t\t Thank You!!");
        }
    else if(score>1000000.00&&score<=2000000.00)
        {
            printf("\n\n\n \t\t**************** CONGRATULATION ****************");
            printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
            printf("\n\t\t You won $%.2f",score);
            printf("\t\t Thank You!!");
        }
    else
        {
            printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
            printf("\n\t\t Thanks for your participation");
            printf("\n\t\t TRY AGAIN");
            goto go;
	    }
    go: //LABLe=go:
        puts("\n\n Press Y if you want to play next game");
        puts(" Press any key if you want to go main menu");
        if (toupper(getch())=='Y')
            goto home;
        else
        {
            edit_score(score,playername);
            goto mainhome;
        }
    }
}

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void reset_score()
    {
        system("cls");
        float sc;
        char nm[20];
        FILE *f;
        f=fopen("score.txt","w+");
        fscanf(f,"%s%f",&nm,&sc);
        sc=0;
        fprintf(f,"%s,%.2f",nm,sc);
        fclose(f);
    }

void help()
	{
	    system("cls");
        printf("\n\n                              HELP");
        printf("\n -------------------------------------------------------------------------");
        printf("\n ......................... C program Quiz Game...........");
        printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
        printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
        printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
        printf("\n    right answers otherwise you can't play the Game...........");
        printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
        printf("\n    total 10 questions each right answer will be awarded $100,000.");
        printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
        printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
        printf("\n    right option");
        printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
        printf("\n >> No negative marking for wrong answers");
        printf("\n\n\t*********************BEST OF LUCK*********************************");
        printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by CODE WITH C TEAM********");}

void edit_score(float score, char plnm[20])
	{
	    system("cls");
        float sc;
        char nm[20];
        FILE *f;
        f=fopen("score.txt","r");
        fscanf(f,"%s%f",&nm,&sc);
        if (score>=sc)
            {
                sc=score;
                fclose(f);
                f=fopen("score.txt","w");
                fprintf(f,"%s\n%.2f",plnm,sc);
                fclose(f);
            }
    }


