#include <iostream>

using namespace std;

struct Node{
    int data;

    struct Node *next;
};
typedef Node Q_list;

struct List{
    Node *head;
    Node *tail;

};

typedef List QueueLL;

void init(QueueLL *);
void EnqueueLL(QueueLL *, int);
void DequeueLL(QueueLL *, int);
void viewList(QueueLL *);


int main()
{
    QueueLL LL;
    init(&LL);
    EnqueueLL(&LL, 2);
    EnqueueLL(&LL, 6);
    EnqueueLL(&LL, 8);
    DequeueLL(&LL, 6);
    viewList(&LL);
    return 0;
}

void init(QueueLL *L){
    L->head=NULL;
    //L->tail=NULL;
}

bool isEmpty(QueueLL *L){
    if(L->head==NULL){
        return true;
    }
    else{
        return false;
    }
}

void EnqueueLL(QueueLL *L, int x){
    Q_list *temp;
    if(x%2==0){
        temp = new Node();
        temp->data = x;
        temp->next = NULL;
        if(isEmpty(L)){
            L->head=temp;
            L->tail=L->head;
        }
        else{
            L->tail->next = temp;
            L->tail = temp;
        }
    }
    else{
        cout<<x<<"tidak genap"<<endl;
    }

}

void DequeueLL(QueueLL *L, int x){
    Q_list *del, *cur;
    if(L->head->data==x){
        del=L->head;
        L->head=L->head->next;
        free(del);
        return;
    }
    else{
        cur=L->head;
        while((cur->next->data!=x)&&(del->next!=NULL)){
            cur=cur->next;
        }
        del=cur->next;
        cur->next=del->next;
        free(del);
    }

}



void viewList(QueueLL *L){
    Q_list *temp;
    temp=L->head;
    while(temp != NULL){
        cout<<"["<<temp->data<<"]";

        temp=temp->next;
    }
}

