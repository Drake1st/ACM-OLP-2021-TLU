#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int tt;cin>>tt;
	while(tt--){
		string s;
		cin>>s;
		int len=s.length();
		int l,r; 
		char now = 'a';
		for(int i=0;i<len;i++)
			if(s[i]=='a'){
				l=i-1;
				r=i+1;
				now++;
				break;
			}
		if(now=='a'){
			cout<<"NO"<<endl;
			continue;
		}

		while(true){
			if(l<0&&r==len){
				cout<<"YES"<<endl;
				break;
			}
			else if(l<0)
				if(s[r]== now) {
					now++;
					r++;
				}
				else{
					cout<<"NO"<<endl;
					break;
				}
			else if(r==len)
				if(s[l]== now) {
					now++;
					l--;
				}
				else{
					cout<<"NO"<<endl;
					break;
				}
			else
				if(s[l]== now) {
					now++;
					l--;
				}
				else if(s[r]== now) {
					now++;
					r++;
				}
				else{
					cout<<"NO"<<endl;
					break;
				}
		}
	}
	return 0;
}
