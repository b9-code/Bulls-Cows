
/* 

------------------------------------------------------------
source code for the BULLS and COWS game.The digital version
-------------------------------------------------------h------
Written by : Gautam @ rgautam98

Contact E-Mail:  raghavendragautam@live.com

Environment: Linux [UBUNTU 14.04 ]

*/


/*
 
 * still need to put the instructions page 
*/


#include<stdio.h>

char a[4],b[4],c[5],d[5],e[6],f[6],x[3],y[3],xy;// these are the strings, xy is used as the decoy variable
int j,i,bull,cow;
int ch,g;

main()
{

system("clear");

printf("please enter your choice of level:  \n");

//printf("\n\n [ 1 ] For instructions");

printf("\n\n [ 2 ] For Easy Level (3 Letters)");

printf("\n\n [ 3 ] For intermediate Level(4 Letters) \n\n [ 4 ] For Hard Level (5 Letters ) \n\n [ 5 ] For Expert Level (6 Letters)\n\n\t");

scanf("%d",&ch);
switch(ch)
{

/*

case 1:
 {
// instructions page has to be called 
 instructions();
 }

*/


case 2:
 {
   // this is the easy level, and the easy function has to be called
   easy();
   break;
 }

case 3:
{
// this is the intermediate level, the intermediate function has to be called
intermediate();
break;
}
case 4:
{
/* this is the hard level, hard functions has to be called */ 
hard();

break;
}

case 5:
{

expert();
break;
 
}

}
}

/* define the functions here */

/* INTERMEDIATE LEVEL FUNCTIONS */ 

intermediate()
{
       scanf("%c",&xy);
       system("clear");
       printf("Welcome To \"INTERMEDIATE\" Level\n\n");
        printf("please enter the 4 letter word\n Make sure that you dont have the players near you\n\n\t");

         gets(a);

          system("clear");

          printf("Welcome Player\n");

           while(1)

           {

             printf("please enter your guess word \n\t");

            gets(b);

         bull=0;

         cow=0;

         /* this is the bull loop start*/

              for(i=0;i<4;i++)

                                 {

                                            if(a[i]==b[i])

                                                        bull++;

                                              }

                       /*this is the bull loop end*/



                       /* cow loop start */



                       for(i=0;i<4;i++)

                       {

                                for(j=0;j<4;j++)

                                           {

                                                        if(a[i]==b[j])

                                                                        {

                                                                                         cow++;

                                                                                                }

                                                           }

                       }

                       /* cow loop end*/



                        if(bull==4)

                                  {  

                                            printf("CONGRATULATIONS!!!!\n\n You have guessed the right word.\n\n\tIt is :  \" ");

                                              printf("%s \"",b);

                                                printf("\nThank You for playing. Hope you have enjoyed the game\n\n");

                                                  exit(0);

                                                    }

                         else

                                  {

                                            printf("Sorry. That was not a right guess.\n");

                                              printf("But You have \n\n %d COWS and %d BULLS\n",cow-bull,bull);

                                               }  



       printf("\n\n");
}
}

/* HARD LEVEL FUNCTION */ 

hard() 
{

scanf("%c",&xy);
system("clear");
printf("Welcome To \"HARD\" Level\n\n");
 printf("please enter the 5 letter word\n Make sure that you dont have the players near you\n\n\t");
 gets(c);
 system("clear");
printf("Welcome Player\n");
 while(1)
{//4
 printf("please enter your guess word \n");
 gets(d);
 bull=0;
cow=0;
/* tis is the bull loop start*/
 for(i=0;i<5;i++)
  {
   if(c[i]==d[i])
	bull++;
  }
/*this is the bull loop end*/

/* cow loop start */

for(i=0;i<5;i++)
{
 for(j=0;j<5;j++)
   {
	if(c[i]==d[j])
	{
	 cow++;
	}
   }
	
}
/* cow loop end*/

 if(bull==5)
  {  
  printf("CONGRATULATIONS!!!!\n\n You have guessed the right word.\n\n\tIt is :  \" ");
  printf("%s \"",d);
  printf("\nThank You for playing. Hope you have enjoyed the game\n\n");
  exit(0);
  }
 else
 {
  printf("Sorry. That was not a right guess.\n");
  printf("But You have \n\n %d COWS and %d BULLS\n",cow-bull,bull);
 }  
}//

printf("\n\n");

}

/* EXPERT LEVEL FUNCTION */

expert() 

{

system("clear");
scanf("%c",&xy);
printf("Welcome To \"EXPERT\" Level\n\n");
 printf("please enter the 6 letter word\n Make sure that you dont have the players near you\n\n\t");
 gets(e);
 system("clear");
printf("Welcome Player\n");
 while(1)
{
 printf("please enter your guess word \n\t");
 gets(f);
 bull=0;
cow=0;
/* tis is the bull loop start*/
 for(i=0;i<6;i++)
  {
   if(e[i]==f[i])
	bull++;
  }
/*this is the bull loop end*/

/* cow loop start */

for(i=0;i<6;i++)
{
 for(j=0;j<6;j++)
   {
	if(e[i]==f[j])
	{
	 cow++;
	}
   }
}
/* cow loop end*/

 if(bull==6)
  {  
  printf("CONGRATULATIONS!!!!\n\n You have guessed the right word.\n\n\tIt is :  \" %s \"",f);
  printf("\n\n Thank you.Hope you have enjoyed playing the game.\n\n");
  exit(0);
  }
 else
 {
    printf("But You have \n\n %d COWS and %d BULLS\n",cow-bull,bull);
 }  

printf("\n\n");

}
}

/* EASY LEVEL FUNCTION */ 

easy()
{

  scanf("%c",&xy);
   system("clear");
   printf("Welcome To \"EASY\" Level\n\n");
  printf("please enter the 3 letter word. Make sure that the players are not near\n\n\t");
  gets(x);

  system("clear");
  printf("Welcome\n");
 while(1)
 {
         bull=0; 
         cow=0;
  printf("Please enter your guess word:  ");
  gets(y);

  // this is the bull loop
  for(i=0;i<3;i++)
  {
     if((x[i]==y[i]))
     {
        bull++;
        printf("\nYou have a Bull at position %d ( With respect to your word ) and it %c \n",i+1,x[i]);
     }
  } // bull loop ends

  for(i=0;i<3;i++) // this is the cow loop
  {
        for(j=0;j<3;j++)
        {
          if(x[i]==y[j])
            {
                if(x[i]==y[i])
                {
                        continue;
                }
                else
                {
                  cow++;
                  printf("\nYou have a cow at position %d ( With respect to your word ) and it is %c\n",j+1,y[j]);
                }
            }  
        }
  } // this is the cow loop end:

a:
  if(bull==3)
   {
        printf("\n\nCONGRATULATIONS!!!!. You have finished the game.\n\n Thank You for playing");
      //  printf("\n\n the given word is \" ");
  //      puts(x);
    //    printf(" \"");
        printf("\n\n");
        return 0;
   }

  else
  {
     printf("\n\n COWS = %d, BULLS = %d\n\n",cow,bull);
  }
}
}
