#include <iostream>
#include <tuple>
#include <fstream>
#include <conio.h>
#include <time.h>
using namespace std;
// Registration fuction called
// Funciton prototype
void login();
void registration();
void forgot();
// file create
ofstream objFile("file.txt", ios::out | ios::app);

// Utility Gass Code :
tuple<string, string, string, string, string, int, int, int> foo()
{

    int random_number, check_otp;

    string userName, District, Division, currentPlace, paymentname;
    int taka, phoneNumber, pay, paymentNumber;
    cout << "\t\t Please Enter Your infomation : " << endl
         << endl;
    cout << "Enter your name : ";
    cin >> userName;
    cout << "District : ";
    cin >> District;
    cout << "Division : ";
    cin >> Division;
    cout << "Current Place : ";
    cin >> currentPlace;
    cout << "Please select your payment method : " << endl;
    cout << "1. bKash ." << endl
         << "2. Nagad." << endl
         << "3. Rocket " << endl;
    cin >> pay;

    if (pay == 1)
    {
        paymentname = "bKash ";
    }
    else if (pay == 2)
    {
        paymentname = "Nagad";
    }
    else
    {
        paymentname = "Rocket ";
    }
    cout << "Enter your phone number : ";
    cin >> phoneNumber;
    cout << "Payment " << paymentname << " Number : ";
    cin >> paymentNumber;

    srand(time(0));

    for (int i = 0; i < 1; i++)
    {
        random_number = rand();
    }
    cout << "OTP : " << random_number << endl;
    cout << "If your want to pay the bill." << endl
         << "Please enter OTP : ";
    cin >> check_otp;
    if (random_number == check_otp)
    {
        cout << "Enter your amount : ";
        cin >> taka;
        return {userName, District, Division, currentPlace, paymentname, taka, phoneNumber, paymentNumber};
    }
    else
    {

        cout << "Your OTP is not Correct! Please Try Again." << endl;
    }

    system("cls");
}

class UtilityGass
{
public:
    string gassName, paymentname, userName, District, Division, currentPlace;
    int phoneNumber, paymentNumber, transitionId, taka;
    void setValue(string gasName, string u, string d, string div, string c, string p, int t)
    {

        userName = u;
        District = d;
        Division = div;
        gassName = gasName;
        paymentname = p;

        currentPlace = c;
        taka = t;
    }
    void setValue2(int ph, int pmn)
    {
        phoneNumber = ph;
        paymentNumber = pmn;
    }
};

class Gsss : public UtilityGass
{
public:
    void displayTitash(void)
    {
        cout << endl
             << "***************************************************************" << endl
             << endl;
        cout << "\t \t Cash Receipt" << endl
             << endl;
        cout << gassName << endl
             << endl;
        cout << "Name: " << userName << endl;
        // cout << "Your District is : " << District << endl;
        // cout << "Your Division is : " << Division << endl;
        // cout << "Your current place is : " << currentPlace << endl;

        cout << "Amount: " << taka << endl;
        cout << "Payment Method : " << paymentname << endl;
        cout << "Phone Number : " << phoneNumber << endl
             << endl;
        cout << "\t \t Your payment has been confirmed." << endl
             << endl;
        cout << endl
             << "***************************************************************" << endl;

        // file
        objFile << gassName << endl
                << endl;
        objFile << "Your name is : " << userName << endl;
        objFile << "Your District is : " << District << endl;
        objFile << "Your Division is : " << Division << endl;
        objFile << "Your current place is : " << currentPlace << endl;
        objFile << paymentname << endl;
        objFile << "Phone Number : " << phoneNumber << endl;
        objFile << "Payment Number : " << paymentNumber << endl;
    }
};

