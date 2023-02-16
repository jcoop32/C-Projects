#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

void pokemon()
{
    cout << "quu..__	" << endl;
    cout << "$$$b  `---.__	" << endl;
    cout << "$$b        `--.                          ___.---uuudP	" << endl;
    cout << "   `$$b           `.__.------.__     __.---'      $$$$\"              .	" << endl;
    cout << "     \"$b          -'            `-.-'            $$$\"              .'|	" << endl;
    cout << "       \".                                       d$\"             _.'  |	" << endl;
    cout << "         `.   /                              ...\"             .'     |	" << endl;
    cout << "           `./                           ..::-'            _.'       |	" << endl;
    cout << "            /                         .:::-'            .-'         .'	" << endl;
    cout << "           :                          ::''\\          _.'            |	" << endl;
    cout << "          .' .-.             .-.           `.      .'               |	" << endl;
    cout << "          : /'$$|           .@\"$\\           `.   .'              _.-'	" << endl;
    cout << "         .'|$u$$|          |$$,$$|           |  <            _.-'	" << endl;
    cout << "         | `:$$:'          :$$$$$:           `.  `.       .-'	" << endl;
    cout << "         :                  `\"--'             |    `-.     \\	" << endl;
    cout << "        :##.       ==             .###.       `.      `.    `\\	" << endl;
    cout << "        |##:                      :###:        |        >     >	" << endl;
    cout << "        |#'     `..'`..'          `###'        x:      /     /		" << endl;
    cout << "         \\                                   xXX|     /    ./	" << endl;
    cout << "          \\                                xXXX'|    /   ./	" << endl;
    cout << "          /`-.                                  `.  /   /	" << endl;
    cout << "         :    `-  ...........,                   | /  .'	" << endl;
    cout << "         |         ``:::::::'       .            |<    `.	" << endl;
    cout << "         |             ```          |           x| \\ `.:``.	" << endl;
    cout << "         |                         .'    /'   xXX|  `:`M`M':.	" << endl;
    cout << "         |    |                    ;    /:' xXXX'|  -'MMMMM:'	" << endl;
    cout << "         `.  .'                   :    /:'       |-'MMMM.-'	" << endl;
    cout << "          |  |                   .'   /'        .'MMM.-'	" << endl;
    cout << "          `'`'                   :  ,'          |MMM<	" << endl;
    cout << "            |                     `'            |tbap\\	" << endl;
    cout << "             \\                                  :MM.-'	" << endl;
    cout << "              \\                 |              .''	" << endl;
    cout << "               \\.               `.            /	" << endl;
    cout << "                /     .:::::::.. :           /	" << endl;
    cout << "               |     .:::::::::::`.         /	" << endl;
    cout << "               |   .:::------------\\       /	" << endl;
    cout << "              /   .''               >::'  /	" << endl;
    cout << "              `',:                 :    .'	" << endl;
}
class UserInfo
{
public:
    string fName, lName, username, password, vPassword;
};

void reg()
{

    UserInfo reg;
    cout << "Enter First Name: ";
    cin >> reg.fName;

    cout << "Enter Last Name: ";
    cin >> reg.lName;

    cout << "Enter username: ";
    cin >> reg.username;

    cout << "Enter Password: ";
    cin >> reg.password;

    cout << "Verify Password: ";
    cin >> reg.vPassword;

    if (reg.password == reg.vPassword)
    {
        ofstream file;
        file.open("/Users/joshcooper/Desktop/vs code projects/c++ projects/users/" + reg.username + ".txt");
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
    string pwd, un;
    UserInfo log;
    time_t now = time(0);
    char *dt = ctime(&now); // date and time
    cout << "Username: ";
    cin >> log.username;

    cout << "Enter password: ";
    cin >> log.password;
   
    
    ifstream read("/Users/joshcooper/Desktop/vs code projects/c++ projects/users/" + log.username + ".txt");
    getline(read, un);
    getline(read, pwd);

    if (un == log.username && pwd == log.password)
    {
        cout << "Welcome, " << log.username << "!" << endl;
        cout << "Do you want to Logout? (Y/N): ";
        char userLOQ;
        cin >> userLOQ;
        if (userLOQ == 'Y')
        {
            cout << "Log Out Success! " << dt << endl;
        }
        else
        {
            pokemon();
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
    cout << "Login ('L') or Register ('R'): ";
    cin >> userR;
    if (userR == 'R')
    {
        reg();
        login();
    }
    else if (userR == 'L')
    {
        login();
    }
    else
    {
        cout << "Please enter valid option!" << endl;
    }
}
