#include<iostream>
using namespace std;

void quit()
{
    cout<<"Program exited successfuly"<<endl;
    exit(0);
}








int main()
{
    //Delcare data types for main function here.
    string quit,username;
    int password;







    //Program Header
    
    cout<<"       __________________________________"<<endl<<endl;
    cout<<"       Welcome to Cafe Management Program" <<endl;
    cout<<"       __________________________________"<<endl<<endl;;
    
    //Administrator Login
    //registerd usernames:- sheharyar and momnah
    //password 1234

    cout<<"Enter your username and password to login."<<endl;
    cin>>username;
    if(username == "sheharyar" || username == "momnah")
    {
        cin>>password;
        if(password==1234)
        {
            cout<<"Access Granted!"<<endl;
        }
        else
        {
            cout<<"Incorrect Password!"<<endl;
        }
    }
    else
    {
    cout<<"Incorrect credentials"<<endl;
    
    //Program Exit
    cout<<"Do you wish to quit program?"<<endl;
    cin>>quit;
        if(quit == "yes")
            {
                void quit();
            }
        else 
            {
                //Go back to main menu function
            }
    }
    
    
    
    return 0;
}