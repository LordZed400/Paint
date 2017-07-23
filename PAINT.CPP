#include<stdio.h>
#include<conio.h>
int  main()
{
top:
clrscr();
printf("\t\t\t\tWelcome to Painting in C\n");
printf("Input:\tQ = Paint\tE = Erase\tEnter = Quit\t0 = Clear Screen\n");
for(int i= 1;i<10;i++)
{
textcolor(i);
cprintf("%d=%c  ",i,219);
}
printf("\n================================================================================");
//char x[5]={'>'};
int xpos=2, ypos=5,ch;
up:
gotoxy(xpos,ypos);
//printf("%s",x);
ch=getch();
//gotoxy(xpos,ypos);
//printf("    ");
switch(ch)
{
	case 72:
	{
	ypos--;
	break;
	}
	case 80:
	{
	ypos++;
	break;
	}
	case 77:
	{
	xpos++;
	break;
	}
	case 75:
	{
	xpos--;
	break;
	}
	case 113:
	{
	printf("%c",219);
	break;
	}
	case 101:
	{
	printf("%c",0);
	break;
	}
	case 49:
	{
	textcolor(1);
	cprintf("%c",219);
	break;
	}
	case 50:
	{
	textcolor(2);
	cprintf("%c",219);
	break;
	}
	case 51:
	{
	textcolor(3);
	cprintf("%c",219);
	break;
	}
	case 52:
	{
	textcolor(4);
	cprintf("%c",219);
	break;
	}
	case 53:
	{
	textcolor(5);
	cprintf("%c",219);
	break;
	}
	case 54:
	{
	textcolor(6);
	cprintf("%c",219);
	break;
	}
	case 55:
	{
	textcolor(7);
	cprintf("%c",219);
	break;
	}
	case 56:
	{
	textcolor(8);
	cprintf("%c",219);
	break;
	}
	case 57:
	{
	textcolor(9);
	cprintf("%c",219);
	break;
	}
	case 48:
	{
	textcolor(7);
	goto top;
	}

}
if(xpos<2)
{
xpos++;
}

if(ypos<5)
{
ypos++;
}

if(xpos>79)
{
xpos--;
}

if(ypos>24)
{
ypos--;
}

if(ch!=13)
goto up;
return(0);
}

