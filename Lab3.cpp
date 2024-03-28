#include<bits/stdc++.h>
using namespace std;
#define st struct

struct node{
    int data;
    struct node * next;
};

st node *top = NULL;
int max_size = 100;

void print(){
    cout << "Print the stack value: ";
    st node *temp = top;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void push( int data){
    if(max_size > 0){
    st node *newnode = new st node;
    newnode->data = data;
    newnode->next = top;
    top = newnode;
    max_size--;
    }
    else
        cout << "Stack is overflow" << endl;
}

void pop(){
    if(top == NULL)
        cout << "Stack is empty" << endl;
    else{
        st node *temp;
        temp = top;
        top = top->next;
        delete(temp);
        max_size++;
    }

}

void  menu(){
    while(1){
        cout << " 1. Insert data/Push stack: " <<endl;
        cout << " 2. Print stack: " << endl;
        cout << " 3. Pop stack: " << endl;
        int option;
        cout << "Choose an option: ";
        cin >> option;
        switch(option){
            case 1: int data;
                        cout << "Enter your data: ";
                        cin >> data;
                        push(data);
                        break;
            case 2: print();
                        break;
            case 3: pop();
                        break;

        }
    }

}
int main(){
    menu();
}
