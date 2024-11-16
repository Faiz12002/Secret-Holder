#include <iostream>
#include <fstream>
using namespace std;
class signinManager {
public:
        void signin() {
        cout <<"To sign in\n";
        denied:
        ifstream informations("informations.dat");
        string usernameLog;
        string passwordLog;

        cout << "Enter your username: ";
            getline(cin, usernameLog);
            informations >> username;
        if (usernameLog == username) {
            cout <<"Now, enter your password: ";
            getline(cin, passwordLog);
            informations >> password;
        if (passwordLog == password) {
            cout <<"Access granted\n\n";
            system("pause");
            system("cls");
        }
        else {
            cout << "\naccess denied\n\n";
            system("pause");
            system("cls");
            goto denied;
        }
        }
        else {
            cout <<"\naccess denied\n\n";
            system("pause");
            system("cls");
            goto denied;
        }

    }
private:
    string username;
    string password;


};
class secretManager {
public:
    secret() {
    ifstream informations("informations.dat");
    string username;
    string secret;
    string choice;
    informations >> username >> password >> secret;
    cout <<"Welcome back " << username << " do you want to view your secret ?"<< endl;
    cout <<"Answer by 'yes' you will view your secret or 'no' you will quit" << endl;
    cin >> choice;
    if (choice == "yes" || choice == "YES") {
        cout << "\nYour secret is: " <<secret<<"\n\n\n";
        system("pause");
    }
    else if (choice == "no" || choice == "NO") {
        system("pause");
        return 0;
    }
}
private:
    string password;
};
int main() {
    cout <<"\nDon't forget to check my instagram: @fai.cpp\n"<<endl;
    system("pause");
    system("cls");
    cout <<"\nWelcome to the login program of Secret Holder.\n"<<endl;
    system("pause");
    system("cls");
    signinManager signinOption;
    signinOption.signin();
    secretManager secretOption;
    secretOption.secret();
}
