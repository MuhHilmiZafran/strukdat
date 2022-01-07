#include <iostream>

using namespace std;

struct Node{
    int data;

    struct Node *next;
};

typedef Node Stack;
Stack *TOP;


void pushData(Stack *temp, int inputNilai);
bool isEmpty();
void viewList(Stack *temp);

int main()
{
    cout<<"Push data:"<<endl;
    pushData(TOP, 5);
    pushData(TOP, 4);
    pushData(TOP, 3);
    pushData(TOP, 2);
    pushData(TOP, 1);
    pushData(TOP, 5);
    viewList(TOP);
    cout<<endl;
    pushData(TOP, 6);
    viewList(TOP);

    return 0;
}

Stack *newnode(int x){
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

void pushData(Stack *temp, int inputNilai){
    int counter=0;
    Stack *cur;
    cur=TOP;
    while(cur != NULL){
        if(cur->data==inputNilai){
            counter = counter +1;
        }

        cur = cur->next;
    }
    cout<<"data yang di masukkan: "<<inputNilai<<endl;
    if(counter<=0){
        temp = newnode(inputNilai);

        if(isEmpty()){
            TOP=temp;
        }
        else{
            temp->next=TOP;
            TOP=temp;
        }
    }
    else{
        cout<<"data terakhir yang dimasukkan sudah ada!!"<<endl;
    }

}

void viewList(Stack *temp){
    Stack *cur;

    cur=temp;
    while(cur != NULL){
        cout<<cur->data<<",";

        cur = cur->next;
    }
}
