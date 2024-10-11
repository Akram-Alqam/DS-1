#include <bits/stdc++.h>

using namespace std;
const int size = 4;
struct Date{
    
    int d, m, y;
};

struct Student{
    
    float ID;
    float gpa;
    string name;
    Date dob;
    bool ap;
    char c[4];
};
 // Section Functions 
void read(student a[]) {
    
    for(int i = 0;i<size;i++){
        
        cin >>a[i].ID;
        cin >>a[i].name;
        cin >>a[i].gpa;
        cin >>a[i].dob.d;
        cin >>a[i].dob.m;
        cin >>a[i].dob.y;
        cin >>a[i].ap;
        for(int j = 0;j<4;j++) 
        cin >>a[i].c[j];
    }
}

void print(Student a[]){
    
        for(int i = 0;i < size;i++) {
        cout <<a[i].ID<<" "<<a[i].name<<" "<<a[i].gpa <<" ";
        cout <<a[i].dob.d<<"/" <<a[i].dob.m<<"/"<<a[i].dob.y<<" ";
        cout <<(a[i].ap ? "AP" : "No AP")<<" ";
        
        for(int j = 0;j<4;j++) 
        cout <<a[i].c[j]<<" ";
        cout <<"\n";
    }
}

void APs(Student a[]) {
    for (int i = 0;i<size;i++)
        if (a[i].ap) 
        cout <<a[i].name<<"\n";
}

void Fs(Student a[]) {
    for (int i = 0;i < size;i++) {
        int count = 0;
        for (int j = 0; j < 4;j++)
            if(a[i].c[j] == 'F')
            count++;
        cout <<a[i].name<<" "<<count<<"\n";
    }
}

void DOBAfter2002(Student a[]) {
    for (int i = 0;i < size; i++)
        if (a[i].dob.y > 2002) 
        cout <<a[i].name<<"\n";
}
 
int main(){
    
    Student a[size];
    int choice;

    do {
        cout <<"1. Read"<<"\n";
        cout <<"2. Print"<<"\n";
        cout <<"3. AP Students"<<"\n";
        cout <<"4. F Grades"<<"\n";
        cout <<"5. DOB > 2002"<<"\n";
        cout <<"6. Exit"<<"\n";
        
        cin >>choice;
        if(choice == 1) 

        read(a);
        else if (choice == 2) 

        print(a);  
        else if (choice == 3) 

        APs(a);
        
        else if (choice == 4) 

        Fs(a);
        
        else if (choice == 5) 
        
        DOBAfter2002(a);
    }while(choice != 6);

    return 0;
}