// Water Bill Code:
tuple<string, string, string, string, string, int, int, int, int, int> foo2()
{
    int random_number, check_otp;
    string userName, District, Division, currentPlace, paymentname;
    int bill_no, account_no, amount, payment_number;
    int phoneNumber, paymentNumber, pay;
    cout << "\t\t Please Enter Your Information. " << endl
         << endl;
    cout << "Enter your name : ";
    cin >> userName;
    cout << "District : ";
    cin >> District;
    cout << "Division : ";
    cin >> Division;
    cout << "current Place : ";
    cin >> currentPlace;
    cout << "Please select your payment method : " << endl;
    cout << "1. bKash ." << endl
         << "2. Nagad." << endl
         << "3. Rocket " << endl;
    cin >> pay;
    if (pay == 1)
    {
        paymentname = "bKash ";
    }
    else if (pay == 2)
    {
        paymentname = "Nagad";
    }
    else
    {
        paymentname = "Rocket";
    }
    cout << "Enter your phone number : ";
    cin >> phoneNumber;
    cout << "Payment " << paymentname << " Number : ";
    cin >> paymentNumber;
    cout << "Your WASA Bill No : ";
    cin >> bill_no;
    cout << "Your WASA Account No : ";
    cin >> account_no;
    cout << "Amount : ";
    cin >> amount;
    srand(time(0));

    for (int i = 0; i < 1; i++)
    {
        random_number = rand();
    }
    cout << "OTP : " << random_number << endl;
    cout << "If your want to pay the bill." << endl
         << "Please enter OTP : ";
    cin >> check_otp;
    if (random_number == check_otp)
    {

        return {userName, District, Division, currentPlace, paymentname, phoneNumber, paymentNumber, bill_no, account_no, amount};
    }
    else
    {

        cout << "Your OTP is not Correct! Please Try Again." << endl;
    }

    system("cls");
}
class WaterBillBase
{
public:
    string userName, District, Division, currentPlace, paymentname;
    int phoneNumber, paymentNumber, bill_no, account_no, amount;
    void setWaterBill(string userName, string District, string Division, string currentPlace, string paymentname, int phoneNumber, int paymentNumber, int bill_no, int account_no, int amount)
    {
        this->userName = userName;
        this->District = District;
        this->Division = Division;
        this->currentPlace = currentPlace;
        this->paymentname = paymentname;
        this->phoneNumber = phoneNumber;
        this->phoneNumber = phoneNumber;
        this->bill_no = bill_no;
        this->account_no = account_no;
        this->amount = amount;
    }
};
class WaterBill : public WaterBillBase
{
public:
    void displayWaterBill(void)
    {
        cout << endl
             << "***************************************************************" << endl
             << endl;
        cout << "\t \t Cash Receipt" << endl
             << endl;
        cout << "Name: " << userName << endl;
        // cout << "Your District is : " << District << endl;
        // cout << "Your Division is : " << Division << endl;
        // cout << "Your current place is : " << currentPlace << endl;
        cout << "Payment Method : " << paymentname << endl;
        cout << "Phone Number : " << phoneNumber << endl;
        // cout << "Payment Number : " << paymentNumber << endl;
        cout << "WASA Bill No : " << bill_no << endl;
        cout << "WASA Account No : " << account_no << endl;
        cout << "Amount : " << amount << endl;
        cout << "\t \t Your payment has been confirmed." << endl
             << endl;
        cout << endl
             << "***************************************************************" << endl;
        // file
        objFile << "Your name is : " << userName << endl;
        objFile << "Your District is : " << District << endl;
        objFile << "Your Division is : " << Division << endl;
        objFile << "Your current place is : " << currentPlace << endl;
        objFile << paymentname << endl;
        objFile << "Phone Number : " << phoneNumber << endl;
        objFile << "Payment Number : " << paymentNumber << endl;
        objFile << "WASA Bill No : " << bill_no << endl;
        objFile << "WASA Account No : " << account_no << endl;
        objFile << "Pay : " << amount << endl
                << endl
                << endl;
    }
};

