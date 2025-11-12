
#include <iostream>
using namespace std;
struct node{
    int data;
    node*link;
};
typedef node*nodeptr;
int main() {
   
    nodeptr head = new node;
    head -> data = 30;
    head->link = nullptr;
    cout << head -> data;

    return 0;
}
