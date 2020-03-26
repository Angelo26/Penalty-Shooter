			       //made by Angel Maden
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<graphics.h>
#include<dos.h>

void front();
void singleplayer();
void multiplayer();
void help();
void about();
void gkc();
void gkl();
void gkr();
void pole();

void main()
{
	textbackground(0);
	front();
	getch();
}
void front()
{
	int x=36;
	int y=13;
	while(1)
	{
		main:
		delay(10);
		clrscr();
		gotoxy(27,2);
		cout<<"ANA Travel & Tourism PVT LTD";
		gotoxy(31,4);
		cout<<"*------------------*";
		gotoxy(36,5);
		cprintf("FOOTBALL");
		gotoxy(31,5);
		cprintf("SHOOT   and   SAVE");
		gotoxy(23,7);
		cout<<"|----------------------------------|";
		gotoxy(35,9);
		cout<<"Get Started";
		gotoxy(28,10);
		cout<<"__________________________";
		gotoxy(30,11);
		cout<<"______________________";
		gotoxy(x,y);
		cout<<"[      ]";
		gotoxy(38,13);
		cout<<"PLAY";
		gotoxy(38,15);
		cout<<"HELP";
		gotoxy(37,17);
		cout<<"ABOUT";
		gotoxy(38,19);
		cout<<"EXIT";
		gotoxy(30,22);
		cprintf("____________________");
		gotoxy(28,23);
		cprintf("________________________");
		_setcursortype(0);
		delay(10);
		char ch=getch();
		char d;
		int b;
		if(ch==72&&y>11)        	//move upward
		{
			b=-2;
			y=y+b;
			if(y<13)
				y=19;
		}
		if(ch==80&&y<21)               //move downward
		{
			b=2;
			y=y+b;
			if(y>19)
				y=13;
		}

		if(ch==13&&y==13)
		{
			gamet:
			clrscr();
			textcolor(LIGHTBLUE);
			gotoxy(36,3);
			cprintf("FOOTBALL");
			gotoxy(31,5);
			cprintf("SHOOT   and   SAVE");
			gotoxy(33,10);
			textcolor(LIGHTGRAY);
			cprintf("Singleplayer(s)");
			gotoxy(33,13);
			textcolor(LIGHTGRAY);
			cprintf("Multiplayer(m)");
			d=getch();
			if(d=='s')
				singleplayer();
			else if(d=='m')
				multiplayer();
			else if(d==27||d==8)
				front();
			else
				goto gamet;
		}
		if(ch==13&&y==15)
			help();
		if(ch==13&&y==17)
		{
			textcolor(BROWN);
			about();
			y=17;
			textcolor(LIGHTCYAN);
		}
		if(ch==13&&y==19)
			exit(0);

		if(ch==27)
			exit(0);
	}
}

	char ch,d;
	gamo:
	clrscr();
	textcolor(LIGHTBLUE);
	gotoxy(36,3);
	cprintf("FOOTBALL");
	gotoxy(31,5);
	cprintf("SHOOT   and   SAVE");
	gotoxy(36,10);
	textcolor(LIGHTGRAY);
	cprintf("play(p)");
	gotoxy(36,12);
	textcolor(LIGHTGRAY);
	cprintf("help(h)");
	gotoxy(36,14);
	textcolor(LIGHTGRAY);
	cprintf("about(a)");
	gotoxy(36,16);
	textcolor(LIGHTRED);
	cprintf("exit(esc)");
	_setcursortype(0);
	ch=getch();
	switch(ch)
	{
		case 'p':
		{
			gamet:
			clrscr();
			textcolor(LIGHTBLUE);
			gotoxy(36,3);
			cprintf("FOOTBALL");
			gotoxy(31,5);
			cprintf("SHOOT   and   SAVE");
			gotoxy(33,10);
			textcolor(LIGHTGRAY);
			cprintf("Singleplayer(s)");
			gotoxy(33,13);
			textcolor(LIGHTGRAY);
			cprintf("Multiplayer(m)");
			d=getch();
			if(d=='s')
				singleplayer();
			else if(d=='m')
				multiplayer();
			else if(d==27||d==8)
				front();
			else
				goto gamet;
		}
		break;
		case 'h':
			help();
		break;
		case 'a':
			about();
		break;
		case 27:
			exit(0);
		break;
		default:
			goto gamo;
	}
}
void help()
{
	clrscr();
	textbackground(0);
	textcolor(YELLOW);
	gotoxy(35,3);
	cprintf("HELP");
	gotoxy(15,5);
	textcolor(4);
	cprintf("Singleplayer");
	textcolor(LIGHTCYAN);
	gotoxy(15,8);
	cprintf("SHOOTER");
	gotoxy(15,10);
	cprintf("a=left");
	gotoxy(15,12);
	cprintf("s=straight");
	gotoxy(15,14);
	cprintf("d=right");
	textcolor(LIGHTGREEN);
	gotoxy(15,17);
	cprintf("GOALKEEPER");
	gotoxy(15,19);
	cprintf("4=left");
	gotoxy(15,21);
	cprintf("5=straight");
	gotoxy(15,23);
	cprintf("6=right");
	gotoxy(50,5);
	textcolor(1);
	cprintf("Multiplayer");
	textcolor(MAGENTA);
	gotoxy(45,6);
	cprintf("ROUND 1");
	textcolor(CYAN);
	gotoxy(45,8);
	cprintf("SHOOTER");
	gotoxy(45,10);
	cprintf("a=left");
	gotoxy(45,12);
	cprintf("s=straight");
	gotoxy(45,14);
	cprintf("d=right");
	textcolor(GREEN);
	gotoxy(45,17);
	cprintf("GOALKEEPER");
	gotoxy(45,19);
	cprintf("4=left");
	gotoxy(45,21);
	cprintf("5=straight");
	gotoxy(45,23);
	cprintf("6=right");
	textcolor(MAGENTA);
	gotoxy(60,6);
	cprintf("ROUND 2");
	textcolor(CYAN);
	gotoxy(60,8);
	cprintf("SHOOTER");
	gotoxy(60,10);
	cprintf("4=left");
	gotoxy(60,12);
	cprintf("5=straight");
	gotoxy(60,14);
	cprintf("6=right");
	textcolor(GREEN);
	gotoxy(60,17);
	cprintf("GOALKEEPER");
	gotoxy(60,19);
	cprintf("a=left");
	gotoxy(60,21);
	cprintf("s=straight");
	gotoxy(60,23);
	cprintf("d=right");
	_setcursortype(0);
	getch();
	front();
}
void about()
{
	clrscr();
	textbackground(0);
	gotoxy(35,3);
	textcolor(MAGENTA);
	cprintf("ABOUT");
	textcolor(MAGENTA);
	gotoxy(20,10);
	cprintf("This game is made by Angel Maden.");
	gotoxy(25,15);
	cprintf("Thank you for visiting");
	gotoxy(25,20);
	cprintf("ENJOY WITH YOUR FRIENDS");
	_setcursortype(0);
	getch();
	front();
}
void singleplayer()
{
	int gdriver = DETECT,gmode;
	int x,y,i,j,k,w,m,n,g,s,q,c,sg,sg1,gs,gs1;
	char p1[10],d,p;
	time_t t;
	again:
	clrscr();
	textbackground(15);
	textcolor(LIGHTBLUE);
	gotoxy(30,10);
	cprintf("Shooter : ");
	gets(p1);
	clrscr();
	textbackground(15);
	textcolor(4);
	gotoxy(35,5);
	cprintf("ROUND 1");
	textcolor(BLUE);
	gotoxy(30,10);
	cprintf("Shooter : %s",strupr(p1));
	textcolor(BLUE);
	gotoxy(30,15);
	cprintf("Goalkeeper : Computer");
	textcolor(15+BLINK);
	gotoxy(25,20);
	cprintf("Press any key to continue...");
	_setcursortype(0);
	getch();
	initgraph(&gdriver,&gmode,"..\\BGI");
	x=getmaxx()/2;
	y=getmaxy()/2;
	sg=0;
	gs=0;
	for(j=1;j<=5;j++)
	{
		cleardevice();
		setbkcolor(CYAN);
		setcolor(2);
		rectangle(x-170,y-100,x+170,y);
		rectangle(x-230,y-100,x+230,y+110);
		arc(x,y+68,200,340,120);
		rectangle(x-400,y-100,x+400,y+250);
		circle(x,y+70,2);
		gkc();
		setcolor(15);
		pieslice(x,y+70,0,360,8);
		pole();
		k=0;
		p:
		p=getch();
		fflush(stdin);
		g=0;
		g=rand() %9;
			if(p=='a'||p=='s'||p=='d')
			{
				if(p=='s')                //CENTER
				{
					if(g==1||g==2||g==3)
					{
						for(i=0;i<=207;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkc();
							setcolor(15);
							pieslice(x,y+70-i,0,360,7);
							pole();
						}
						setcolor(4);
						settextstyle(1,0,4);
						outtextxy(x+150,y/4,"SAVED!!!");
						sg++;
						getch();
					}
					else if(g==0||g==7||g==8)
					{
						for(i=0;i<=350;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkl();
							setcolor(15);
							pieslice(x,y+70-i,0,360,7);
							pole();
						}
						setcolor(1);
						settextstyle(1,0,4);
						outtextxy(x-250,y/4,"GOAL!!!");
						gs++;
						getch();
					}
					else if(g==4||g==5||g==6)
					{
						for(i=0;i<=350;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkr();
							setcolor(15);
							pieslice(x,y+70-i,0,360,7);
							pole();
						}
						setcolor(1);
						settextstyle(1,0,4);
						outtextxy(x-250,y/4,"GOAL!!!");
						gs++;
						getch();
					}
				}
				if(p=='a')               //LEFT
				{
					if(g==2||g==5||g==8)
					{
						for(i=0;i<=350;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkc();
							for(w=1;w<=1;w++)
							{
								k=k+(2*w);
								setcolor(15);
								pieslice(x-k,y+70-i,0,360,7);
							}
							pole();
						}
						setcolor(1);
						settextstyle(1,0,4);
						outtextxy(x-250,y/4,"GOAL!!!");
						gs++;
						getch();
					}
					else if(g==1||g==4||g==7)
					{
						for(i=0;i<=170;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkl();
							for(w=1;w<=1;w++)
							{
								k=k+(2*w);
								setcolor(15);
								pieslice(x-k,y+70-i,0,360,7);
							}
							pole();
						}
						setcolor(4);
						settextstyle(1,0,4);
						outtextxy(x+150,y/4,"SAVED!!!");
						sg++;
						getch();
					}
					else if(g==3||g==6||g==0)
					{
						for(i=0;i<=350;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkr();
							for(w=1;w<=1;w++)
							{
								k=k+(2*j);
								setcolor(15);
								pieslice(x-k,y+70-i,0,360,7);
							}
							pole();
						}
						setcolor(1);
						settextstyle(1,0,4);
						outtextxy(x-250,y/4,"GOAL!!!");
						gs++;
						getch();
					}
				}
				if(p=='d')              //RIGHT
				{
					if(g==7||g==3||g==0)
					{
						for(i=0;i<=350;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkc();
							for(w=1;w<=1;w++)
							{
								k=k+(2*w);
								setcolor(15);
								pieslice(x+k,y+70-i,0,360,7);
							}
							pole();
						}
						setcolor(1);
						settextstyle(1,0,4);
						outtextxy(x-250,y/4,"GOAL!!!");
						gs++;
						getch();
					}
					else if(g==8||g==6||g==1)
					{
						for(i=0;i<=350;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkl();
							for(w=1;w<=1;w++)
							{
								k=k+(2*w);
								setcolor(15);
								pieslice(x+k,y+70-i,0,360,7);
							}
							pole();
						}
						setcolor(1);
						settextstyle(1,0,4);
						outtextxy(x-250,y/4,"GOAL!!!");
						gs++;
						getch();
					}
					else if(g==2||g==4||g==5)
					{
						for(i=0;i<=170;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkr();
							for(w=1;w<=1;w++)
							{
								k=k+(2*w);
								setcolor(15);
								pieslice(x+k,y+70-i,0,360,7);
							}
							pole();
						}
						setcolor(4);
						settextstyle(1,0,4);
						outtextxy(x+150,y/4,"SAVED!!!");
						sg++;
						getch();
					}
				}
			}
			else
			goto p;
	}
	getch();
	cleardevice();
	setbkcolor(0);
	for(i=(x-98);i<=(x+98);i++)
	{
		delay(5);
		setcolor(LIGHTRED);
		rectangle(x-100,y-5,x+100,y+5);
		setcolor(15);
		rectangle(i,y-3,i,y+3);
		settextstyle(1,0,2);
		setcolor(LIGHTRED);
		outtextxy(x-30,y+25,"Wait...");
		}
	closegraph();
	entry:
	clrscr();
	textcolor(LIGHTBLUE);
	gotoxy(25,8);
	cprintf("%s scored %d goals.",p1,gs);
	textcolor(LIGHTBLUE);
	gotoxy(25,15);
	cprintf("computer saved %d goals.",sg);
	textcolor(15+BLINK);
	gotoxy(25,20);
	cprintf("Press space to continue");
	_setcursortype(0);
	q=getch();
   if(q==' ')
   {
	clrscr();
	textbackground(15);
	textcolor(4);
	gotoxy(35,5);
	cprintf("ROUND 2");
	textcolor(BLUE);
	gotoxy(30,10);
	cprintf("Shooter : Computer");
	textcolor(BLUE);
	gotoxy(30,15);
	cprintf("Goalkeeper : %s",p1);
	textcolor(15+BLINK);
	gotoxy(25,20);
	cprintf("Press any key to continue...");
	_setcursortype(0);
	getch();
	initgraph(&gdriver,&gmode,"..\\BGI");
	x=getmaxx()/2;
	y=getmaxy()/2;
	sg1=0;
	gs1=0;
	for(j=1;j<=5;j++)
	{
		cleardevice();
		setbkcolor(CYAN);
		setcolor(2);
		rectangle(x-170,y-100,x+170,y);
		rectangle(x-230,y-100,x+230,y+110);
		arc(x,y+68,200,340,120);
		rectangle(x-400,y-100,x+400,y+250);
		circle(x,y+70,2);
		gkc();
		setcolor(15);
		pieslice(x,y+70,0,360,8);
		pole();
		k=0;
		g=0;
		srand((unsigned) time(&t));
		g=rand() %9;
		fflush(stdin);
		s:
		s=getch();
			if(s=='4'||s=='5'||s=='6')
			{
				if(g==2||g==5||g==8)        //CENTER
				{
					if(s=='5')
					{
						for(i=0;i<=207;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkc();
							setcolor(15);
							pieslice(x,y+70-i,0,360,7);
							pole();
						}
						setcolor(4);
						settextstyle(1,0,4);
						outtextxy(x+150,y/4,"SAVED!!!");
						sg1++;
						getch();
					}
					else if(s=='4')
					{
						for(i=0;i<=350;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkl();
							setcolor(15);
							pieslice(x,y+70-i,0,360,7);
							pole();
						}
						setcolor(1);
						settextstyle(1,0,4);
						outtextxy(x-250,y/4,"GOAL!!!");
						gs1++;
						getch();
					}
					else if(s=='6')
					{
						for(i=0;i<=350;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkr();
							setcolor(15);
							pieslice(x,y+70-i,0,360,7);
							pole();
						}
						setcolor(1);
						settextstyle(1,0,4);
						outtextxy(x-250,y/4,"GOAL!!!");
						gs1++;
						getch();
					}
				}
				if(g==1||g==4||g==7)       //LEFT
				{
					if(s=='5')
					{
						for(i=0;i<=350;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkc();
							for(w=1;w<=1;w++)
							{
								k=0;
								k=k+(2*w);
								setcolor(15);
								pieslice(x-k,y+70-i,0,360,7);
							}
							pole();
						}
						setcolor(1);
						settextstyle(1,0,4);
						outtextxy(x-250,y/4,"GOAL!!!");
						gs1++;
						getch();
					}
					else if(s=='4')
					{
						for(i=0;i<=170;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkl();
							for(w=1;w<=1;w++)
							{
								k=k+(2*w);
								setcolor(15);
								pieslice(x-k,y+70-i,0,360,7);
							}
							pole();
						}
						setcolor(4);
						settextstyle(1,0,4);
						outtextxy(x+150,y/4,"SAVED!!!");
						sg1++;
						getch();
					}
					else if(s=='6')
					{
						for(i=0;i<=350;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkr();
							for(w=1;w<=1;w++)
							{
								k=0;
								k=k+(2*w);
								setcolor(15);
								pieslice(x-k,y+70-i,0,360,7);
							}
							pole();
						}
						setcolor(1);
						settextstyle(1,0,4);
						outtextxy(x-250,y/4,"GOAL!!!");
						gs1++;
						getch();
					}
				}
				if(g==3||g==6||g==0)      //RIGHT
				{
					if(s=='5')
					{
						for(i=0;i<=350;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkc();
							for(w=1;w<=1;w++)
							{
								k=k+(2*w);
								setcolor(15);
								pieslice(x+k,y+70-i,0,360,7);
							}
							pole();
						}
						setcolor(1);
						settextstyle(1,0,4);
						outtextxy(x-250,y/4,"GOAL!!!");
						gs1++;
						getch();
					}
					else if(s=='4')
					{
						for(i=0;i<=350;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkl();
							for(w=1;w<=1;w++)
							{
								k=k+(2*w);
								setcolor(15);
								pieslice(x+k,y+70-i,0,360,7);
							}
							pole();
						}
						setcolor(1);
						settextstyle(1,0,4);
						outtextxy(x-250,y/4,"GOAL!!!");
						gs1++;
						getch();
					}
					else if(s=='6')
					{
						for(i=0;i<=170;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkr();
							for(w=1;w<=1;w++)
							{
								k=k+(2*w);
								setcolor(15);
								pieslice(x+k,y+70-i,0,360,7);
							}
							pole();
						}
						setcolor(4);
						settextstyle(1,0,4);
						outtextxy(x+150,y/4,"SAVED!!!");
						sg1++;
						getch();
					}
				}
			}
			else
			goto s;
	}
	getch();
	cleardevice();
	for(i=(x-98);i<=(x+98);i++)
	{
		delay(5);
		setcolor(LIGHTRED);
		rectangle(x-100,y-5,x+100,y+5);
		setcolor(15);
		rectangle(i,y-3,i,y+3);
		settextstyle(1,0,2);
		setcolor(LIGHTRED);
		outtextxy(x-30,y+25,"Wait...");
		}
	closegraph();
	entri:
	clrscr();
	textcolor(LIGHTBLUE);
	gotoxy(25,5);
	cprintf("Computer scored %d goals.",gs1);
	textcolor(MAGENTA);
	gotoxy(25,10);
	cprintf("%s saved %d goals.",p1,sg1);
	textcolor(GREEN);
	gotoxy(25,13);
	cprintf("%s(%d-%d)computer",p1,gs,gs1);
	if(gs>gs1)
	{
		textcolor(14);
		gotoxy(25,16);
		cprintf("%s beats the computer",p1);
	}
	else if(gs==gs1)
	{
		textcolor(14);
		gotoxy(25,16);
		cprintf("Well played %s",p1);
	}
	else
	{
		textcolor(14);
		gotoxy(25,16);
		cprintf("Can't you beat this computer %s?",p1);
	}
	textcolor(15+BLINK);
	gotoxy(28,20);
	cprintf("Press space to continue...");
	_setcursortype(0);
	c=getch();
	if(c==' ')
	{
		clrscr();
		textbackground(15);
		textcolor(15);
		gotoxy(20,10);
		cprintf("Wanna have another round? (y/n)");
		_setcursortype(0);
		d=getch();
		if(d=='y')
			goto again;
		else
			front();
	}
	else
	goto entri;
	}
	else
	goto entry;
}
void multiplayer()
{
	int gdriver = DETECT,gmode;
	int x,y,i,j,k,w,m,n,g,p,q,r,t,c,sg,sg1,gs,gs1;
	char p1[10],p2[10],d;
	again:
	clrscr();
	textbackground(15);
	textcolor(LIGHTBLUE);
	gotoxy(30,10);
	cprintf("Shooter : ");
	gets(p1);
	textcolor(MAGENTA);
	gotoxy(27,15);
	cprintf("Goalkeeper : ");
	gets(p2);
	clrscr();
	textbackground(15);
	textcolor(4);
	gotoxy(35,5);
	cprintf("ROUND 1");
	textcolor(LIGHTBLUE);
	gotoxy(30,10);
	cprintf("Shooter : %s",p1);
	textcolor(MAGENTA);
	gotoxy(27,15);
	cprintf("Goalkeeper : %s",p2);
	textcolor(15+BLINK);
	gotoxy(25,20);
	cprintf("Press any key to continue...");
	getch();
	initgraph(&gdriver,&gmode,"..\\BGI");
	x=getmaxx()/2;
	y=getmaxy()/2;
	sg=0;
	gs=0;
     for(j=1;j<=5;j++)
     {
	cleardevice();
	setbkcolor(CYAN);
	setcolor(2);
	rectangle(x-170,y-100,x+170,y);
	rectangle(x-230,y-100,x+230,y+110);
	arc(x,y+68,200,340,120);
	rectangle(x-400,y-100,x+400,y+250);
	circle(x,y+70,2);
	gkc();
	setcolor(15);
	pieslice(x,y+70,0,360,8);
	pole();
	k=0;
	p:
	p=getch();
	fflush(stdin);
		if(p=='a'||p=='s'||p=='d')
		{
			g:
			g=getch();
			fflush(stdin);
			if(g=='4'||g=='5'||g=='6')
			{
				if(p=='s')                //CENTER
				{
					if(g=='5')
					{
						for(i=0;i<=207;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkc();
							setcolor(15);
							pieslice(x,y+70-i,0,360,7);
							pole();
						}
						setcolor(4);
						settextstyle(1,0,4);
						outtextxy(x+150,y/4,"SAVED!!!");
						sg++;
						getch();
					}
					else if(g=='4')
					{
						for(i=0;i<=350;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkl();
							setcolor(15);
							pieslice(x,y+70-i,0,360,7);
							pole();
						}
						setcolor(1);
						settextstyle(1,0,4);
						outtextxy(x-250,y/4,"GOAL!!!");
						gs++;
						getch();
					}
					else if(g=='6')
					{
						for(i=0;i<=350;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkr();
							setcolor(15);
							pieslice(x,y+70-i,0,360,7);
							pole();
						}
						setcolor(1);
						settextstyle(1,0,4);
						outtextxy(x-250,y/4,"GOAL!!!");
						gs++;
						getch();
					}
				}
				if(p=='a')               //LEFT
				{
					if(g=='5')
					{
						for(i=0;i<=350;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkc();
							for(w=1;w<=1;w++)
							{
								k=k+(2*w);
								setcolor(15);
								pieslice(x-k,y+70-i,0,360,7);
							}
							pole();
						}
						setcolor(1);
						settextstyle(1,0,4);
						outtextxy(x-250,y/4,"GOAL!!!");
						gs++;
						getch();
					}
					else if(g=='4')
					{
						for(i=0;i<=170;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkl();
							for(w=1;w<=1;w++)
							{
								k=k+(2*w);
								setcolor(15);
								pieslice(x-k,y+70-i,0,360,7);
							}
							pole();
						}
						setcolor(4);
						settextstyle(1,0,4);
						outtextxy(x+150,y/4,"SAVED!!!");
						sg++;
						getch();
					}
					else if(g=='6')
					{
						for(i=0;i<=350;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkr();
							for(w=1;w<=1;w++)
							{
								k=k+(2*w);
								setcolor(15);
								pieslice(x-k,y+70-i,0,360,7);
							}
							pole();
						}
						setcolor(1);
						settextstyle(1,0,4);
						outtextxy(x-250,y/4,"GOAL!!!");
						gs++;
						getch();
					}
				}
				if(p=='d')              //RIGHT
				{
					if(g=='5')
					{
						for(i=0;i<=350;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkc();
							for(w=1;w<=1;w++)
							{
								k=k+(2*w);
								setcolor(15);
								pieslice(x+k,y+70-i,0,360,7);
							}
							pole();
						}
						setcolor(1);
						settextstyle(1,0,4);
						outtextxy(x-250,y/4,"GOAL!!!");
						gs++;
						getch();
					}
					else if(g=='4')
					{
						for(i=0;i<=350;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkl();
							for(w=1;w<=1;w++)
							{
								k=k+(2*w);
								setcolor(15);
								pieslice(x+k,y+70-i,0,360,7);
							}
							pole();
						}
						setcolor(1);
						settextstyle(1,0,4);
						outtextxy(x-250,y/4,"GOAL!!!");
						gs++;
						getch();
					}
					else if(g=='6')
					{
						for(i=0;i<=170;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkr();
							for(w=1;w<=1;w++)
							{
								k=k+(2*w);
								setcolor(15);
								pieslice(x+k,y+70-i,0,360,7);
							}
							pole();
						}
						setcolor(4);
						settextstyle(1,0,4);
						outtextxy(x+150,y/4,"SAVED!!!");
						sg++;
						getch();
					}
				}
			}
			else
			goto g;
		}
		else
		goto p;
	}
	getch();
	cleardevice();
	for(i=(x-98);i<=(x+98);i++)
	{
		delay(5);
		setcolor(LIGHTRED);
		rectangle(x-100,y-5,x+100,y+5);
		setcolor(15);
		rectangle(i,y-3,i,y+3);
		settextstyle(1,0,2);
		setcolor(LIGHTRED);
		outtextxy(x-30,y+25,"Wait...");
	}
	closegraph();
	entry:
	clrscr();
	textcolor(LIGHTBLUE);
	gotoxy(28,10);
	cprintf("%s scored %d goals.",p1,gs);
	textcolor(MAGENTA);
	gotoxy(28,15);
	cprintf("%s saved %d goals.",p2,sg);
	textcolor(15+BLINK);
	gotoxy(25,20);
	cprintf("Press space to continue...");
	t=getch();
    if(t==' ')
     {
	clrscr();
	textbackground(15);
	textcolor(4);
	gotoxy(35,5);
	cprintf("ROUND 2");
	textcolor(LIGHTBLUE);
	gotoxy(30,10);
	cprintf("Shooter : %s",p2);
	textcolor(LIGHTMAGENTA);
	gotoxy(27,15);
	cprintf("Goalkeeper : %s",p1);
	textcolor(15+BLINK);
	gotoxy(25,20);
	cprintf("Press any key to continue...");
	getch();
	initgraph(&gdriver,&gmode,"..\\BGI");
	x=getmaxx()/2;
	y=getmaxy()/2;
	sg1=0;
	gs1=0;
     for(j=1;j<=5;j++)
     {
	cleardevice();
	setbkcolor(CYAN);
	setcolor(2);
	rectangle(x-170,y-100,x+170,y);
	rectangle(x-230,y-100,x+230,y+110);
	arc(x,y+68,200,340,120);
	rectangle(x-400,y-100,x+400,y+250);
	circle(x,y+70,2);
	gkc();
	setcolor(15);
	pieslice(x,y+70,0,360,8);
	pole();
	k=0;
	q:
	q=getch();
	fflush(stdin);
		if(q=='4'||q=='5'||q=='6')
		{
			r:
			r=getch();
			fflush(stdin);
			if(r=='a'||r=='s'||r=='d')
			{
				if(q=='5')                //CENTER
				{
					if(r=='s')
					{
						for(i=0;i<=207;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkc();
							setcolor(15);
							pieslice(x,y+70-i,0,360,7);
							pole();
						}
						setcolor(4);
						settextstyle(1,0,4);
						outtextxy(x+150,y/4,"SAVED!!!");
						sg1++;
						getch();
					}
					else if(r=='a')
					{
						for(i=0;i<=350;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkl();
							setcolor(15);
							pieslice(x,y+70-i,0,360,7);
							pole();
						}
						setcolor(1);
						settextstyle(1,0,4);
						outtextxy(x-250,y/4,"GOAL!!!");
						gs1++;
						getch();
					}
					else if(r=='d')
					{
						for(i=0;i<=350;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkr();
							setcolor(15);
							pieslice(x,y+70-i,0,360,7);
							pole();
						}
						setcolor(1);
						settextstyle(1,0,4);
						outtextxy(x-250,y/4,"GOAL!!!");
						gs1++;
						getch();
					}
				}
				if(q=='4')               //LEFT
				{
					if(r=='s')
					{
						for(i=0;i<=350;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkc();
							for(w=1;w<=1;w++)
							{
								k=k+(2*w);
								setcolor(15);
								pieslice(x-k,y+70-i,0,360,7);
							}
							pole();
						}
						setcolor(1);
						settextstyle(1,0,4);
						outtextxy(x-250,y/4,"GOAL!!!");
						gs1++;
						getch();
					}
					else if(r=='a')
					{
						for(i=0;i<=170;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkl();
							for(w=1;w<=1;w++)
							{
								k=k+(2*w);
								setcolor(15);
								pieslice(x-k,y+70-i,0,360,7);
							}
							pole();
						}
						setcolor(4);
						settextstyle(1,0,4);
						outtextxy(x+150,y/4,"SAVED!!!");
						sg1++;
						getch();
					}
					else if(r=='d')
					{
						for(i=0;i<=350;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkr();
							for(w=1;w<=1;w++)
							{
								k=k+(2*w);
								setcolor(15);
								pieslice(x-k,y+70-i,0,360,7);
							}
							pole();
						}
						setcolor(1);
						settextstyle(1,0,4);
						outtextxy(x-250,y/4,"GOAL!!!");
						gs1++;
						getch();
					}
				}
				if(q=='6')              //RIGHT
				{
					if(r=='s')
					{
						for(i=0;i<=350;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkc();
							for(w=1;w<=1;w++)
							{
								k=k+(2*w);
								setcolor(15);
								pieslice(x+k,y+70-i,0,360,7);
							}
							pole();
						}
						setcolor(1);
						settextstyle(1,0,4);
						outtextxy(x-250,y/4,"GOAL!!!");
						gs1++;
						getch();
					}
					else if(r=='a')
					{
						for(i=0;i<=350;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkl();
							for(w=1;w<=1;w++)
							{
								k=k+(2*w);
								setcolor(15);
								pieslice(x+k,y+70-i,0,360,7);
							}
							pole();
						}
						setcolor(1);
						settextstyle(1,0,4);
						outtextxy(x-250,y/4,"GOAL!!!");
						gs1++;
						getch();
					}
					else if(r=='d')
					{
						for(i=0;i<=170;i+=5)
						{
							delay(20);
							cleardevice();
							setbkcolor(CYAN);
							setcolor(2);
							rectangle(x-170,y-100,x+170,y);
							rectangle(x-230,y-100,x+230,y+110);
							arc(x,y+68,200,340,120);
							rectangle(x-400,y-100,x+400,y+250);
							circle(x,y+70,2);
							gkr();
							for(w=1;w<=1;w++)
							{
								k=k+(2*w);
								setcolor(15);
								pieslice(x+k,y+70-i,0,360,7);
							}
							pole();
						}
						setcolor(4);
						settextstyle(1,0,4);
						outtextxy(x+150,y/4,"SAVED!!!");
						sg1++;
						getch();
					}
				}
			}
			else
			goto r;
		}
		else
		goto q;
	}}
	else
	goto entry;
	getch();
	cleardevice();
	for(i=(x-98);i<=(x+98);i++)
	{
		delay(5);
		setcolor(LIGHTRED);
		rectangle(x-100,y-5,x+100,y+5);
		setcolor(15);
		rectangle(i,y-3,i,y+3);
		settextstyle(1,0,2);
		setcolor(LIGHTRED);
		outtextxy(x-30,y+25,"Wait...");
	}
	closegraph();
	entree:
	clrscr();
	textcolor(LIGHTBLUE);
	gotoxy(28,5);
	cprintf("%s scored %d goals.",p2,gs1);
	textcolor(LIGHTMAGENTA);
	gotoxy(28,10);
	cprintf("%s saved %d goals.",p1,sg1);
	textcolor(GREEN);
	gotoxy(32,13);
	cprintf("%s(%d-%d)%s",p1,gs,gs1,p2);
	if(gs>gs1)
	{
		textcolor(14);
		gotoxy(25,16);
		cprintf("%s beats %s by %d goal",p1,p2,gs-gs1);
	}
	else if(gs==gs1)
	{
		textcolor(14);
		gotoxy(25,16);
		cprintf("%s played draw with %s",p1,p2);
	}
	else
	{
		textcolor(14);
		gotoxy(25,16);
		cprintf("%s beats %s by %d goal",p2,p1,gs1-gs);
	}
	textcolor(15+BLINK);
	gotoxy(27,20);
	cprintf("Press space to continue...");
	c=getch();
	if(c==' ')
	{
		clrscr();
		textbackground(15);
		textcolor(15);
		gotoxy(20,10);
		cprintf("Wanna have another round? (y/n)");
		d=getch();
		if(d=='y')
			goto again;
		else
		front();
	}
	else
	goto entree;
}
void gkc()
{
	int m,n;
	m=getmaxx()/2;
	n=getmaxy()/2;
	setcolor(8);
	rectangle(m-6,n-125,m,n-112);   //halfpant
	rectangle(m,n-125,m+6,n-112);   //halfpant
	rectangle(m-7,n-145,m+7,n-125); //body
	rectangle(m-2,n-150,m+2,n-145);  //neck
	line(m+7,n-145,m+10,n-133);     //rarm
	line(m+3,n-135,m+10,n-133);     //rarm
	line(m-7,n-145,m-10,n-133);     //larm
	line(m-3,n-135,m-10,n-133); 	//larm
	ellipse(m-3,n-136,0,360,1,3);  	//hand
	ellipse(m+3,n-136,0,360,1,3);  	//hand
	line(m+3,n-112,m+3,n-100);      //rleg
	line(m-3,n-112,m-3,n-100);      //lleg
	ellipse(m+3,n-98,0,360,2,4);    //rfoot
	ellipse(m-3,n-98,0,360,2,4);    //lfoot
	circle(m,n-160,10); 	        //head
	settextstyle(0,0,0);
	outtextxy(m-6,n-164,"..");  	//eye dot
	arc(m-10,n-173,270,310,13);       //hair
	arc(m+7,n-175,210,290,14);       //hair
	line(m,n-158,m,n-156);            //nose
	line(m-2,n-153,m+2,n-154);        //mouth
	ellipse(m+11,n-160,0,360,1,2);   //ear
	ellipse(m-11,n-160,0,360,1,2);   //ear
}
void gkl()
{
	int m,n;
	m=(getmaxx()/2)+5;
	n=getmaxy()/2;
	setcolor(8);
	rectangle(m-65,n-106,m-52,n-100); //halfpant
	rectangle(m-65,n-100,m-52,n-94);  //halfpant
	rectangle(m-85,n-107,m-65,n-93);  //body
	rectangle(m-90,n-102,m-85,n-98);  //neck
	line(m-85,n-107,m-72,n-114);      //rarm
	line(m-72,n-114,m-74,n-105);      //rarm
	line(m-85,n-93,m-72,n-86);        //larm
	line(m-72,n-86,m-74,n-95);     	  //larm
	ellipse(m-76,n-103,0,360,3,1);    //hand
	ellipse(m-76,n-97,0,360,3,1);  	  //hand
	line(m-52,n-103,m-40,n-103);      //rleg
	line(m-52,n-97,m-40,n-97);        //lleg
	ellipse(m-38,n-103,0,360,4,2);    //rfoot
	ellipse(m-38,n-97,0,360,4,2);     //lfoot
	circle(m-99,n-100,9); 	          //head
	settextstyle(0,0,0);
	outtextxy(m-102,n-103,":");    	  //eye dot
	arc(m-106,n-113,280,325,10);      //hair
	arc(m-112,n-93,0,62,11);          //hair
	line(m-97,n-100,m-96,n-100);      //nose
	line(m-93,n-99,m-94,n-101);       //mouth
	ellipse(m-99,n-108,0,360,2,1);    //ear
	ellipse(m-99,n-92,0,360,2,1);     //ear
}
void gkr()
{
	int m,n;
	m=(getmaxx()/2)-5;
	n=getmaxy()/2;
	setcolor(8);
	rectangle(m+65,n-106,m+52,n-100); //halfpant
	rectangle(m+65,n-100,m+52,n-94);  //halfpant
	rectangle(m+85,n-107,m+65,n-93);  //body
	rectangle(m+90,n-102,m+85,n-98);  //neck
	line(m+85,n-107,m+72,n-114);      //rarm
	line(m+72,n-114,m+74,n-105);      //rarm
	line(m+85,n-93,m+72,n-86);        //larm
	line(m+72,n-86,m+74,n-95);     	  //larm
	ellipse(m+76,n-103,0,360,3,1);    //hand
	ellipse(m+76,n-97,0,360,3,1);  	  //hand
	line(m+52,n-103,m+40,n-103);      //rleg
	line(m+52,n-97,m+40,n-97);        //lleg
	ellipse(m+38,n-103,0,360,4,2);    //rfoot
	ellipse(m+38,n-97,0,360,4,2);     //lfoot
	circle(m+99,n-100,9); 	          //head
	settextstyle(0,0,0);
	outtextxy(m+97,n-103,":");    	  //eye dot
	arc(m+111,n-107,180,250,10);      //hair
	arc(m+112,n-93,140,183,10);       //hair
	line(m+97,n-100,m+96,n-100);      //nose
	line(m+93,n-99,m+94,n-101);       //mouth
	ellipse(m+99,n-108,0,360,2,1);    //ear
	ellipse(m+99,n-92,0,360,2,1);     //ear
}
void pole()
{
	int x,y;
	setcolor(6);
	line(x-128,y/4-50,x+128,y/4-50);
	line(x-128,y/4-50,x-128,y-100);
	line(x+128,y/4-50,x+128,y-100);
	line(x-127,y/4-49,x+127,y/4-49);
	line(x-127,y/4-49,x-127,y-100);
	line(x+127,y/4-49,x+127,y-100);
	line(x-126,y/4-48,x+126,y/4-48);
	line(x-126,y/4-48,x-126,y-100);
	line(x+126,y/4-48,x+126,y-100);
	line(x-125,y/4-47,x+125,y/4-47);
	line(x-125,y/4-47,x-125,y-100);
	line(x+125,y/4-47,x+125,y-100);
	line(x-124,y/4-46,x+124,y/4-46);
	line(x-124,y/4-46,x-124,y-100);
	line(x+124,y/4-46,x+124,y-100);
	line(x-123,y/4-45,x+123,y/4-45);
	line(x-123,y/4-45,x-123,y-100);
	line(x+123,y/4-45,x+123,y-100);
}