// Electricity Bill Code:
tuple<string, string, string, string, string, int, int, int, int> foo3()
{
    int random_number, check_otp;
    string userName, District, Division, currentPlace, paymentname;
    int phoneNumber, paymentNumber, meter_number, amount, pay;
    cout << "Please Enter Your Information. " << endl
         << endl;
    cout << "Enter your name : ";
    cin >> userName;
    cout << "District : ";
    cin >> District;
    cout << "Division : ";
    cin >> Division;
    cout << "Current Place : ";
    cin >> currentPlace;
    cout << "Please select your payment method : " << endl;
    cout << "1. bKash " << endl
         << "2. Nagad " << endl
         << "3. Rocket " << endl;
    cin >> pay;
    if (pay == 1)
    {
        paymentname = "bKash ";
    }
    else if (pay == 2)
    {
        paymentname = "Nagad";
    }
    else
    {
        paymentname = "Rocket ";
    }
    cout << "Enter your phone number : ";
    cin >> phoneNumber;
    cout << "Payment " << paymentname << " Number : ";
    cin >> paymentNumber;
    cout << "Enter the meter number : ";
    cin >> meter_number;
    cout << "Amount : ";
    cin >> amount;
    srand(time(0));

    for (int i = 0; i < 1; i++)
    {
        random_number = rand();
    }
    cout << "OTP : " << random_number << endl;
    cout << "If your want to pay the bill." << endl
         << "Please enter OTP : ";
    cin >> check_otp;
    if (random_number == check_otp)
    {

        return {userName, District, Division, currentPlace, paymentname, phoneNumber, paymentNumber, meter_number, amount};
    }
    else
    {

        cout << "Your OTP is not Correct! Please Try Again." << endl;
    }

    system("cls");
}
class currentBillBase
{
public:
    string currentName, userName, Districtt, Division, currentPlace, paymentname;
    int phoneNumber, paymentNumber, meter_number, amount, pay;
    void setCurrentBill(string currentName, string userName, string District, string Division, string currentPlace, string paymentname, int phoneNumber, int paymentNumber, int meter_number, int amount)
    {
        this->currentName = currentName;
        this->userName = userName;
        this->Districtt = Districtt;
        this->Division = Division;
        this->currentPlace = currentPlace;
        this->paymentname = paymentname;
        this->phoneNumber = phoneNumber;
        this->paymentNumber = paymentNumber;
        this->meter_number = meter_number;
        this->amount = amount;
    }
};
class currentBill : public currentBillBase
{
public:
    void displayCurrent(void)
    {
        cout << endl
             << "***************************************************************" << endl
             << endl;
        cout << "\t \t Cash Receipt" << endl
             << endl;
        cout << currentName << endl;
        cout << "Name: " << userName << endl;
        // cout << "Your District is : " << Districtt << endl;
        // cout << "Your Division is : " << Division << endl;
        // cout << "Your current place is : " << currentPlace << endl;
        cout << "Payment Method: " << paymentname << endl;
        cout << "Phone Number : " << phoneNumber << endl;
        // cout << "Payment Number : " << paymentNumber << endl;
        cout << "meter number is : " << meter_number << endl;

        cout << "Amount : " << amount << endl;
        cout << "\t \t Your payment has been confirmed." << endl
             << endl;
        cout << endl
             << "***************************************************************" << endl;
        // fileAdd

        objFile << currentName << endl;
        objFile << "Your name is : " << userName << endl;
        objFile << "Your District is : " << Districtt << endl;
        objFile << "Your Division is : " << Division << endl;
        objFile << "Your current place is : " << currentPlace << endl;
        objFile << paymentname << endl;
        objFile << "Phone Number : " << phoneNumber << endl;
        objFile << "Payment Number : " << paymentNumber << endl;
        objFile << "Meter number is : " << meter_number << endl;

        objFile << "Pay : " << amount << endl
                << endl;
    }
};

