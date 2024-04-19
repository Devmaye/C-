#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>
//Declaring the function
void direction()
{
	printf("\n\t\t-> DIRECTION : CHOOSE THE LETTER OF THE CORRECT ANSWER\n", direction);
	printf("\n\n\t\t-> NOTE : CAPITAL LETTERS ONLY\n\n", direction);
}
int main()
{
	int y;
	char name[100];
	int age;
	int firstd;
	char answer;
	int score=0;
	int wrong;
	int point=0;
	int correct;
	char repeat;
	char repeata;
	char repeatb;
	
	
	printf("\n\t\t________________________________________\n");

    printf("\n\t\t\t        WELCOME ");
    printf("\n\t\t\t          TO ");
    printf("\n\t\t\t       QUIZ GAME ");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________\n");
	
	printf("\n\n\t\t>> ENTER ANY KEY: ");
	scanf("%s", &y);
	
	printf("\n\t\t________________________________________\n");
	printf("\n\t\tPLEASE ENTER YOUR NAME TO PROCEED.\n");
	printf("\n\t\t________________________________________\n");
	
    printf("\n\t\t>> ENTER YOUR COMPLETENAME: ");
	scanf(" %[^\n]s", &name);
	
	printf("\n\t\t>> YOUR AGE: ");
	scanf("%d", &age);
	
	printf("\n\t\t______________________________________________________\n");
	printf("\n\t\t\tHELLO!! %s ANSWER THE QUIZ NOW \n", name);	
	printf("\n\t\t\t\t       GOOD LUCK!!!");
	printf("\n\t\t______________________________________________________\n");
	//Declaring the function
	direction();
	
		printf("\n   ->>       Enter 3 for [EASY LEVEL]\n");
		printf("\n   ->>       Enter 2 for [NORMAL LEVEL]\n");
		printf("\n   ->>       Enter 1 for [HARD LEVEL]\n");
		printf("\n\t     Your option: ");
		scanf("%d", &firstd); 
		system("cls");
		if (firstd==1)
		{
			do{
				int score=0;
			printf("\n\t\t________________________________________\n");
			printf("\n\t\tTHIS IS A HARD LEVEL QUIZ GOOD LUCK!!!");
			printf("\n\t\t________________________________________\n");
			//Declaring the function
			direction();
			
			printf("\nQ1.What is the longest English word? ? \n");
			printf("\nA.Supercalifragilisticexpialidocious");
			printf("\nB.Pseudopseudohypoparathyroidism");
			printf("\nC.Hippopotomonstrosesquippedaliophobia");
			printf("\nD.Antidisestablishmentarianism\n");
			printf("\nYOUR ANSWER: ");
			scanf("%s", &answer);
		    if(answer == 'B')
	        {
		    system("cls");
		    score++;
		    printf("\nCORRECT!!!\n");
	        }
     	    else
	        {
		    system("cls");
		    printf("\nINCORRECT!!! The answer is Letter B\n");
	        }
		
			printf("\nNEXT QUESTION:\n");
			printf("\nQ2) In English language there are only _ words that ends with DOUS.\n ");
			printf("\nA. 4");
			printf("\nB. 6");
			printf("\nC. 7");
			printf("\nD. 8\n");
			printf("\nYOUR ANSWER: ");
			scanf("%s", &answer);
			if(answer == 'A')
			{
				system("cls");
				score++;
				printf("\nCORRECT!!!\n");
			}
			else
			{
				system("cls");
				printf("\nINCORRECT!!! The answer is Letter A\n");
			}
			printf("\nNEXT QUESTION:\n");
			printf("\nQ3. Known as the father of the English Language.\n");
			printf("\nA. Thomas Babington");
			printf("\nB. Geoffrey Chaucer");
			printf("\nC. William Shakespeare");
			printf("\nD. Charles Babbage\n");
			printf("\nYOUR ANSWER: ");
			scanf("%s", &answer);
			if(answer=='B')
			{
				system("cls");
				score++;
				printf("\nCORRECT!!!\n");
			}
			else
			{
				system("cls");
				printf("\nINCORRECT!!! The answer is Letter B\n");
			}
			printf("\nNEXT QUESTION:\n");
			printf("\nQ4. What is the oldest English book?\n");
			printf("\nA. Livre de chasse ");
			printf("\nB. The Recuyell of the histories of troye");
			printf("\nC. The epic of Gilgamesh");
			printf("\nD. A midsummer night's dream\n"); 
			printf("\nYOUR ANSWER:  ");
			scanf("%s", &answer);
			if(answer=='B')
			{
				system("cls");
				score++;
				printf("\nCORRECT!!!\n");
			}
			else
			{
			    system("cls");
				printf("\nINCORRECT!!! The answer is Letter B\n");
			}  
			printf("\nNEXT QUESTION:\n");
			printf("\nQ5) What is the longest word that has no vowels?\n ");
			printf("\nA. Spryly");
			printf("\nB. Crwth");
			printf("\nC. Tsktsk");
			printf("\nD. Rhythm\n");
			printf("\nYOUR ANSWER: ");
			scanf("%s", &answer);
			if(answer == 'D')
			{
				system("cls");
				score++;
				printf("\nCORRECT!!! \n");
			}
			else
			{
				system("cls");
				printf("\nINCORRECT!!! The answer is Letter D Rhythm\n");
			}     
		        printf("\nYOUR SCORE IS: %d/5", score); 
		        if(score<3)
		    {
		    	printf("\n\t\t________________________________________\n");
		    	printf("\n\t\t\t BETTER LUCK NEXT TIME!!!");
		    	printf("\n\t\t________________________________________\n");
			}
			else
			{
				printf("\n\t\t________________________________________\n");
				printf("\n\t\t\t CONGRATULATIONS YOU PASSED!!!");
				printf("\n\t\t________________________________________\n");
			}
			    printf("\n\t->> THANK YOU !!! %s FOR PLAYING THE GAME", name);
			    printf("\n\n\n\t->> PRESS [1] TO RETAKE THE QUIZ: ");
		        scanf(" %s",&repeat);
		    
			}while(repeat == '1');
		        
		        
		        
		}
		else if(firstd==2)
		{
			do{
				int point=0;
			printf("\n\t\t________________________________________\n");
			printf("\n\t\tTHIS IS A NORMAL LEVEL QUIZ GOOD LUCK!!!");
			printf("\n\t\t________________________________________\n");	
			//Declaring the function
			direction();
			
			printf("\nQ1.Which planet is the hottest?\n");
			printf("\nA. Venus");
			printf("\nB. Saturn");
			printf("\nC. Mercury");
			printf("\nD. Mars\n");
			printf("\nYOUR ANSWER: ");
			scanf("%s", &answer);
			if(answer == 'A')
			{
				system("cls");
				point++;
				printf("\nCORRECT!!!\n");
			}
			else
			{
				system("cls");
				printf("\nINCORRERCT!!! The answer is Letter A\n");
			}
			printf("\nNEXT QUESTION:\n");
			printf("\nQ2)  What does the “D” in “D-Day” stand for? .\n ");
			printf("\nA. Dooms ");
			printf("\nB. Dark ");
			printf("\nC. Mercury");
			printf("\nD. Dunkirk\n");
			printf("\nYOUR ANSWER: ");
			scanf("%s", &answer);
			if(answer == 'C')
			{
				system("cls");
				point++;
				printf("\nCORRECT!!!\n");
			}
			else
			{
				system("cls");
				printf("\nINCORRECT!!! The answer is Letter C\n");
			}
			printf("\nNEXT QUESTION:\n");
			printf("\nQ3. In which city can you find the Liberty Bell?\n");
			printf("\nA. Washington, D.C.");
			printf("\nB. Boston");
			printf("\nC. Philadelphia");
			printf("\nD. Manhattan \n");
			printf("\nYOUR ANSWER:  ");
			scanf("%s", &answer);
			if(answer=='C')
			{
				system("cls");
				point++;
				printf("\nCORRECT!!!\n");
			}
			else
			{
				system("cls");
				printf("\nINCORRECT!!! The answer is Letter C\n");
			}
			printf("\nNEXT QUESTION:\n");
			printf("\nQ4. What is the rarest blood type?\n");
			printf("\nA. O");
			printf("\nB. A");
			printf("\nC. B");
			printf("\nD. AB-Negative\n");
			printf("\nYOUR ANSWER:  ");
			scanf("%s", &answer);
			if(answer=='D')
			{
				system("cls");
				point++;
				printf("\nCORRECT!!!\n");
			}
			else
			{
				system("cls");
				printf("\nINCORRECT!!! The answer is Letter D\n");
			}  
			printf("\nNEXT QUESTION:\n");
			printf("\nQ5)How many bones are there in the human body??\n ");
			printf("\nA. 206");
			printf("\nB. 201");
			printf("\nC. 205");
			printf("\nD. 209\n");
			printf("\nYOUR ANSWER: ");
			scanf("%s", &answer);
			if(answer == 'A')
			{
				point++;
				printf("\nCORRECT!!! \n");
				
			}
			else
			{
				
				printf("\nINCORRECT!!! The answer is Letter A\n");
				
			}     
		    printf("\n\nYOUR SCORE: %d/5", point);
		    if(point<3)
		    {
		    	printf("\n\t\t________________________________________\n");
		        printf("\n\t\t\t BETTER LUCK NEXT TIME!!!");
		        printf("\n\t\t________________________________________\n");
			}
			else
			{
				printf("\n\t\t________________________________________\n");
			    printf("\n\t\t\t CONGRATULATIONS YOU PASSED!!!");
			    printf("\n\t\t________________________________________\n");
			}
			    printf("\n\t->> THANK YOU !!! %s FOR PLAYING THE GAME", name);
			    printf("\n\n\n\t->> PRESS [1] TO RETAKE THE QUIZ: ");
		        scanf(" %s",&repeatb);
			}   while(repeatb == '1');
	    	}
		    else
		    { 
	    	do
			{
			int score=0;	 
			printf("\n\t\t________________________________________\n");
			printf("\n\t\tTHIS IS A EASY LEVEL QUIZ GOOD LUCK!!!");
			printf("\n\t\t________________________________________\n");
			//Declaring the function
			direction();
			
			printf("\nQ1. What Language is the spoken worldwide?\n");
			printf("\nA. Chinese");
			printf("\nB. Spanish");
			printf("\nC. Arabic");
			printf("\nD. English\n");
			printf("\nYOUR ANSWER: ");
			scanf("%s", &answer);
			if(answer == 'D')
			{
				system("cls");
				score++;				
				printf("\nCORRECT!!!\n");
			}
			else
			{
				system("cls");
				wrong++;
				printf("\nINCORRECT!!! The answer is Letter D\n");
			}
			printf("\nNEXT QUESTION:\n");
			printf("\nQ2)  What is shakespeare's shortest tragedy'? .\n ");
			printf("\nA. Macbeth ");
			printf("\nB. Hamlet ");
			printf("\nC. Romeo and Juliet");
			printf("\nD. Othello\n");
			printf("\nYOUR ANSWER: ");
			scanf("%s", &answer);
			if(answer == 'A')
			{
				system("cls");
				score++;		
				printf("\nCORRECT!!! \n");
			}
			else
			{
				system("cls");
				wrong++;
				printf("\nINCORRECT!!! The answer is Letter A\n");
			}
			printf("\nNEXT QUESTION:\n");
			printf("\nQ3. Which Ocean is the largest?\n");
			printf("\nA. Indian");
			printf("\nB. Pacific");
			printf("\nC. Atlantic");
			printf("\nD. Arctic \n");
			printf("\nYOUR ANSWER:  ");
			scanf("%s", &answer);
			if(answer=='B')
			{
			    system("cls");
				score++;
				printf("\nCORRECT!!!\n");
			}
			else
			{
				system("cls");
				wrong++;
				printf("\nINCORRECT!!! The answer is Letter B\n");
			}
			printf("\nNEXT QUESTION:\n");
			printf("\nQ4. Who painted the mona Lisa?\n");
			printf("\nA. Van Gogh");
			printf("\nB. Da Vinci");
			printf("\nC. Picasso");
			printf("\nD. Monet\n");
			printf("\nYOUR ANSWER:  ");
			scanf("%s", &answer);
			if(answer=='B')
			{
				system("cls");
				score++;
				printf("\nCORRECT!!!\n");
			}
			else
			{
				system("cls");
				wrong++;
				printf("\nINCORRECT!!! The answer is Letter B\n");
			}  
			printf("\nNEXT QUESTION:\n");
			printf("\nQ5) What is the longest river in the world?\n ");
			printf("\nA. Amazon");
			printf("\nB. Congo");
			printf("\nC. Nile");
			printf("\nD. Hudsan\n");
			printf("\nYOUR ANSWER: ");
			scanf("%s", &answer);
			if(answer == 'C')
			{
				system("cls");
				score++;
				printf("\nCORRECT!!!\n");
			}
			else
			{
				system("cls");
				wrong++;
				printf("\nINCORRECT!!! The answer is Letter C\n");
			}     
			    printf("\nYOUR SCORE IS: %d/5", score);
			    if(score<3)
		    {
		    	printf("\n\t\t________________________________________\n");
		        printf("\n\t\t\t BETTER LUCK NEXT TIME!!!");
		        printf("\n\t\t________________________________________\n");
			}
			else
			{
				printf("\n\t\t________________________________________\n");
			    printf("\n\t\t\t CONGRATULATIONS YOU PASSED!!!");
			    printf("\n\t\t________________________________________\n");
			}
			    printf("\n\t->> THANK YOU !!! %s FOR PLAYING THE GAME", name);
			    printf("\n\n\n\t->> PRESS [1] TO RETAKE THE QUIZ: ");
		        scanf(" %s",&repeata);
	     	}	while(repeata == '1' );			
            }
          	return 0;
          	}
