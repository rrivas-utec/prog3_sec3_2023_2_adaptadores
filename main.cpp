#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <deque>
#include <forward_list>

using namespace std;

void ejemplo_1() {
    stack<int> s1;  // stack adaptador de un deque
    stack<int, vector<int>> s2; // stack adaptador de un vector
    stack<int, list<int>> s3; // stack adaptador de un list
    stack<int, forward_list<int>> s4; // stack adaptador de un list

    if (!s1.empty())
        cout << s1.top(); // Cuidado !! tiene que existir un dato
    else
        cout << "vacio\n";

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);

    cout << s1.top() << endl;

    while (!s1.empty()) {
        cout << s1.top() << endl;
        s1.pop();
    }

//    s4.push(10); Falla por que el forward_list no tiene push_back

}

void ejemplo_2() {
    vector v = {10, 20, 30, 40};
    deque d = {10, 20, 30, 40};
    list l = {10, 20, 30, 40};
    stack s1(v);  // stack adaptador de un vector
    stack s2(d);  // stack adaptador de un deque
    stack s3(l);  // stack adaptador de un list
//    stack s4(begin(v), end(v)); // A partir de la version 23
}

void ejemplo_3() {
    deque d = {10, 20, 30, 40};
    vector v = {10, 20, 30, 40};
    queue q1(d);
    queue q2(v);

    while(!q1.empty()) {
        cout << q1.front() << endl;
        q1.pop();
    }

    // NO SE puede usar por que vector no tiene implementado
    // metodo pop_front
    /*
    while(!q2.empty()) {
        cout << q2.front();
        q2.pop();
    }
     */
}

void ejemplo_4() {

    int n = 10;
    for (int i = 0; i < n; ++i) {
    }

    while(n--) {
    }
}

int main() {
//    ejemplo_1();
    ejemplo_3();
    return 0;
}
