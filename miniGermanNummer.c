#include<stdio.h>
//#include<string.h>
#include<stdlib.h> // to use exit(0); similar to return 0
/*
	Proudly coded by Muhammad Aliff Muazzam (Tester2009).
	<3 Katze xD
	From German-Malaysian Institute (GMI). Training for Advanced Technology.
	Start dev: March 16, 2015. Friday

	https://www.facebook.com/Tester2009
	https://github.com/alepcat1710
	http://aliff.muazzam.my
	Feel free to use. Do not change copyright, mastah !

	Written in Sublime Text (UNREGISTERED)
	Compiler: gcc
	Running in: Ubuntu 14.04 64bit
*/
/*
The MIT License (MIT)

Copyright (c) [2015] [Muhammad Aliff Muazzam]

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/

void miniGerman();
void miniGermanNummer_choice();

int main()
{
	miniGerman();
}

void miniGerman()
{
	int length;
	int result;
	int input;
	system("clear");
	printf("\n\t  miniGermanNummer 0.1 Copyright (c) 2015 Muhammad Aliff Muazzam March 16, 2015");
	printf("\n\t  Welcome to AtomProject by Tester2009");
	printf("\n\t  We count from 0 to 100");
	printf("\n\t  Enter number in integer, we tell you the spelling\n");
	scanf(" %d", &input);
	// now check length

	length=digitLength(input);
	if (input==0)
	{
		printf("\n\t  null\n");
	}
	if (length==1)
	{
		// will proceed single number.
		singlenumber(input);
	}
	else if (length==2)
	{
	// put first digit.
	specialcase(input);

		int lastdigit;
		int firstdigit=0;
		lastdigit=(input%10);

		firstdigit = checkfirstdigit(input);
		tennineteen(input, firstdigit);

		if (lastdigit==1)
		{
			// now check first digit.
			int firstdigit;
			firstdigit = checkfirstdigit(input);
			printf("\n\t  einund"); number(firstdigit);
			miniGermanNummer_choice();
		}
		else if (lastdigit==2)
		{
			int firstdigit;
			firstdigit = checkfirstdigit(input);
			printf("\n\t  zweiund"); number(firstdigit);
			miniGermanNummer_choice();
		}
		else if (lastdigit==3)
		{
			int firstdigit;
			firstdigit = checkfirstdigit(input);
			printf("\n\t  dreiund"); number(firstdigit);
			miniGermanNummer_choice();
		}
		else if (lastdigit==4)
		{
			int firstdigit;
			firstdigit = checkfirstdigit(input);
			printf("\n\t  vierund"); number(firstdigit);
			miniGermanNummer_choice();
		}
		else if (lastdigit==5)
		{
			int firstdigit;
			firstdigit = checkfirstdigit(input);
			printf("\n\t  funfund"); number(firstdigit);
			miniGermanNummer_choice();
		}
		else if (lastdigit==6)
		{
			int firstdigit;
			firstdigit = checkfirstdigit(input);
			printf("\n\t  sechund"); number(firstdigit);
			miniGermanNummer_choice();
		}
		else if (lastdigit==7)
		{
			int firstdigit;
			firstdigit = checkfirstdigit(input);
			printf("\n\t  siebenund"); number(firstdigit);
			miniGermanNummer_choice();
		}
		else if (lastdigit==8)
		{
			int firstdigit;
			firstdigit = checkfirstdigit(input);
			printf("\n\t  achtund"); number(firstdigit);
			miniGermanNummer_choice();
		}
		else if (lastdigit==9)
		{
			int firstdigit;
			firstdigit = checkfirstdigit(input);
			printf("\n\t  neunund"); number(firstdigit);
			miniGermanNummer_choice();
		}
	}
	else if (length==3)
	{
		specialcase(input);
	}
}
int digitLength(int value)
{
	int result=0;
	while (value !=0)
	{
		value /=10;
		result++;
	}
	return result;
}
int checkfirstdigit(int input)
{
	int firstdigit=0;
	while (input!=0)
	{
	// show first digit
		firstdigit = firstdigit*10;
		firstdigit = firstdigit + input%10;
		input = input/10;
	}
	firstdigit = firstdigit%10;
	return firstdigit;
}
int number(int value)
{
	char* tw;
	if (value==2)
	{
		tw = "zwanzig";
	}
	else if (value==3)
	{
	 	tw = "dreissig";
	}
	else if (value==4)
	{
	 	tw = "vierzig";
	}
	else if (value==5)
	{
	 	tw = "funfzig";
	}
	else if (value==6)
	{
		tw = "sechzig";
	}
	else if (value==7)
	{
		tw = "siebzig";
	}
	else if (value==8)
	{
		tw = "achtzig";
	}
	else if (value==9)
	{
		tw = "neunzig";
	}

	printf("%s\n", tw);
	//printf *tw;
}
int singlenumber(input)
{
		char* sn;
		if (input==1)
		{
			sn = "\n\t  eins\n";
		}
		else if (input==2)
		{
			sn = "\n\t  zwei\n";
		}
		else if (input==3)
		{
			sn = "\n\t  drei\n";
		}
		else if (input==4)
		{
			sn = "\n\t  vier\n";
		}
		else if (input==5)
		{
			sn = "\n\t  funf\n";
		}
		else if (input==6)
		{
			sn = "\n\t  sechs\n";
		}
		else if (input==7)
		{
			sn = "\n\t  sieben\n";
		}
		else if (input==8)
		{
			sn = "\n\t  acht\n";
		}
		else if (input==9)
		{
			sn = "\n\t  neun\n";
		}
		printf("%s", sn);
		miniGermanNummer_choice();
}

int specialcase(input)
{
	if (input==20)
	{
		printf("\n\t  zwanzig\n");
		miniGermanNummer_choice();
		exit(0);
	}
	else if (input==30)
	{
		printf("\n\t  dreissig\n");
		miniGermanNummer_choice();
		exit(0);
	}
	else if (input==40)
	{
		printf("\n\t  vierzig\n");
		miniGermanNummer_choice();
		exit(0);
	}
	else if (input==50)
	{
		printf("\n\t  funfzig\n");
		miniGermanNummer_choice();
		exit(0);
	}
	else if (input==60)
	{
		printf("\n\t  sechzig\n");
		miniGermanNummer_choice();
		exit(0);
	}
	else if (input==70)
	{
		printf("\n\t  siebzig\n");
		miniGermanNummer_choice();
		exit(0);
	}
	else if (input==80)
	{
		printf("\n\t  achtzig\n");
		miniGermanNummer_choice();
		exit(0);
	}
	else if (input==90)
	{
		printf("\n\t  neunzig\n");
		miniGermanNummer_choice();
		exit(0);
	}
	else if (input==100)
	{
		printf("\n\t  Einhundert\n");
		miniGermanNummer_choice();
		exit(0);
	}
}
int tennineteen(input, firstdigit)
{
	if (firstdigit==1)
	{
		// beeeees
		char* fd;
		if (input==10)
		{
			fd ="\n\t  zehn\n";
		}
		else if (input==11)
		{
			fd ="\n\t  elf\n";
		}
		else if (input==12)
		{
			fd ="\n\t  zwolf\n";
		}
		else if (input==13)
		{
			fd ="\n\t  dreizehn\n";
		}
		else if (input==14)
		{
			fd ="\n\t  vierzehn\n";
		}
		else if (input==15)
		{
			fd ="\n\t  funfzehn\n";
		}
		else if (input==16)
		{
			fd ="\n\t  sechzehn\n";
		}
		else if (input==17)
		{
			fd ="\n\t  siebzehn\n";
		}
		else if (input==18)
		{
			fd ="\n\t  achtzehn\n";
		}
		else if (input==19)
		{
			fd ="\n\t  neunzehn\n";
		}
		printf("%s\n", fd);
		miniGermanNummer_choice();
		
		//printf("\n\t  Back to menu ?\n");
		exit(0);
		}
}

void miniGermanNummer_choice()
{
	int choices;
	printf("\n\t  -Program End-\n");
	printf("\n\t  1. Repeat");
	printf("\n\t  2. Exit\n");
	scanf(" %d", &choices);
	if (choices==1)
	{
		system("clear");
		miniGerman();
	}
	else if (choices==2)
	{
		system("exit");
	}
	else
	{
		printf("\n\t  Insert input\n");
		system("clear");
		miniGermanNummer_choice();
	}
}
