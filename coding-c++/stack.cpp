#include<bits/stdc++.h>
using namespace std;
stack<string> stk;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	stk.push("��");
	stk.push("��");
	stk.push("��");
	stk.push("��");
	stk.push("��");
	while(stk.size()){
		cout <<stk.top() << "\n";
		stk.pop();
	} 
		
	return 0;
}
 
