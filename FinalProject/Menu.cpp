#include <iostream>  // Libraries that are used in the project.
#include "Utilities.h"
#include <string>
#include <cctype>
#include <fstream>


using namespace std; // Used in order to save time typing STD, etc.
int intelP() {  // This function is a submenu of the inventory menu and is used to pull up the list of intel parts the store carries. 
{
	string line;   // This method allows us to open the text file in order to view the list of the parts.
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

int amdP()// This is the function that allows us to see the list of AMD parts we offer. The same method is used in the intel menu in order to retrieve the text list.
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
void manufacturerInv() // This is the menu for the inventory that the store carries.
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



void partRequest() // This allows the user to enter their information that will be used to request special parts that aren't currently in the store / in stock.
{
	int sel1, sel2;
	int reqNum = 0;
	string fName, lName, manu, pName;

	ofstream myfile; // We use this to give the user some context of what they need to do in order to fill out the form.
	cout << "Hello there! Welcome to the parts request form, if you'd like to begin please enter either 1 for yes or 2 to go back to the main menu." << endl;
	cin >> sel1;
	if (sel1 == 1) // We found it best to use an if loop here, while there are other loops and methods to be used, this seemed to be the most straightforward at our level of understanding.
	{

		myfile.open("partsReq.txt" ,ofstream::app); // This just goes through the questions for the form. The :app is used so that it can store multiple user's information.
		cout << "Thanks for using the form. To start I would need your first and last name." << endl;
		cout << "Please enter your first name:" << endl;
		cin >> fName;
		cout << "Thank you and now your last name." << endl;
		cin >> lName;
		cout << "Thank you, and now, which manufactuerer were you looking to order from?" << endl;
		cin >> manu;
		cout << "We work with " << manu << " all the time, we'll have no troubles special ordering your part for you. What's the name of the part specifically?" << endl;
		cin >> pName;
		cout << "Lastly, please check over the information for any errors." << endl;
		cout << "First Name: " << fName << endl;
		cout << "Last  Name: " << lName << endl;
		cout << "Manufacturer: " << manu << endl;
		cout << "Part Name: " << pName << endl;

		cout << "If everything is correct, please type 1 or 2 if it's incorrect." << endl;
		cin >> sel2;
		if (sel2 == 1){ // Could have used something that evaluated just true or false, but again, the if statement seemed to be the winner here.
			
			
			myfile << "--------------------------------" << endl;
			myfile << "First Name: " << fName << endl;
			myfile << "Last  Name: " << lName << endl;
			myfile << "Manufacturer: " << manu << endl;
			myfile << "Part Name: " << pName << endl;
			myfile << "--------------------------------" << endl;
			myfile << " " << endl;
			myfile.close(); // Closes the file and allows the user to go back to the main menu.

			cout << "Thank you for ordering with us today, " << fName << " have a great day!" << endl;
		}
		else if (sel2 == 2)
		{
			cout << "We're sorry, let's try that again." << endl;
			partRequest();
		}
		
		system("pause");

	} 

	
	
	



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
		cout << " 2. Parts request form.\n";
		gotoxy(50, 13);
		cout << " 3. Back to The Main Menu.\n";
		gotoxy(50, 14);
		cout << " ====================================\n";
		gotoxy(50, 15);
		cout << " Please select an option from above: ";
		cin >> selection;
		cout << endl;

		switch (selection)
		{
		case '1':
			manufacturerInv();
			break;

		case '2':
			partRequest();
			break;
		

		case '3':
			return;

		default: cout << selection << " is not a valid menu item.\n";

			cout << endl;
		}

	} while (selection != 3);

}

int transDate() // Cleanup : Change to "trans to represent it just being an overall transaction log. 
{
	string line;
	ifstream myfile("transactions.txt");
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

void transWeek() // DELETE
{

}

void transMonth() // DELETE
{

}

void transactions() // The transactions menu allows the user to check all of the transactions that have occured over a specific amount of time.
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

void contactUs() // This primarily serves as a way of contacting the main offices at C++ Daddy INC.
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

void applicationFill() // Jake Fill
{

}

void submittedApp()  // Jake The Snake
{

}

void jobDescription() // Snake the Jake
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

