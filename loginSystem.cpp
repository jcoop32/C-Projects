#include <iostream>
#include <ctime>

using namespace std;


void login(){

    time_t now = time(0);
    char * dt = ctime(& now);
    cout << "Username: ";
    string username;
    cin >> username;
    cout << "Enter password: ";
    string password1;
    cin >> password1;
    cout << "Verify password: ";
    string password2;
    cin >> password2;
    if (password2 == password1)
    {
        cout << "Welcome " << username << "!" << endl;
        cout << "Do you want to Logout? (Y/N): ";
        char userLOQ;
        cin >> userLOQ;
        if (userLOQ == 'y' || 'Y')
        {
            cout << "Log Out Success! " << dt << endl;
            login();
        }
    }
    else
    {
        cout << "error! Passwords do not match!" << endl;
        login();
    }
}

int main()
{
    cout << "Login ('L') or Register ('R'): ";
    char userReponse;
    cin >> userReponse;
    while (userReponse == 'L' || 'l')
    {
        login();
    }

    return 0;
}
