#include<iostream>
#include<vector>
using namespace std;
class Patient{
string username;
string password;
int age;
bool islog = false;
string bloodGroup;
string medicalPassword = "WB101010";
vector <string> disease;
public:
    void setDetails () // Will Create a new account for any normal citizen or it will give access to an medical person.
    {
        cout << "Hello Sir/Mam!!! Wecome to our Website." << endl;
        cout << "If you are a Medical Person press 1 any if you are a normal citizen press 2: ";
        int digit2;
        cin >> digit2;
        if(digit2 == 2){
            cout << "If you have already an account, press 1 and if you want to create new account press 2: ";
            int digit;
            cin >> digit;
            if (digit == 1){
            return;
            }
            else{
               cout << endl << "Enter a username: ";
               cin >> username;
               cout << endl << "Enter a password: ";
               cin >> password;
               cout << endl << "You have crated your account successfully"; 
            }
        }
        else{
            string medicalPassword;
            cout << "At first Enter the Unique Password for Medical Persons: ";
            cin >> medicalPassword;
            if (this->medicalPassword == medicalPassword){
            cout << endl << "Enter a username: ";
            cin >> username;
            cout << endl << "Enter a password: ";
            cin >> password; 
            cout << endl << "Enter the Age: ";
            cin >> age;
            cout << endl << "Enter the Blood Group: ";
            cin >> bloodGroup;
            string currentDisease;
            cout << endl << "Enter the Current Disease name: ";
            cin >> currentDisease;
            disease.push_back(currentDisease);
            cout << endl << "The details has been stored successfully.";
            return;
            }
            else{
                cout << endl << "You Have entered Wrong Password. " ;
                exit(2);
            }
        }
    }
    void showDetails() // Will Show the details of ant patient
    {
        cout << "Username: " << username << endl;
        cout << "Age: " << age << endl;
        cout << "Blood Group: " << bloodGroup << endl;
        cout << "Showing the diseases: ";
        for(int i = 0; i < disease.size(); i++){
            cout << disease[i] << " ";
        }
    }
    void login () // Helps the user to login
    {
        string username, password;
        cout << endl << "To Login at fisrt fill the necessary details: " << endl;
         cout << endl << "Enter a username: ";
         cin >> username;
         cout << endl << "Enter a password: ";
         cin >> password;
        if (this->username == username && this->password == password){
            islog = true;
            cout << "Showing your details..." << endl;
            showDetails();
        }
        else{
            cout << "You have enterd wrong details.";
            exit(1);
        }
    }
    void logout() // Helps the user to logout
    {
            if(islog == false){
                cout << endl << "You are already logged out." << endl;
            }
            else{
                islog = false;
                cout << "You have Logged out successfully." << endl;
            }
            
    }
};
int main()
{
    Patient p1;
    p1.setDetails();
    p1.login();
    p1.logout();
    return 0;
}