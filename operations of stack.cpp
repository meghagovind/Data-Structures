/*
inserting data -> push
deleteing data -> pop//deletes last element
view peek -> top
size -> size
*/
//stack uses last in first out order.

#include <bits/stdc++.h>
using namespace std;
int main() {
	stack<int>st;//inbuilt stack;
	st.push(10);
	st.push(20);
	st.push(30);
	st.pop();
	cout<<st.top()<<endl;
	st.empty();
	st.push(40);
	cout<<st.size()<<"\n";
	st.push(50);
	st.pop();
	cout<<st.top()<<"\n";
	
}
