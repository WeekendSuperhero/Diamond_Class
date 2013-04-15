//Due Date: 09/16/2011
//Assignment 1: Code File
//Mark David Blake
//KD1-61-0624
//ake*v54p
//--------------Diamond.cpp------------------------
//The class definition for Diamond
//

#include <iostream>
#include "Diamond.h"

using namespace std;

Diamond::Diamond()         //Default Constructor.
{
	border = '#';
	fill = '*';
	size = 10;
}
Diamond::Diamond(int length, char b, char f)
{
	//size conditions
	if(length<40 && length>0)
	{
	    size = length;
	}
	else if (length>39)
	{	
	    size = 39;
	}
	else if (length<1)
	{
		size = 1;
	}

	//border conditions
	if(b>='!' && b<='~')
	{
	    border = b;
	}
	else if (b<'~')
	{	
	    border = '#';
	}
	
	else if(b>'!')
	{
		border = '#';
	}

	//fill conditions
	if(f>='!' && f<='~')
	{
	    fill = f;
	}
	else if (f<'~')
	{	
	    fill = '*';
	}
	else if(f>'!')
	{
		fill = '*';
	}
}
int Diamond::GetSize() //return diamond size
{
	return size;
}
int Diamond::Perimeter() //return diamond perimeter length
{
	perimeter= (size*4);
	return perimeter;
}
double Diamond::Area() //return diamond area I used the value for the sqrt of 3 instead of the math library
{
	area=((size*size)*.4330127)*2;
	return area;
}
void Diamond::Grow() //increase the size of the diamond by one
{
	if (size<39)
		size += 1;
	else
		size = size;
}
void Diamond::Shrink() //decrease the size of the diamond by one
{
	if (size>1)
		size -=1;
	else
		size = size;
}
void Diamond::Summary() //print out summary information for the diamond.
{
   cout << "area:\t" << area << "units.\n";
   cout << "perimeter:\t" << perimeter << "units.\n";
   cout << "size:\t" << size << "units.\n";
	Diamond::Draw();
}
void Diamond::Draw() //function to create the actual dimamond
{
	cout << '\n';
	for (int y=1; y<=size; y++)
	{
		for(int space=size-y; space>0; space--)
		{
			cout<<" ";
		}	
		for (int x=0; x<y; x++)
		{
			if (x == 0 || x == y-1)
			{	cout<<border;
				cout <<" ";
			}
			else
			{
				cout <<fill;
				cout<<" ";
			}
			
		}
		cout << '\n';
		
	}
	
	for (int y=(size-1); y>=1; y--)
	{
		for(int space=0; space<size-y; space++)
		{
			cout<<" ";
		}	
		for (int x=0; x<y; x++)
		{
			if (x == 0 || x == y-1)
			{	cout<<border;
				cout <<" ";
			}
			else
			{
				cout <<fill;
				cout<<" ";
			}
			
		}
		cout << '\n';
		
	}
	
	
	
	
	
	
}
void Diamond::SetBorder(char b) //choose the character for the border of the diamond
{
	if(b>='!' && b<='~')
	{
	    border = b;
	}
	else if (b<'~')
	{	
	    border = '#';
	}
	
	else if(b>'!')
	{
		border = '#';
	}
}
void Diamond::SetFill(char f) //set the fill character for the diamond
{
	if(f>='!' && f<='~')
	{
	    fill = f;
	}
	else if (f<'~')
	{	
	    fill = '*';
	}
	else if(f>'!')
	{
		fill = '*';
	}
}	
