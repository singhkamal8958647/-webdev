#include<stdio.h>
#include<conio.h>
#include<dos.h>

		       void wrong(void);
		    void help(void);
		void start(int arr[]);
	 void border(void);
     void out(void);

int score=0;

    void main()
  {
      int i,arr[10]={0,0,0,0,0,0,0,0,0,0};
      char ch,name[50];
	  clrscr();

//  gotoxy(25,10);
    textbackground(WHITE);
      textcolor(BLACK);

   gotoxy(25,4);
// textattr(5);
	    printf("*****  WELCOME TO FUNNY QUIZ *****");
     gotoxy(25,8);
	   cprintf("S >> START GAME");
//  delay(1000);
     gotoxy(25,12);
	   cprintf("T >> HIGH SCORE \n");
//  delay(1000);
     gotoxy(25,16);
	    cprintf("H >> HELP \n");


    ch=getch();

    if(ch=='s')
	      start(arr);
    else if(ch=='h')
	      help();
    else if(ch=='q')
	      exit(1);
    else
       printf(" enter a valid choice");


   lable_1:
      border();
	ch=getch();
 // scanf("%c",&ch);
  switch(ch)
  {
  case 's':
//	  system("cls");
	  start(arr);
  break;

  case 'h':
	  help();
  break;

  case 'm':
	  main();
  break;

  case 'q':
	out();
  }
  clrscr();
  goto lable_1;

}


       void start(int arr[])
   {
      int x,i,a;
//  char ch;

     lable_1:
	border();
     gotoxy(16,12);
     printf(" Agla Sawal Apke Computer Screen, Pr Ye Raha");
     delay(1200);
     clrscr();
     x=rand()%20;
    if(x==1 && arr[0]==0)
   {
  border();
   gotoxy(13,6);
     cprintf("Q - Which is the following opption not related to C");
       gotoxy(6,9);
	 cprintf("A - Middle or Low level language");
	   gotoxy(6,12);
	     cprintf("B - Object Orinted Language");
	       gotoxy(6,15);
		 cprintf("C - Use for System Programming");
		   gotoxy(6,18);
		     cprintf("D - Gernol Purpose Programming Language");


      a=getch();

     if(a=='b')
     {
	      score+=1;
	      arr[0]=1;
     clrscr();
     gotoxy(16,12);
     printf(" **  Sahi Jawab Kya Bat Hai Londe Cha Gya **");
     delay(1200);
     clrscr();
     }
    else if(a=='q')
	      out();
    else
	wrong();

   }
      else if(x==2 && arr[1]==0)
   {
   border();
     gotoxy(13,6);
       cprintf("Q - why singham return in singham return movie");
	 gotoxy(6,9);
	   cprintf("A - singham was crazy");
	     gotoxy(6,12);
	       cprintf("B - singham forget his mobile charger");
		 gotoxy(6,15);
		   cprintf("C - singham is fear to jaikant shikare");
		      gotoxy(6,18);
			cprintf("D - singham gf say to her - i am alone in home -");

    a=getch();

       if(a=='d')
       {
		score+=1;
		arr[1]=1;
     clrscr();
     gotoxy(16,12);
     printf(" **  Sahi Jawab Kya Bat Hai Londe Cha Gya **");
     delay(1200);
     clrscr();
       }
       else if(a=='q')
		out();
       else
	wrong();
   }
      else if(x==3 && arr[2]==0)
   {
    border();
      gotoxy(13,6);
	cprintf("Q - Is Sentance Ko Pura Kare 'Padai Se Dar Nahi Lagta Sahab \n ___ SE Lagta Hai");
	  gotoxy(6,9);
	    cprintf("A - Teacher");
	      gotoxy(6,12);
		cprintf("B - Punishment");
		  gotoxy(6,15);
		    cprintf("C - Result");
		       gotoxy(6,18);
			 cprintf("D - Depend On Student To Student");

      a=getch();

      if(a=='c' || a=='d' || a=='a' || a=='b')
      {
		score+=1;
		arr[2]=1;
     clrscr();
     gotoxy(16,12);
     printf(" **  Sahi Jawab Kya Bat Hai Londe Cha Gya **");
     delay(1200);
     clrscr();
      }
      else if(a=='q')
		out();
      else
	wrong();

  }
      else if(x==4 && arr[3]==0)
   {
    border();
      gotoxy(3,6);
	cprintf("Q - 'Ghar Se Nikalte He Kuch Dur Chalte He' Is Song Me Kuch Dur Chalte            He kya Ata Hai");
	  gotoxy(6,11);
	    cprintf("A - G.F. Ka Ghar");
	      gotoxy(6,14);
		cprintf("B - Tution ");
		   gotoxy(6,17);
		     cprintf("C - Market");
			gotoxy(6,21);
			  cprintf("D - Ganta Ghar");

    a=getch();
       if(a=='a')
       {
	   score+=1;
	   arr[3]=1;
     clrscr();
     gotoxy(16,12);
     printf(" **  Sahi Jawab Kya Bat Hai Londe Cha Gya **");
     delay(1200);
     clrscr();
       }
      else if(a=='q')
	   out();
      else
      {
	wrong();
      }
   }
      else if(x==5 && arr[4]==0)
   {
   border();
	 gotoxy(13,6);
		cprintf("Q - NO. 1 City in The World");
	 gotoxy(6,9);
		cprintf("A - Meerut");
	 gotoxy(6,12);
		cprintf("B - Mumbai");
	 gotoxy(6,15);
		cprintf("C - Kannauj");
	 gotoxy(6,18);
		cprintf("D - 'Apna' Saharanpur");

      a=getch();

      if(a=='d')
      {
	       score+=1;
	       arr[4]=1;
     clrscr();
     gotoxy(16,12);
     printf(" **  Sahi Jawab Kya Bat Hai Londe Cha Gya **");
     delay(1200);
     clrscr();
      }
      else if(a=='q')
	       out();
      else
	  wrong();
 }

      else if(x==6 && arr[5]==0)
   {
   border();
	 gotoxy(13,6);
		cprintf("Q - Salman Khan Movie ' ____ Zinda Hai' me Zinda Kya Hai");
	 gotoxy(6,9);
		cprintf("A - Kala Hiran");
	 gotoxy(6,12);
		cprintf("B - Bahubali ");
	 gotoxy(6,15);
		cprintf("C - Cheetah ( Tiger )");
	 gotoxy(6,18);
		cprintf("D - Foothpath Wale ( Hit & Run Case  )");

      a=getch();

      if(a=='c')
      {
	       score+=1;
	       arr[5]=1;
     clrscr();
     gotoxy(16,12);
     printf(" **  Sahi Jawab Kya Bat Hai Londe Cha Gya **");
     delay(1200);
     clrscr();
      }
      else if(a=='q')
	       out();
      else
	  wrong();
 }

      else if(x==7 && arr[6]==0)
   {
   border();
	 gotoxy(13,6);
		cprintf("Q - Is Muhabare Ko Pura Kare ' Bandar Kya Jaana ___ Ka Swad'");
	 gotoxy(6,9);
		cprintf("A - K.F.C.");
	 gotoxy(6,12);
		cprintf("B - Adrak ");
	 gotoxy(6,15);
		cprintf("C - Bandariya ");
	 gotoxy(6,18);
		cprintf("D - Pizza Hut ");

      a=getch();

      if(a=='b')
      {
	       score+=1;
	       arr[6]=1;
     clrscr();
     gotoxy(16,12);
     printf(" **  Sahi Jawab Kya Bat Hai Londe Cha Gya **");
     delay(1200);
     clrscr();
      }
      else if(a=='q')
	       out();
      else
	  wrong();
 }
      else if(x==8 && arr[7]==0)
   {
   border();
	 gotoxy(8,6);
		cprintf("Q - Newtan Ke Sar Pe Jb Apple Gira' Us Samay Apple Ktne Rs Kilo Tha.");
	 gotoxy(6,9);
		cprintf("A - Pta Ne Yar");
	 gotoxy(6,12);
		cprintf("B - 100 rs");
	 gotoxy(6,15);
		cprintf("C - 400 rs");
	 gotoxy(6,18);
		cprintf("D - 800 rs");

      a=getch();

      if(a=='a')
      {
	       score+=1;
	       arr[7]=1;
     clrscr();
     gotoxy(16,12);
     printf(" **  Sahi Jawab Kya Bat Hai Londe Cha Gya **");
     delay(1200);
     clrscr();
      }
      else if(a=='q')
	       out();
      else
	  wrong();
 }

      else if(x==9 && arr[8]==0)
   {
   border();
	 gotoxy(13,6);
		cprintf("Q - If Cow Become 'MAA'  Cat Become 'MAUSI'  SO Dog Become 'WHAT' ?");
	 gotoxy(6,9);
		cprintf("A - Best Friend ");
	 gotoxy(6,12);
		cprintf("B - All Friends");
	 gotoxy(6,15);
		cprintf("C - Brother of G.F.");
	 gotoxy(6,18);
		cprintf("D - All Of These");

      a=getch();

      if(a=='c' || a=='d' || a=='a' || a=='b')
      {
	       score+=1;
	       arr[8]=1;
     clrscr();
     gotoxy(16,12);
     printf(" **  Sahi Jawab Kya Bat Hai Londe Cha Gya **");
     delay(1200);
     clrscr();
      }
      else if(a=='q')
	       out();
      else
	  wrong();
 }


     else
   {
    start(arr);
   }
}


     void help()
  {
      FILE *fp;
	char a[1000];
	   clrscr();

      fp=fopen("help.txt","r");

      while(fgets(a,100,fp)!=NULL)
   {
	 printf(" %s",a);
   }

	getch();
	main();
     fclose(fp);
 }



