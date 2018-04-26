#include<stdio.h>
#include<string>
using std::cin;
using std::cout;


int ct=1,currentpostion=1;
class mytodo{
public:
    string description;
    string duedate;
    int priority;
};
class mytodo mytodolist[100];

//This function adding todo list

bool addtodolist(string description,string duedate,int priority){
    if(ct<100){
        mytodolist[ct].description=description;
        mytodolist[ct].duedate=duedate;
        mytodolist[ct].priority=priority;
        ct++;
        return true;
    }
    else{
        return false;
    }
}

//This function adding next item

bool getnextitem(mytodo &nextitem){
    if(ct==1){
        return false;
    }
    else{
        nextitem=mytodolist[currentpostion++];
        return true;
    }
}

//This function adding priority

bool getbypriority(mytodo &matche,int priority){
    for(int i=1;i<ct;i++){
        if(mytodolist[i].priority==priority){
            matche=mytodolist[i];
            currentpostion++;
            return true;
        }
    }
    return false;
}

//This function only print the item

bool showtodolist(){
    for(int i=currentpostion;i<ct;i++){
        cout<<"## "<<mytodolist[i].description<<"  "<<mytodolist[i].duedate<<"  "<<mytodolist[i].priority<<endl;
    }
    return true;
}

//This function only print

void print(){
    cout<<"Enter -1 to terminate the program"<<endl;
        cout<<"Enter 1 to add a new item in the list"<<endl;
        cout<<"Enter 2 to see the next item in the list"<<endl;
        cout<<"Enter 3 to see the next item by given priority"<<endl;
        cout<<"Enter 4 to see the Remaining item in the list"<<endl;
}
int main(){
    int choice,priority;
    string description,duedate;
    mytodo matche,nextitem;
    return 0;
}