// Wifi Bill Code:
tuple<string, string, string, int, int, int> foo4()
{
    int random_number, check_otp;
    string userName, subscriberId, paymentname;
    int paymentNumber, phoneNumber, amount, pay;
    cout << "\t\t Please Enter your information --->" << endl
         << endl;
    cout << "Enter Your Name : " << userName << endl;
    cin >> userName;
    cout << "Please select your payment method : " << endl;
    cout << "1. bKash" << endl
         << "2. Nagad" << endl
         << "3. Rocket" << endl;
    cin >> pay;
    if (pay == 1)
    {
        paymentname = "bKash ";
    }
    else if (pay == 2)
    {
        paymentname = "Nagad";
    }
    else
    {
        paymentname = "Rocket ";
    }
    cout << "Subscriber id : ";
    cin >> subscriberId;
    cout << "Enter Your contact number : ";
    cin >> phoneNumber;
    cout << "Enter Your payment number : ";
    cin >> paymentNumber;
    cout << "Enter amount : ";
    cin >> amount;
    srand(time(0));

    for (int i = 0; i < 1; i++)
    {
        random_number = rand();
    }
    cout << "OTP : " << random_number << endl;
    cout << "If your want to pay the bill." << endl
         << "Please enter OTP : ";
    cin >> check_otp;
    if (random_number == check_otp)
    {

        return {userName, paymentname, subscriberId, paymentNumber, phoneNumber, amount};
    }
    else
    {

        cout << "Your OTP is not Correct! Please Try Again." << endl;
    }

    system("cls");
}
class WifiBillBase
{
public:
    string userName, paymentname, subscriberId, wifiName;
    int phoneNumber, amount, paymentNumber;
    WifiBillBase(string wifiName, string userName, string paymentname, string subscriberId, int paymentNumber, int phoneNumber, int amount)
    {
        this->wifiName = wifiName;
        this->userName = userName;
        this->paymentname = paymentname;
        this->paymentNumber = paymentNumber;
        this->subscriberId = subscriberId;
        this->phoneNumber = phoneNumber;
        this->amount = amount;
    }
    void display(void)
    {
        cout << endl
             << "***************************************************************" << endl
             << endl;
        cout << "\t \t Cash Receipt" << endl
             << endl;
        cout << wifiName << endl;
        cout << "Name : " << userName << endl;
        cout << "Phone Number : " << phoneNumber << endl;
        cout << paymentname << " Number : " << paymentNumber << endl;
        cout << "Subscriber ID : " << subscriberId << endl;
        cout << "Bill Pay : " << amount << endl;
        cout << "\t \t Your payment has been confirmed." << endl
             << endl;
        cout << endl
             << "***************************************************************" << endl;
        // file
        objFile << wifiName << endl;
        objFile << "Name : " << userName << endl;
        objFile << "Contact Number : " << phoneNumber << endl;
        objFile << paymentname << " Number : " << paymentNumber << endl;
        objFile << "Subscriber ID : " << subscriberId << endl;
        objFile << "Bill Pay : " << amount << endl;
    }
};

int main()

