#include "iostream"
#include "queue"

using namespace std;

int main(){
    queue<int> cola1;
    queue<int> cola2;

    for (int i = 0; i < 5; ++i) {
        cola1.push(i+1);
    }

    for (int i = 0; i < 5; ++i) {
        cola2.push(-i);
    }

    while(!cola1.empty()){
        cout<<cola1.front()<<endl;
        cola1.pop();
    }

    while(!cola2.empty()){
        cout<<cola2.front()<<endl;
        cola2.pop();
    }

    for (int i = 0; i < 5; ++i) {
        cola1.push(i+1);
    }

    for (int i = 0; i < 5; ++i) {
        cola2.push(-i);
    }

    if (!cola1.empty() and !cola2.empty()){
        swap(cola1, cola2);
    }

    while(!cola1.empty()){
        cout<<cola1.front()<<endl;
        cola1.pop();
    }

    while(!cola2.empty()){
        cout<<cola2.front()<<endl;
        cola2.pop();
    }

    return 0;
}