#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

// struct Node* l_first;

struct Node {
    int data;
    struct Node* next;
}* g_first = NULL;

void display() {
    struct Node* t;
    struct Node* last;
    // create a linked list first
    // and then display
    // or do concurrent
    int n;
    int a[n];
    cin >> n;
    for(int i=0; i<n; ++i) {
        cin >> a[i];
    }
    // Create a linked list
    // init state of linked list
    g_first = new Node;
    g_first->data = a[0];
    g_first->next = NULL;
    last = g_first;

    // next state and move on
    for(int i=1; i<n; ++i) {
        // add information for t
        t = new Node;
        t->data = a[i];
        t->next = NULL;
        // link last with t
        last->next = t;
        last=t;
    } // end for
    struct Node* l_first;
    l_first = g_first ;
    while(l_first!=NULL) {
        cout << l_first->data << endl;
        l_first=l_first->next;
    }
    // while(g_first!=NULL) {
    //     cout << g_first->data << endl;
    //     g_first=g_first->next;
    // }

}

int main() {
    int n;
    display();
    return 0;
}