{
    int c;
    cout << "\t\t\t--------------------------------------------------------------------\n\n\n";
    cout << "\t\t\t               Welcome to the Login page                            \n\n\n";
    cout << "\t\t\t---------------             MENU         ---------------------------\n\n\n";
    cout << "                                                                          \n\n ";
    cout << "\t Press 1 to LOGIN                          |" << endl;
    cout << "\t Press 2 to REGISTER                       |" << endl;
    cout << "\t Press 3 if you forget your PASSWORD       |" << endl;
    cout << "\t Press 4 to EXIT                           |" << endl;
    cout << "\n\t\t\t Please enter your choice : ";
    cin >> c;
    cout << endl;
    if (c == 1)
    {
        login();
        int gassBillPay;
        int num, billPay, gas_bill, pay_mehtod_name, BidyutSelect, waterSelect, currentSelect, wifiSelect;
        int phoneNumber, paymentSelect;
        cout << endl
             << endl
             << endl
             << "                      $$$ --------------- Do you want to make a bill payment? ----------------- $$$ yes or no " << endl;
        cout << "1.Yes" << endl;
        cout << "2.No" << endl;
        cin >> num;

        if (num == 1)
        {
            cout << endl
                 << endl
                 << endl
                 << "                    $$$   -------------- U_T_I_L_I_T_Y........M_A_N_A_G_E_M_E_N_T --------------   $$$  " << endl;

            cout << endl
                 << endl
                 << endl
                 << "1. Gas Bill \t- $ " << endl;
            cout << "2. Water Bill \t - $ " << endl;
            cout << "3. Electricity Bill  \t - $ " << endl;
            cout << "4. Wifi Bill \t - $ " << endl;

            cout << endl
                 << endl;
            cin >> billPay;
            if (billPay == 1)
            {

                cout << "1. TITAS GAS LIMITED - $ " << endl;
                cout << "2. UNIVERSAL GAS LIMITED - $ " << endl;
                cout << "3. ESSENCE INDUSTRIAL GASES LIMITED - $ " << endl;

                cin >> gassBillPay;
                system("cls");
                if (gassBillPay == 1)
                {
                    auto [userName, District, Division, currentPlace, paymentname, taka, phoneNumber, paymentNumber] = foo();
                    Gsss T;
                    T.setValue("TITAS GAS", userName, District, Division, currentPlace, paymentname, taka);
                    T.setValue2(phoneNumber, paymentNumber);
                    T.displayTitash();
                }
                else if (gassBillPay == 2)
                {
                    auto [userName, District, Division, currentPlace, paymentname, taka, phoneNumber, paymentNumber] = foo();
                    Gsss T;
                    T.setValue(" UNIVERSAL GAS", userName, District, Division, currentPlace, paymentname, taka);
                    T.setValue2(phoneNumber, paymentNumber);
                    T.displayTitash();
                }
                else if (gassBillPay == 3)
                {
                    auto [userName, District, Division, currentPlace, paymentname, taka, phoneNumber, paymentNumber] = foo();
                    Gsss T;
                    T.setValue(" ESSENCE INDUSTRIAL GASES ", userName, District, Division, currentPlace, paymentname, taka);
                    T.setValue2(phoneNumber, paymentNumber);
                    T.displayTitash();
                }
            }
            else if (billPay == 2)
            {
                cout << "1.Dhaka Wasa" << endl;
                cin >> waterSelect;
                system("cls");
                if (waterSelect == 1)
                {
                    auto [userName, District, Division, currentPlace, paymentname, phoneNumber, paymentNumber, bill_no, account_no, amount] = foo2();
                    WaterBill water;
                    water.setWaterBill(userName, District, Division, currentPlace, paymentname, phoneNumber, paymentNumber, bill_no, account_no, amount);
                    water.displayWaterBill();
                }
            }
            else if (billPay == 3)
            {

                cout << "1.Palli Bidyut" << endl;
                cout << "2.Nesco" << endl;
                cout << "3.DPDC" << endl;
                cout << "4.BPDB" << endl;

                cin >> currentSelect;
                system("cls");
                if (currentSelect == 1)
                {
                    auto [userName, District, Division, currentPlace, paymentname, phoneNumber, paymentNumber, meter_number, amount] = foo3();
                    currentBill current;
                    current.setCurrentBill("Palli Bidyut", userName, District, Division, currentPlace, paymentname, phoneNumber, paymentNumber, meter_number, amount);
                    current.displayCurrent();
                }
                else if (currentSelect == 2)
                {
                    auto [userName, District, Division, currentPlace, paymentname, phoneNumber, paymentNumber, meter_number, amount] = foo3();
                    currentBill current;
                    current.setCurrentBill("Nesco", userName, District, Division, currentPlace, paymentname, phoneNumber, paymentNumber, meter_number, amount);
                    current.displayCurrent();
                }
                else if (currentSelect == 3)
                {
                    auto [userName, District, Division, currentPlace, paymentname, phoneNumber, paymentNumber, meter_number, amount] = foo3();
                    currentBill current;
                    current.setCurrentBill("BPDB", userName, District, Division, currentPlace, paymentname, phoneNumber, paymentNumber, meter_number, amount);
                    current.displayCurrent();
                }
                else
                {
                    auto [userName, District, Division, currentPlace, paymentname, phoneNumber, paymentNumber, meter_number, amount] = foo3();
                    currentBill current;
                    current.setCurrentBill("Palli Bidyut", userName, District, Division, currentPlace, paymentname, phoneNumber, paymentNumber, meter_number, amount);
                    current.displayCurrent();
                }
            }
            else if (billPay == 4)
            {
                system("cls");
                cout << "Wifi Bill" << endl
                     << endl;
                cout << "1.Link3" << endl;
                cout << "2.Carnival" << endl;
                cout << "3.SamOnline" << endl;
                cout << "4.Circle Network" << endl;
                cin >> wifiSelect;
                system("cls");
                if (wifiSelect == 1)
                {
                    auto [userName, paymentname, subscriberId, paymentNumber, phoneNumber, amount] = foo4();
                    WifiBillBase wifi("Link3", userName, paymentname, subscriberId, paymentNumber, phoneNumber, amount);
                    wifi.display();
                }
                else if (wifiSelect == 2)
                {
                    auto [userName, paymentname, subscriberId, paymentNumber, phoneNumber, amount] = foo4();
                    WifiBillBase wifi("Carnival", userName, paymentname, subscriberId, paymentNumber, phoneNumber, amount);
                    wifi.display();
                }
                else if (wifiSelect == 3)
                {
                    auto [userName, paymentname, subscriberId, paymentNumber, phoneNumber, amount] = foo4();
                    WifiBillBase wifi("SamOnline", userName, paymentname, subscriberId, paymentNumber, phoneNumber, amount);
                    wifi.display();
                }
                else if (wifiSelect == 4)
                {
                    auto [userName, paymentname, subscriberId, paymentNumber, phoneNumber, amount] = foo4();
                    WifiBillBase wifi("Circle Network", userName, paymentname, subscriberId, paymentNumber, phoneNumber, amount);
                    wifi.display();
                }
            }
        }

        else
        {
            {
                cout << "Thank You!!!" << endl;
            }
        }
    }
    else if (c == 2)
    {
        registration();
    }
    else if (c == 3)
    {
        forgot();
    }
    else if (c == 4)
    {
        cout << "\t\t\t Thank you! \n\n";
    }
    else
    {
        system("cls");
        cout << "\t\t\t Please select from the options given above \n"
             << endl;
        main();
    }

    return 0;
}
// Log in method
void login()
{

    int i = 0;
    char ch, pwd[30];
    // cout<<"your password is "<<pwd<<endl;

    int count;
    string userId, password, id, pass;
    system("cls");
    cout << "\t\t\t Please enter the username and passoword : " << endl;
    cout << "\t\t\t USERNAME ";
    cin >> userId;

    cout << "\t\t\t PASSWORD ";

    while ((ch = _getch()) != 13)
    {
        pwd[i] = ch;
        i++;
        cout << "*";
    }
    pwd[i] = '\0';

    ifstream input("records.txt");
    while (input >> id >> pass)
    {
        if (id == userId && pass == pwd)
        {
            count = 1;
            system("cls");
        }
    }
    input.close();
    if (count == 1)
    {
        cout << userId << "\n Your LOGIN is successful \n Thanks for logging in  !\n";
    }
    else
    {
        cout << "\n LOGIN ERROR \n Please check your username and password \n";
        main();
    }
}
void registration()
{
    string ruserId, rpassword, rid, rpass, remail;
    system("cls");
    cout << "\t\t\t Enter the username : ";
    cin >> ruserId;
    cout << "\t\t\t Enter the Email : ";
    cin >> remail;
    cout << "\t\t\t Enter the password : ";
    cin >> rpassword;

    ofstream f1("records.txt", ios::app);
    f1 << ruserId << ' ' << rpassword << ' ' << remail << endl;
    system("cls");
    cout << "\n\t\t\t Registration is successfull! \n";
    main();
}
void forgot()
{
    int option;
    system("cls");
    cout << "\t\t\t you forgot the password? No worries \n";
    cout << "Press 1 to search your id by email " << endl;
    cout << "Press 2 to go back to the main menu " << endl;
    cout << "\t\t\t Enter your choice : ";
    cin >> option;
    switch (option)
    {
    case 1:
    {
        int count = 0;
        string semail, spass;
        cout << "\n\t\t\t Enter the email which you remembered : ";
        cin >> semail;

        ifstream f2("records.txt");
        while (f2 >> semail >> spass)
        {
            if (semail == semail)
            {
                count = 1;
            }
        }
        f2.close();
        if (count == 1)
        {
            cout << "\n\n your account is found \n";
            cout << "\n\n your password is : " << spass;
            main();
        }
        else
        {
            cout << "\n\t sorry! your account is not found! \n";
            main();
        }
        break;
    }
    case 2:
    {

        main();
    }
    default:
        cout << "\t\t\t wrong choice  ! please try again " << endl;
        forgot();
    }
}
