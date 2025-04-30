#include <iostream>
using namespace std;
int main(){
    cout << "Welcome "<<endl;
    cout<<endl;
    string name,semester,roll,section;
    cout<<"Enter your Name please "<<endl;
    cin>>name;
    cout<<endl;
    cout<<"Hello "<<name<<endl;
    cout<<"Enter your Semester "<<endl;
    cin>>semester;
    cout<<"Enter your Roll Number"<<endl;
    cin>>roll;
    cout<<"Enter your Section"<<endl;
    cin>>section;
    int marks;
    cout<<name<< " Enter your Marks to Find your grade "<<endl;
    cin>>marks;
    cout<<"Name : "<<name<<endl;
    cout<<"Roll : "<<roll<<endl;
    cout<<"Semster : "<<semester<<endl;
    cout<<"Section : "<<section<<endl;

    if (marks < 0 && marks > 100)
    {
        cout<<"Invailed Marks"<<endl;
    }else if (marks >=85 && marks <=100)
    {
        cout<<"Grade A"<<endl;
    }else if (marks >=71 && marks <=84)
    {
        cout<<"Grade B"<<endl;
    }else if (marks >=61 && marks <=70)
    {
        cout<<"Grade C"<<endl;
    }else if (marks >=51 && marks <=59)
    {
        cout<<"Grade D "<<endl;
    }else{
        cout<<"You are Failed"<<endl;
    }
    
}