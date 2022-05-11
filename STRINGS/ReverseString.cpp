#include<bits/stdc++.h>
using namespace std;

string reverseWord(string str);

int main() {
	
	int t;
    cout<<"ENTER NO. OF TEST CASES: ";
	cin>>t;
	while(t--)
	{
	string s;
    cout<<"ENTER STRING: ";
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

string reverseWord(string str){
  
  int n=0;
  n=str.length(); //takes length of str

  string rev; //define empty string to put characters in reverse order

  //method 1 
  /*
  rev=str; 
  reverse(rev.begin(), rev.end()); 
  */

  //method 2
  for(int i=n-1;i>=0;i--)
    rev.push_back(str[i]);

  return rev;
}