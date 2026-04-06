#include <iostream>
using namespace std;

struct node{
    string word;
    node* next;

};


int main(){
    node* head;
    node* temp;
    node* now;

    string option;
    do{
        cout << "Enter a word: ";
        cin >> option;
        now= new node;
        now->word = option;
        head = now;
        temp = now;

    }while (option != "exit");
    while(head!=nullptr){
        cout << head->next;
    }

    return 0;
}