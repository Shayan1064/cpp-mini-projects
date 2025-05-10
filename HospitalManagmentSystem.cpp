#include <iostream>
using namespace std;
const int SIZE=5;
struct patient
{
    string name;
    int age;
    string sym;
};

struct Queue
{

private:
   patient Queue[SIZE];
    int head=0;
    int tail=0;

public:    
    bool isFull(){
        return (tail==SIZE);
    }

bool isEmpty(){
    return (head==tail);
}

void Entry(){
if (isFull())
{
    cout<<"Sorry seat are Full"<<endl;
}else{
    patient p;
    cin.ignore();
    cout<<"Enter the patient name"<<endl;
    getline(cin,p.name);
    cout<<"Enter the patient age"<<endl;
    cin>>p.age;
    cin.ignore();
    cout<<"Enter the patient symptome"<<endl;
    getline(cin,p.sym);
    Queue [tail++]=p;
    cout<<"Patient added successfully added"<<endl;
    
}
}

void Discharge(){
    if (isEmpty())
    {
        cout<<"There is no patient"<<endl;
    }else{
       patient p= Queue[head++];
    }
patient p = Queue[head++];
        cout << "Discharged Patient:\n";
        cout << "Name: " << p.name << "\nAge: " << p.age << "\nSymptoms: " << p.sym << endl;
}
void Display(){
    if (isEmpty())
    {
        cout<<"There are no Patient "<<endl;

    }else{
        for (int i =head; i < tail; i++)
        {
           for (int i = head; i < tail; i++) {
            cout << "Name: " << Queue[i].name
                 << ", Age: " << Queue[i].age
                 << ", Symptoms: " << Queue[i].sym << endl;
           }
        }
    }
}

};

int main(){
Queue q;
    int choice;

    do {
        cout << "\n--- Hospital Queue Menu ---\n";
        cout << "1. Add Patient\n";
        cout << "2. Discharge Patient\n";
        cout << "3. Show All Patients\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                q.Entry();
                break;
            case 2:
                q.Discharge();
                break;
            case 3:
                q.Display();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
