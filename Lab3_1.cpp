#include<bits/stdc++.h>
using namespace std;
#define st struct

struct node{
    char data;
    struct node * next;
};

struct node *top = NULL;
int isEmpty(){
    if(top == NULL)
        return 1;
    else
        return 0;
}

void push(char data){
    st node *newnode = new st node;
    newnode->data = data;
    newnode->next = top;
    top = newnode;
}

void pop(){
    st node *temp = top;
    top = top->next;
    free(temp);
}

int main(){

    string s;
    cout << "Enter a expression: ";
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i] == '(')
            push(s[i]);
        else if(s[i] == ')'){
            if(isEmpty()){
                cout << "Closing parenthesis is not matched " << endl;
            }
            pop();
        }

}
        if(isEmpty())
            cout << "All parenthesis match " << endl;
        else
            cout << "Opening parenthesis is not matched " << endl;
}
