#include <iostream>
#include "Utilities.h"
#include <string>
#include <cctype>
#include <fstream>


using namespace std;
int intelP() {
{
	string line;
	ifstream myfile("intelprocessors.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
		system("pause");
		myfile.close();
	}

	else cout << "Unable to open file";

	return 0;
}
}

int amdP()
{
	{
		string line;
		ifstream myfile("amdprocessors.txt");
		if (myfile.is_open())
		{
			while (getline(myfile, line))
			{
				cout << line << '\n';
			}
			system("pause");
			myfile.close();
		}

		else cout << "Unable to open file";

		return 0;
	}
}
void manufacturerInv()
{
	char selection;

	do
	{
		system("Color 57");
		system("CLS");
		gotoxy(50, 9);
		cout << " Manufacturer\n";
		gotoxy(50, 10);
		cout << " ====================================\n";
		gotoxy(50, 11);
		cout << " 1.Intel Processor List\n";
		gotoxy(50, 12);
		cout << " 2. AMD Processor List\n";
		gotoxy(50, 13);
		cout << " 3. Back to the Main Menu.\n";
		gotoxy(50, 15);
		cout << " ====================================\n";
		gotoxy(50, 16);
		cout << " Please select an option from above: ";
		cin >> selection;
		cout << endl;

		switch (selection)
		{
		case '1':
			intelP();
			break;

		case '2':
			amdP();
			break;
		case '3':
			return;

		default: cout << selection << " is not a valid menu item.\n";

			cout << endl;
		}

	} while (selection != 3);

	// Case selection with Intel / AMD parts which will bring up a list of all the current parts that are listed in a .txt file.
}

void invPart()
{
	// Case selection that brings up different cases, you'll select to display all parts by type. (i.e : Motherboards, CPUS, PSUs, GPUs, etc.)
}

void partRequest()
{
	// Place where you'll be prompted to enter which part you'd like to see in the store, requesting manufacturer type, email for when it has arrived, etc. (Use common sense if you're working this spot)
}

void inventoryMenu() // For the Inventory
{

	char selection;

	do
	{
		system("Color 57");
		system("CLS");
		gotoxy(50, 9);
		cout << " Inventory Menu\n";
		gotoxy(50, 10);
		cout << " ====================================\n";
		gotoxy(50, 11);
		cout << " 1. Inventory by manufacturer\n";
		gotoxy(50, 12);
		cout << " 2. Inventory by Part Type\n";
		gotoxy(50, 13);
		cout << " 3. Parts request form.\n";
		gotoxy(50, 14);
		cout << " 4. Back to The Main Menu.\n";
		gotoxy(50, 15);
		cout << " ====================================\n";
		gotoxy(50, 16);
		cout << " Please select an option from above: ";
		cin >> selection;
		cout << endl;

		switch (selection)
		{
		case '1':
			manufacturerInv();
			break;

		case '2':
			invPart();
			break;
		case '3':
			partRequest();
			break;

		case '4':
			return;

		default: cout << selection << " is not a valid menu item.\n";

			cout << endl;
		}

	} while (selection != 4);

}

void transDate()
{

}

void transWeek()
{

}

void transMonth()
{

}

void transactions()
{
	system("Color 2B");
	system("CLS");
	gotoxy(50, 9);
	cout << "***************************************************************" << endl;
	gotoxy(50, 10);
	cout << "*                                                             *" << endl;
	gotoxy(50, 11);
	cout << "*                                                             *" << endl;
	gotoxy(50, 12);
	cout << "*                                                             *" << endl;
	gotoxy(50, 13);
	cout << "*                      Transactions                           *" << endl;
	gotoxy(50, 14);
	cout << "*                                                             *" << endl;
	gotoxy(50, 15);
	cout << "*                                                             *" << endl;
	gotoxy(50, 16);
	cout << "*                                                             *" << endl;
	gotoxy(50, 17);
	cout << "***************************************************************" << endl;
	gotoxy(50, 18);
	system("PAUSE");

	char selection;

	do
	{
		system("Color 9A");
		system("CLS");
		gotoxy(50, 9);
		cout << " Transactions\n";
		gotoxy(50, 10);
		cout << " ====================================\n";
		gotoxy(50, 11);
		cout << " 1. Transactions by day\n";
		gotoxy(50, 12);
		cout << " 2. Transaction by week\n";
		gotoxy(50, 13);
		cout << " 3. Transactions by Month.\n";
		gotoxy(50, 14);
		cout << " 4. Back to The Main Menu.\n";
		gotoxy(50, 15);
		cout << " ====================================\n";
		gotoxy(50, 16);
		cout << " Please select an option from above.: ";
		cin >> selection;
		cout << endl;

		switch (selection)
		{
		case '1':
			transDate();
			break;

		case '2':
			transWeek();
			break;
		case '3':
			transMonth();
			break;

		case '4':
			return;

		default: cout << selection << " is not a valid menu item.\n";

			cout << endl;
		}

	} while (selection != 4);



}

