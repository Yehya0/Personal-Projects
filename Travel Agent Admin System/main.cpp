//
//  main.cpp
//  Travel Agent Admin System
//
//  Created by Yehya Altamimi on 4/30/22.
//

#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;


void menu();//main menu function prototype

class ManageMenu
{
protected:
    
    string userName; //hide admin name
 
public:

    //virtual void menu(){}

    ManageMenu()
    {
        cout << "\n\n\n\t  Enter Your Name to Continue as an Admin: ";
        cin >> userName;
        menu(); //call to main function to load after executing the constructor
    }

    ~ManageMenu(){}
};

class Customer {
    
public:
    string name, gender, address;
    int age, mobileNo, menuBack;
    static int cusID;
    char all[999];

    void getDetails()
    {
        ofstream out("old-customers.txt", ios::app); //open file using append mode to write customer details
        {
            cout << "\nEnter Customer ID: ";
            cin >> cusID;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter Mobile Number: ";
            cin >> mobileNo;
            cout << "Address: ";
            cin >> address;
            cout << "Gender: ";
            cin >> gender;
        }
        out << "\nCustomer ID: " << cusID << "\nName: " << name << "\nAge: " << age << "\nMobile Number: " << mobileNo << "\nAddress: " << address << "\nGender: " << gender << endl;
        out.close();
        cout << "\nSaved \nNOTE: We save your details record for future purposes.\n" << endl;
    }
    void showDetails() //function to show old customer records
    {
        ifstream in("old-customers.txt");
        {
            if(!in)
            {
                cout << "File Error!" << endl;
            }
            while(!(in.eof()))
            {
                in.getline(all, 999);
                cout << all << endl;
            }
            in.close();
        }
    }
};

int Customer::cusID;

class Booking {
    
public:
    int hotelChoice;
    int packChoice;
    int goToMenu;
    static float hotelCost;
    
