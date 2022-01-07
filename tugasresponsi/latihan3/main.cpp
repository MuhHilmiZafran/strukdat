#include <iostream>

using namespace std;

struct Node{
    string data;

    struct Node *next;
};

typedef Node Stack;
Stack *TOP;


void pushData(Stack *temp, string inputKata);
bool isEmpty();
void viewList(Stack *temp);

int main()
{
    cout<<"Kata yang dimasukkan:"<<endl;
    pushData(TOP, "S");
    pushData(TOP, "T");
    pushData(TOP, "R");
    pushData(TOP, "U");
    pushData(TOP, "K");
    pushData(TOP, "T");
    pushData(TOP, "U");
    pushData(TOP, "R");
    pushData(TOP, "D");
    pushData(TOP, "A");
    pushData(TOP, "T");
    pushData(TOP, "A");

    cout<<endl;

    cout<<"Output:"<<endl;
    viewList(TOP);

    return 0;
}

Stack *newnode(string x){
    Stack *temp;
    temp = new Stack();
    temp -> data = x;
    temp -> next = NULL;
    return (temp);
}


bool isEmpty(){
    if(TOP==NULL){
        return true;
    }
    else{
        return false;
    }
}

void pushData(Stack *temp, string inputKata){
    cout<<inputKata;
    temp = newnode(inputKata);

    if(isEmpty()){
        TOP=temp;
    }
    else{
        temp->next=TOP;
        TOP=temp;
    }

}

void viewList(Stack *temp){
    Stack *cur;

    cur=temp;
    while(cur != NULL){
        cout<<cur->data;

        cur = cur->next;
    }
}