void contactUs()
{
	cout << "If you would like to reach us, Email us at JacobMittAnthony@C++Daddy.gov \n";
	cout << "or you can call us at 1-800-169-6996\n";
	system("PAUSE");
}

int writeReview(){
{
	string reviewans1, reviewans2;

	ofstream myfile("reviews.txt");
	if (myfile.is_open())
	{
		cout << "Thank you for taking your time to write a review, just a few questions and you'll be right on your way!" << endl;
		cout << "Question 1: On a scale of 1 to 5, how would you rate our store?" << endl;
		cin >> reviewans1;
		myfile << reviewans1;
		cout << "Thank you! Question 2: Was there any specific part of our store you didn't enjoy or would like to see improved?" << endl;
		cin >> reviewans2;
		myfile << reviewans2;
		cout << "Thanks again, and lastly, have a great day!" << endl;
		myfile.close();
	}
	else cout << "Unable to open file";
	return 0;
}
}
int readReview()
{
	{
		string line;
		ifstream myfile("review.txt");
		if (myfile.is_open())
		{
			while (getline(myfile, line))
			{
				cout << line << '\n';
			}
			system("pause");
			myfile.close();
		}

		else cout << "Unable to open file";

		return 0;
	}
}

void customerSupport()
{
	system("Color 1B");
	system("CLS");
	gotoxy(50, 9);
	cout << "***************************************************************" << endl;
	gotoxy(50, 10);
	cout << "*                                                             *" << endl;
	gotoxy(50, 11);
	cout << "*                                                             *" << endl;
	gotoxy(50, 12);
	cout << "*                                                             *" << endl;
	gotoxy(50, 13);
	cout << "*                     Customer Support                        *" << endl;
	gotoxy(50, 14);
	cout << "*                                                             *" << endl;
	gotoxy(50, 15);
	cout << "*                                                             *" << endl;
	gotoxy(50, 16);
	cout << "*                                                             *" << endl;
	gotoxy(50, 17);
	cout << "***************************************************************" << endl;
	gotoxy(50, 18);
	system("PAUSE");

	char selection;

	do
	{
		system("Color 9A");
		system("CLS");
		gotoxy(50, 9);
		cout << " Customer Support Menu\n";
		gotoxy(50, 10);
		cout << " ====================================\n";
		gotoxy(50, 11);
		cout << " 1. Contact Us!\n"; // Displays Dummy Contact Information
		gotoxy(50, 12);
		cout << " 2. Leave us a review\n"; //Writes some text to file after being prompted by XYZ.
		gotoxy(50, 13);
		cout << " 3. Read other reviews.\n"; //Displays some text (Dummy Reviews)
		gotoxy(50, 14);
		cout << " 4. Back to The Main Menu.\n";
		gotoxy(50, 15);
		cout << " ====================================\n";
		gotoxy(50, 16);
		cout << " Please select an option from above: ";
		cin >> selection;
		cout << endl;

		switch (selection)
		{
		case '1':
			contactUs();
			break;

		case '2':
			writeReview();
			break;
		case '3':
			readReview();
			break;

		case '4':
			return;

		default: cout << selection << " is not a valid menu item.\n";

			cout << endl;
		}

	} while (selection != 4);



}

void applicationFill()
{

}

void submittedApp()
{

}

void jobDescription()
{

}

