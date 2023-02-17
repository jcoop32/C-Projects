#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "artcollection.cpp"
using namespace std;


class UserInfo
{
public:
    string fName, lName, username, password, vPassword;
};

void reg()
{
    ofstream file;
    UserInfo reg;
    cout << "Enter First Name: ";
    cin >> reg.fName;

    cout << "Enter Last Name: ";
    cin >> reg.lName;

    cout << "Enter username: ";
    cin >> reg.username;

    /*TODO: add username validation system so user cannot have a username
        that is already taken.
    */
    cout << "Enter Password: ";
    cin >> reg.password;

    cout << "Verify Password: ";
    cin >> reg.vPassword;

    if (reg.password == reg.vPassword)
    {
        file.open("users/" + reg.username + ".txt");
        file << reg.username << endl<< reg.password << endl << reg.fName + " " + reg.lName;
        file.close();
        cout << endl;
        cout << "REGISTRATION COMPLETE!" << endl;
        cout << "Name: " << reg.fName + " " + reg.lName << endl;
        cout << "Username: " << reg.username << endl;
        cout << "_________________________________" << endl;
    }
    else
    {
        cout << "error! Passwords do not match!" << endl;
    }
}

void login()
{
    string pwd, un, name;
    UserInfo log;
    time_t now = time(0);
    char *dt = ctime(&now); // date and time
    cout << "Username: ";
    cin >> log.username;

    cout << "Enter password: ";
    cin >> log.password;
    
    ifstream read("users/" + log.username + ".txt");
    getline(read, un);
    getline(read, pwd);
    getline(read, name);

    if (un == log.username && pwd == log.password)
    {
        cout << "Welcome, " << name << "!" << endl;
        cout << "Do you want to Logout? (Y/N): ";
        char userLOQ;
        cin >> userLOQ;
        if (userLOQ == 'Y')
        {
            cout << "Log Out Success! " << dt << endl;
        }
        else
        {
            string artChoice;
            cout << "Art choice 1 or 2: "; cin >> artChoice;
            if (artChoice == "1"){
                pokemon();
            }
            else if (artChoice == "2")
            {
                robot();
            }
            
        }
    }
    else
    {
        cout << "error! Login not successful!" << endl;
    }
}

int main()
{
    char userR;
    cout << "Login ('1') or Register ('2'): ";
    cin >> userR;
    if (userR == '2')
    {
        reg();
        login();
    }
    else if (userR == '1')
    {
        login();
    }
    else
    {
        cout << "Please enter valid option!" << endl;
    }
}
