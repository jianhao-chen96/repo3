#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int a, b;
};

struct cmp{
    bool operator () (Node a1, Node a2){
        if(a1.a == a2.a) return a1.b > a2.b;
        return a1.a < a2.a;
    }
};

int main()
{
    Node A[10] = {{1,1},{1,3},{1,4},{2,3},{2,4},{3,1},{3,2},{3,4},{4,1},{4,3}};
//    sort(A, A+10);
//    for(int i = 0; i < 10; i++){
//        printf("%d %d\n", A[i].a, A[i].b);
//    }
//    printf("-------------\n");
    priority_queue<Node, vector<Node>, cmp> pq;
    for(int i = 0; i < 10; i++) pq.push(A[i]);
    while(pq.size()){
        Node now = pq.top();
        printf("%d %d\n", now.a, now.b);
        pq.pop();
    }


    return 0;
}