void application()
{
	system("Color 2B");
	system("CLS");
	gotoxy(50, 9);
	cout << "***************************************************************" << endl;
	gotoxy(50, 10);
	cout << "*                                                             *" << endl;
	gotoxy(50, 11);
	cout << "*                                                             *" << endl;
	gotoxy(50, 12);
	cout << "*                                                             *" << endl;
	gotoxy(50, 13);
	cout << "*                       Application Menu                      *" << endl;
	gotoxy(50, 14);
	cout << "*                                                             *" << endl;
	gotoxy(50, 15);
	cout << "*                                                             *" << endl;
	gotoxy(50, 16);
	cout << "*                                                             *" << endl;
	gotoxy(50, 17);
	cout << "***************************************************************" << endl;
	gotoxy(50, 18);
	system("PAUSE");

	char selection;

	do
	{
		system("Color 9A");
		system("CLS");
		gotoxy(50, 9);
		cout << " Application Menu\n";
		gotoxy(50, 10);
		cout << " ====================================\n";
		gotoxy(50, 11);
		cout << " 1. Fill out an application!\n"; // Text / Prompts / Write to application file (Do a "ARE YOU SURE YOU WANT TO SUBMIT THIS? if statement)
		gotoxy(50, 12);
		cout << " 2. View Submitted Application \n"; //Check application file, display something like " Application > Date submitted > expected turnaround time?.
		gotoxy(50, 13);
		cout << " 3. Position Descriptions.\n"; //Case selection asking to see what position you want to see, their average salary and expected duties as said role.
		gotoxy(50, 14);
		cout << " 4. Back to The Main Menu.\n";
		gotoxy(50, 15);
		cout << " ====================================\n";
		gotoxy(50, 16);
		cout << " Please select an option from above: ";
		cin >> selection;
		cout << endl;

		switch (selection)
		{
		case '1':
			contactUs();
			break;

		case '2':
			writeReview();
			break;
		case '3':
			readReview();
			break;

		case '4':
			return;

		default: cout << selection << " is not a valid menu item.\n";

			cout << endl;
		}

	} while (selection != 4);

}

int aboutUsText()
{
	string line;
	ifstream myfile("aboutus.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
		system("pause");
		myfile.close();
	}

	else cout << "Unable to open file";

	return 0;
}

int ceo()
{
	string line;
	ifstream myfile("ceo.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
		system("pause");
		myfile.close();
	}

	else cout << "Unable to open file";

	return 0;
}

void aboutUs()
{
	char selection;

	do
	{
		system("Color 9A");
		system("CLS");
		gotoxy(50, 9);
		cout << " About us\n";
		gotoxy(50, 10);
		cout << " ====================================\n";
		gotoxy(50, 11);
		cout << " 1. About us!\n"; 
		gotoxy(50, 12);
		cout << " 2. A picture of the current CEO. \n";
		gotoxy(50, 13);
		cout << " 3. Back to the Main Menu. \n";
		gotoxy(50, 14);
		cout << " ====================================\n";
		gotoxy(50, 15);
		cout << " Please select an option from above: ";
		cin >> selection;
		cout << endl;

		switch (selection)
		{
		case '1':
			aboutUsText();
			break;
		case '2':
			ceo();
			break;
	case '3':
			return;

		default: cout << selection << " is not a valid menu item.\n";

			cout << endl;
		}

	} while (selection != 2);

}


void mainMenu()
{


	char selection;

	do
	{
		system("Color 1A");
		system("CLS");
		gotoxy(50, 9);
		cout << " Welcome to Computers Unlimited!\n";
		gotoxy(50, 10);
		cout << " ====================================\n";
		gotoxy(50, 11);
		cout << " 1. Inventory\n"; // STATUS : Incomplete, Need to fix formatting. 
		gotoxy(50, 12);
		cout << " 2. Transactions Menu\n"; // STATUS : Incomplete, secondary menus need to be added, supplementary text files, etc.
		gotoxy(50, 13);
		cout << " 3. Customer Support\n";  // STATUS : Incomplete, secondary menus need to be added, supplementary text files, etc.
		gotoxy(50, 14);
		cout << " 4. Apply for a Job\n"; // STATUS : Incomplete, secondary menus need to be added, supplementary text files, etc.
		gotoxy(50, 15);
		cout << " 5. About Us!\n";
		gotoxy(50, 16);
		cout << " 6. Exit.\n";
		gotoxy(50, 17);
		cout << " ====================================\n";
		gotoxy(50, 18);
		cout << " Please select an option from above: ";
		cin >> selection;
		cout << endl;

		switch (selection)
		{
		case '1':
			inventoryMenu();
			break;

		case '2':
			transactions();
			break;
		case '3':
			customerSupport();
			break;

		case '4':
			application();
			break;
		case '5':
			aboutUs();
			break;
		case '6':
			cout << "Goodbye.\n";
			return;

		default: cout << selection << " is not a valid menu item.\n";

			cout << endl;
		}

	} while (selection != 6);


}

