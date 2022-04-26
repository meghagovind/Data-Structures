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
