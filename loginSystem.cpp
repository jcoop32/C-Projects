#include <iostream>
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
    string firstName;
    string lastName;
    string username;
    string email;
    string initPassword;
    string verifyPassword;
};

void reg()
{
    UserInfo reg;
    cout << "Enter First Name: ";
    cin >> reg.firstName;

    cout << "Enter Last Name: ";
    cin >> reg.lastName;

    cout << "Enter username: ";
    cin >> reg.username;

    cout << "Enter email: ";
    cin >> reg.email;

    cout << "Enter Password: ";
    cin >> reg.initPassword;

    cout << "Verify Password: ";
    cin >> reg.verifyPassword;

    if (reg.initPassword == reg.verifyPassword)
    {
        cout << "REGISTRATION COMPLETE!" << endl;
        cout << "Name: " << reg.firstName << " " << reg.lastName << endl;
        cout << "Username: " << reg.username << endl;
        cout << "Email: " << reg.email << endl;
        cout << "Password: " << reg.initPassword << endl;
        cout << "_________________________________" << endl;
    }
    else
    {
        cout << "error! Passwords do not match!" << endl;
    }
}

void login()
{

    UserInfo log;
    time_t now = time(0);
    char *dt = ctime(&now);
    cout << "Username: ";
    cin >> log.username;

    cout << "Enter password: ";
    cin >> log.initPassword;

    cout << "Verify password: ";
    cin >> log.verifyPassword;

    if (log.initPassword == log.verifyPassword)
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
            cout << "error! Passwords do not match!" << endl;
        }
}

/*TODO: add the user database so that the accounts are actually created
and able to login after.
*/

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
            cout << "Please enter valid character!" << endl;
        }
    }
