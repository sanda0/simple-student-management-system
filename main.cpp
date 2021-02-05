#include<iostream>
#include <cstdlib>
#include<string>
using namespace std;
//menu class
// this class use for menu

class Menu{
public:
    void stuManage(){

        while(true){
        system("cls");
        int choice;
        cout<<"\n\n 1.add new student\n 2.find student 2.delete student \n 0.to exit";
        cout<<"\n\n choice >>";cin>>choice;
        if(choice == 0){
            break;
        }

        }

    }
    mainMenu(){

        while(true){
            system("cls");
            int choice;
            cout<<"welcome to management system !!!"<<endl;
            cout<<"\n\n menu \n\n 1.Student management \n 2.Class managrment \n 3.Reports \n\n[enter 0 to exit]\n\n[*]choice >>";
            cin>>choice;
            if(choice == 0){
                break;
            }else if(choice == 1){
                stuManage();
            }

        }
    }

};

//student class
//this class use for student data
class Student{
    int id;
    string name;
    int age;
    string address;

};

//a/l student
class AlevelStu:Student{

};


int main(){
    Menu menu;
    menu.mainMenu();
return 0;
}
