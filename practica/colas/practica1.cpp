#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> cola;

    for (int i = 0; i<5; ++i) {
        cola.push(i+1);
    }

    while(!cola.empty()){
        cout<<cola.front()<<endl;
        cola.pop();
    }


    return 0;
}