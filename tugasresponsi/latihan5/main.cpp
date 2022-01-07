#include <iostream>

using namespace std;

struct Node{
    int data;

    struct Node *next;
};

typedef Node Stack;
Stack *TOP;


void pushData(Stack *temp, int inputKata);
bool isEmpty();
void viewList(Stack *temp);

int main()
{
    int maks, k;
    cout<<"masukkan jumlah data: ";
    cin>>maks;
    for(int i=1; i<=maks; i++){

        cout<<"input-"<<i<<": ";
        cin>>k;
        pushData(TOP, k);

    }
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
    temp = newnode(inputNilai);

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
        cout<<"|"<<cur->data<<"|"<<endl;

        cur = cur->next;
    }
}
