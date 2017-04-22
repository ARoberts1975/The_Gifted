#include <iostream>
#include <string>
#include "tgpro.h"
#include "tgone.h"
#include "tgtwo.h"
#include "tgthree.h"
#include "tgfour.h"
#include "tghis.h"

using namespace std;

int tgmenu()
{
string choice;

system ("cls");
cout << "                                  The Gifted Menu\n" << endl;
cout << "Choose from one of the below...\n" << endl;
cout << "1: Prologue" << endl;
cout << "2: Chapter 1" << endl;
cout << "3: Chapter 2" << endl;
cout << "4: Chapter 3" << endl;
cout << "5: Chapter 4" << endl;
cout << "6: Chapter 5\n\n\n\n" << endl;
cout << "H: History." << endl;
cout << "Q: Quit\n\n\n\n\n\n\n\n\n" << endl;
cout << "Choose... ";
cin >> choice;

	if (choice=="1")
	{
		tgpro();
	}

	else if (choice=="2")
	{
		tgone();
	}

	else if (choice=="3")
	{
		tgtwo();
	}

	else if (choice=="4")
	{
		tgthree();
	}

	else if (choice=="5")
	{
		tgfour();
	}

	else if (choice=="H")
	{
		tghis();
	}

	else if (choice=="h")
	{
		tghis();
	}

	else if (choice=="Q")
	{
		return 0;
	}

	else if (choice=="q")
	{
		return 0;
	}

	else
	{
		system ("cls");
		cout << "Sorry, that is not a valid choice" << endl;
		system ("pause");
		tgmenu();
	}
return 0;
}
