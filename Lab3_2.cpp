#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int element;
    Node *next;
};
Node *top = NULL;
void push(int ch)
{
    Node *newNode = new Node;
    newNode->element = ch;
    newNode->next = top;
    top = newNode;
}
void decimalToBinary(int dec)
{
    while (dec > 0)
        {
        push(dec % 2);
        dec = dec / 2;
        }
}
void printStack()
{
    Node* current = top;
    while (current != nullptr)
        {
        cout << current->element;
        current = current->next;
        }
    cout << endl;
}
int main()
{
    int dec;
    cout<<"Enter Decimal Number: ";
    cin>>dec;
    decimalToBinary(dec);
    printStack();
}
