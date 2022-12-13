#include<graphics.h>
#include<stdio.h>
#include<string>

// BATTERY CHARGING GRAPHICS PROGRAM
using namespace std;
int main()
{
	int height=GetSystemMetrics(SM_CYSCREEN);
	int width=height;
	initwindow(700,600,"CG MINI PROJECT",150,50);
	int page=0;
	int n=1;
	while(n<=101)
	{
		setactivepage(page);
		setvisualpage(1-page);
		cleardevice();
		setcolor(WHITE);
		rectangle(250-2,300-3-75,440+2,400+3-75);
		int points[8]={442,325-75,450+2,325-75,450+2,375-75,442,375-75};
		drawpoly(4,points);
	
		if(n<=95)
		{
		
		for(int i=1;i<=n*2;i++)
		{
			if(n<=15)
			setcolor(RED);
			else
			setcolor(GREEN);
			line(250+i,300-75,250+i,400-75);
		}
	    }
	    else
	    {
				
	     	for(int i=1;i<=95*2;i++)
	    	{
			setcolor(GREEN);
			line(250+i,300-75,250+i,400-75);
		    }
		
	   	    for(int j=1;j<=(n-95)*2;j++)
	   	    {
	   	 	setcolor(GREEN);
	   	 	line(440+j,327-75,440+j,373-75);
	    	}
	   }
		setcolor(WHITE);
		stringstream s;
		s<<n<<"%";
		char ch[10]; 
		s>>ch;
		settextstyle(0,HORIZ_DIR,3);
		outtextxy(315,450-75,ch);
		page=1-page;
		delay(500);
		n++;
					
	}
	getch();
	closegraph();
}
