#include <bits/stdc++.h>
using namespace std;
class MyStack {
private:
   deque<int> q;
public:
   void push(int x){
      q.push_front(x);
   }
   int pop(){
      int k = q.front();
      q.pop_front();
      return k;
   }
   int top(){
      return q.front();
   }
   bool empty(){
      if (q.empty())
         return true;
      else
         return false;
   }
};
main(){
   MyStack ob;
   ob.push(10);
   ob.push(20);
   cout << (ob.pop()) << endl;
   cout << (ob.pop()) << endl;
}
