#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string text, b4text, aftext, reversetext;
    cout << "Input text: ";
	cin>>text;
    cout << "Reversed text: ";
	    reversetext=func1(text); //ยังไม่ได้เปลี่ยตัวเล็กใหญ่
	    cout<<reversetext;
    b4text=func2(text);
    aftext=func2(reversetext); //เปลี่ยนเป็นตัวเล็กทั้งหมด
    cout <<"\n" <<"Palindrome: ";
		
		if(b4text==aftext){
			cout<<"Yes";
		}
		if(b4text!=aftext){
			cout<<"No";
		}
    return 0;
}