    void hotel() {
        
        string hotels[] = {"Skyhigh", "livBy", "Alexander"};
        for (int i = 0; i < 3; i++)
            {
                cout << (i+1) <<". Hotel " << hotels[i] << endl;
            }
        
        cout << "\n We are in collaboration with the above hotels!" << endl;
        cout << "Press any key to return or \n Enter the number for hotels to book: ";
        cin >> hotelChoice;
        
        if (hotelChoice == 1) {
            
            cout << "-----------WELCOME TO HOTEL SKYHIGH-----------\n" << endl;
            cout << "Four storied hotel with 255 exclusive guest rooms are furnished with a range of modern amenities such as television and internet access. Comfortable rooms and suites overlook lush gardens with panoramic views." << endl;
            
            cout << "Packages offered by Skyhigh:\n" << endl;
            
            cout << "1. Bronze Package" << endl;
            cout << "\t Basic Facilities: $100 per night" << endl;
            cout << "2. Silver Package" << endl;
            cout << "\t Premium Facilities: $200 per night" << endl;
            cout << "3. Gold Package" << endl;
            cout << "\t Luxury Facilities: $300 per night" << endl;
            
            cout << "\n Press any key to go back or \nEnter package number you want to book: ";
            cin >> packChoice;
            
            if (packChoice == 1) {
                hotelCost = 100.00;
                cout << "\nBronze Package successfully booked at Skyhigh hotel" << endl;
                cout << "Go to Menu and take the recipt" << endl;
                
            }
            
            else if (packChoice == 2){
                hotelCost = 200.00;
                cout << "\nSilver Package successfully booked at Skyhigh hotel" << endl;
                cout << "Go to Menu and take the recipt" << endl;
                
            }
            
            else if (packChoice == 3){
                hotelCost = 300.00;
                cout << "\nGold Package successfully booked at Skyhigh hotel" << endl;
                cout << "Go to Menu and take the recipt" << endl;
            }
            
            else {
                cout << "Input Error....redirecting to previous menu" << endl;
               hotel();
            }
            cout << "\nPress 1 to redirect to main menu: ";
            cin >> goToMenu;
            if(goToMenu == 1) {
                menu();
        }
            else {
                menu();
            }
        
        
        if (hotelChoice == 2) {
            
            cout << "-----------WELCOME TO HOTEL LIVBY-----------\n" << endl;
            cout << "Free Wifi | Fitness Center | Free Breakfast| Resort." << endl;
            
            cout << "Packages offered by Livby:\n" << endl;
            
            cout << "1. Single Pack" << endl;
            cout << "\t 1 King Bed: $110 per night" << endl;
            cout << "2. Couple Pack" << endl;
            cout << "\t 2 Queen Beds: $220 per night" << endl;
            cout << "3. Family Pack" << endl;
            cout << "\t 2 Queen & 1 King size Bed: $330 per night" << endl;
            
            cout << "\n Press any key to go back or \nEnter package number you want to book: ";
            cin >> packChoice;
            
            if (packChoice == 1) {
                hotelCost = 110.00;
                cout << "\nSingle Package successfully booked at livby hotel" << endl;
                cout << "Go to Menu and take the recipt" << endl;
                
            }
            
            else if (packChoice == 2){
                hotelCost = 220.00;
                cout << "\nCouple Package successfully booked at Livby hotel" << endl;
                cout << "Go to Menu and take the recipt" << endl;
                
            }
            
            else if (packChoice == 3){
                hotelCost = 330.00;
                cout << "\nFamily Package successfully booked at Livby hotel" << endl;
                cout << "Go to Menu and take the recipt" << endl;
            }
            else {
                cout << "Input Error....redirecting to previous menu" << endl;
                hotel();
            }
            
            cout << "\nPress 1 to redirect to main menu: ";
            cin >> goToMenu;
            if (goToMenu == 1) {
                menu();
           }
            else {
                menu();
            }
            
        }
           else if (hotelChoice == 3) {
                
                cout << "-----------WELCOME TO HOTEL ALEXANDER-----------\n" << endl;
                cout << "Tropical Resort Hotel With Luxurious Views ." << endl;
                
                cout << "Packages offered by Livby:\n" << endl;
                
                cout << "1. Single Pack" << endl;
                cout << "\t 1 King Bed: $110 per night" << endl;
                cout << "2. Couple Pack" << endl;
                cout << "\t 2 Queen Beds: $220 per night" << endl;
                cout << "3. Family Pack" << endl;
                cout << "\t 2 Queen & 1 King size Bed: $330 per night" << endl;
                
                cout << "\n Press any key to go back or \nEnter package number you want to book: ";
                cin >> packChoice;
                
                if (packChoice == 1) {
                    hotelCost = 110.00;
                    cout << "\nSingle Package successfully booked at livby hotel" << endl;
                    cout << "Go to Menu and take the recipt" << endl;
                    
                }
                
                else if (packChoice == 2){
                    hotelCost = 220.00;
                    cout << "\nCouple Package successfully booked at Livby hotel" << endl;
                    cout << "Go to Menu and take the recipt" << endl;
                    
                }
                
                else if (packChoice == 3){
                    hotelCost = 330.00;
                    cout << "\nFamily Package successfully booked at Livby hotel" << endl;
                    cout << "Go to Menu and take the recipt" << endl;
                }
                else {
                    cout << "Input Error....redirecting to previous menu" << endl;
                    hotel();
                }
                
                cout << "\nPress 1 to redirect to main menu: ";
                cin >> goToMenu;
                
                if (goToMenu == 1) {
                    menu();
               }
                else {
                    menu();
                }
           }
           else {
               cout << "Invalid Input! Redirecting to Previous Menu!" << endl;
               menu();
           }
            
       }
        
   }
    
};

float Booking::hotelCost;


class Cabs {

public:
    
    int cabChoice;
    int miles;
    float cabCost;
    static float lastCabCost;
    
    void cabDetails() {
        
        cout << "We've collaborated with the safest and most cost efficient cab service in the area!" << endl;
        cout << "-------------Alta Cabs-------------\n" << endl;
        cout << "1. Standard Cab - $1.60 per mile " << endl;
        cout << "2. Luxury Cab - $2.70 per mile " << endl;
        
        cout << "\nWhich cab will you be using for your journey today? " << endl;
        cout << "Enter cab choice '1' for standard or '2' for luxury: ";
        cin >> cabChoice;
        cout << "Enter your distance in miles: ";
        cin >> miles;
        
        int hireCab;
        
        if (cabChoice == 1) {
            
            cabCost = miles * 1.6;
            cout << "Your total will be: $ " << cabCost << " for a standard cab." << endl;
            cout << "Enter 1 to hire this cab: or ";
            cout << "Enter 2 to select a different cab: ";
            cin >> hireCab;
            
            
            if (hireCab == 1) {
                lastCabCost = cabCost;
                cout << "Your Standard Cab has been confirmed!" << endl;
                cout << "Refer to the menu to see your recipt." << endl;
            }
            else if (hireCab == 2) {
                
                cabDetails();
            }
            else {
                
                cout << "Input Error....redirecting to previous menu." << endl;
                cabDetails();
            }
        }
        
        else if (cabChoice == 2) {
            
            cabCost = miles * 2.7;
            cout << "Your total will be: $ " << cabCost << " for a luxury cab." << endl;
            cout << "Enter 1 to hire this cab: or ";
            cout << "Enter 2 to select a different cab: ";
            cin >> hireCab;
                        
            if (hireCab == 1) {
                lastCabCost = cabCost;
                cout << "Your Standard Cab has been confirmed!" << endl;
                cout << "Refer to the menu to see your recipt." << endl;
            }
            else if (hireCab == 2) {
                
                cabDetails();
            }
            else {
                
                cout << "Input Error....redirecting to previous menu." << endl;
                //causes program to suspend for seconds
                cabDetails();
            }
        }
        
        else {
        cout << "Input Error....redirecting to main menu." << endl;
        //causes program to suspend for seconds
        menu();
       }
        
        cout << "Press 1 to redirect to Main menu: ";
        cin >> hireCab;
        if (hireCab == 1) {
            menu();
        }
        else {
            menu();
        }
        
    }
    
};

