#include <iostream>
#include <fstream>
using namespace std;
class signupManager{
public:
   void signup () {
       ofstream informations("informations.dat");
       string space = " ";
       string username;
       string password;
       string secret;
        cout <<"\nFirst you need to register\n" << endl;
        cout <<"Enter username: ";
        getline(cin, username);
        informations << username << ' ';
        cout <<"Enter password: ";
        getline(cin, password);
        informations << password << ' ';
        cout <<"\nOkay ! your username is " << "'"<< username <<"'"<< " and your password is " <<"'"<< password <<"'"<< "\n- You have signed up\n\n";
        system("pause");
        system("cls");
        cout <<"\nWrite your secret, include spaces by typing the symbol ' _ ': ";
        getline(cin, secret);
        informations << secret << ' ';
        cout <<"\nokay ! your secret is:\n"<< "-> " << secret <<"\n"<<endl;
        system("pause");

    }

};
int main() {
    cout <<"\nDon't forget to check my instagram: @fai.cpp\n"<<endl;
    system("pause");
    system("cls");
    cout <<"\nWeclome to the Secret Holder program, where your secret is protected.\n" << endl;
    cout <<"\nNote: this is not a trojan, virus or whatever, just a program.\n" << endl;
    system("pause");
    system("cls");
    signupManager signupOption;
    signupOption.signup();
}