void high_score()
{
    FILE *fp;
      char a[1000];
	 int i;

     fp=fopen("anmol.txt","r");
       clrscr();

	 while(fgets(a,100,fp)!=NULL)
    {
	    printf("\n %s",a);
    }

       getch();
	      clrscr();
       gotoxy(20,10);
	      printf("Gud by the system is getting down\n");
       delay(2000);

       for(i=0;i<31;i++)
       {
	 gotoxy(21+i,11);
	   printf("*");
	    delay(200);
       }
	      exit(0);
       fclose(fp);
}

void out()
{
   char name[50];
     FILE *f;
     int i;

   f=fopen("anmol.txt","a+");
      gotoxy(25,10);
	 fprintf(f,"NAME: ");
	    printf("ENTER YOUR NAME: ");
	       gets(name);
		  fputs(name,f);
		     fprintf(f,"\nscore: %d.\n",score);


       clrscr();
	      gotoxy(20,10);
		     printf("Gud by the system is getting down\n");
	      delay(1500);

	      for(i=0;i<31;i++)
	 {
		    gotoxy(21+i,11);
		printf("*");
	     delay(200);
	 }

    exit(1);
}


    void wrong()
 {
    char c;
      clrscr();

       gotoxy(33,8);
	      printf("Ops");
       delay(2000);
	      clrscr();
       gotoxy(33,8);
	      printf("WRONG ANSWER");
       gotoxy(25,13);
	      printf("M - Home ");
       gotoxy(47,13);
	      printf("Q - Exit");

    c=getch();

       switch(c)
   {
       case 'm':
	    main();
       break;

       case 'q':
	    out();
       break;

      default:
   {
      clrscr();
	gotoxy(40,15);
	  printf("Enter a Valid Choice");
	    delay(1000);

     wrong();
   }
   }
}

   void border()
  {
    clrscr();
      gotoxy(50,25);
       cprintf("Press - Q - for exit \n ");
	 gotoxy(50,25);
	   cprintf("Press - m - for Main menu \n ");
	     gotoxy(50,25);
	       cprintf("score= %d",score);

  }