float Cabs::lastCabCost;
    
class Charges : public Booking, Cabs, Customer
// creates a class that uses inheritance to include the charges and price totals from previous classes
{
public:
    void printBill()
       {
           ofstream outf("receipt.txt"); //receipt for bought items
           {
               outf << "--------ALTA Travel Agency--------" << endl;
               outf << "-------------Receipt-------------" << endl;
               outf << "_________________________________" << endl;

               outf << "Customer ID: " << Customer::cusID << endl << endl;
               outf << "Description\t\t Total" << endl;
               outf << "Hotel cost:\t\t " << fixed << setprecision(2) << Booking::hotelCost << endl;
               outf << "Travel (cab) cost:\t " << fixed << setprecision(2) << Cabs::lastCabCost << endl;

               outf << "_________________________________" << endl;
               outf << "Total Charge:\t\t " << fixed << setprecision(2) << Booking::hotelCost+Cabs::lastCabCost << endl;
               outf << "_________________________________" << endl;
               outf << "------------THANK YOU------------" << endl;
           }
           outf.close();
           //cout << "Your receipt printed, please get it from the file saved path:D" << endl;
       }
    
    void showBill()
        {
            ifstream inf("receipt.txt");
            {
                if(!inf)
                {
                    cout << "File Error!" << endl;
                }
                while(!(inf.eof())) // prints file
                {
                    inf.getline(all, 999);
                    cout << all << endl;
                }
            }
            inf.close();
        }
    
};
    
void menu() //menu function contain main menu
    {

        int mainChoice;
        int inChoice;
        int gotoMenu;
        cout << "\t\t      * ALTA Travels *\n" << endl;
        cout << "-------------------------Main Menu--------------------------" << endl;

        cout << "\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
        cout << "\t|\t\t\t\t\t|" << endl;
        cout << "\t|\tAgency System Management" << endl;
        cout << "\t|\tCustomer Management -> 1\t|" << endl;
        cout << "\t|\tCabs Management     -> 2\t|" << endl;
        cout << "\t|\tBookings Management -> 3\t|" << endl;
        cout << "\t|\tCharges & Bill      -> 4\t|" << endl;
        cout << "\t|\tExit                -> 5\t|" << endl;
        cout << "\t|\t\t\t\t\t|" << endl;
        cout << "\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|" << endl;

        cout << "\nEnter Choice: ";
        cin >> mainChoice;


        Customer a2; //creating objects for classes
        Cabs a3;
        Booking a4;
        Charges a5;

    
        if(mainChoice == 1){
            cout << "------Customers------\n" << endl;
            cout << "1. Enter New Customer"<< endl;
            cout << "2. See Old Customers"<< endl;

            cout << "\nEnter choice: ";
            cin >> inChoice;

            if(inChoice == 1){
                a2.getDetails();
            }
            else if(inChoice == 2){
                a2.showDetails();
            }
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                menu();
            }
            cout << "Press 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            if(gotoMenu == 1){
                menu();
            }
            else{
                menu();
            }
        }
        else if(mainChoice == 2){
            a3.cabDetails();
        }
        else if(mainChoice == 3){
            cout << "--> Book a Luxury Hotel using the System <--\n" << endl;
            a4.hotel();
        }
        else if(mainChoice == 4){
            cout << "-->Get your receipt<--\n" << endl;
            a5.printBill();
            cout << "Your receipt is already printed you can get it from file path\n" << endl;
            cout << "to display the your receipt in the screen, Enter 1: or Enter another key to back main menu: ";
            cin >> gotoMenu;
            if(gotoMenu == 1){
                a5.showBill();
                cout << "Press 1 to Redirect Main Menu: ";
                cin >> gotoMenu;
                if(gotoMenu == 1){
                    menu();
                }
                else {
                    menu();
                }
            }
            else{
                menu();
            }
        }
        else if(mainChoice == 5){
            cout << "\n\n\t--GOOD-BYE!--" << endl;
            ManageMenu();
        }
        else{
            cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
            menu();
        }
    }



int main() {

    
    ManageMenu startObj;
    
    return 0;
    
    
}
