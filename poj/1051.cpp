#include<iostream>
#include<string>
#include<map>
using namespace std;
map<char,string> morse;
map<string,char> remorse;
void Init()
{
	morse['A'] = ".-";  
    morse['B'] = "-...";  
    morse['C'] = "-.-.";  
    morse['D'] = "-..";  
    morse['E'] = ".";  
    morse['F'] = "..-.";  
    morse['G'] = "--.";  
    morse['H'] = "....";  
    morse['I'] = "..";  
    morse['J'] = ".---";  
    morse['K'] = "-.-";  
    morse['L'] = ".-..";  
    morse['M'] = "--";  
    morse['N'] = "-.";  
    morse['O'] = "---";  
    morse['P'] = ".--.";  
    morse['Q'] = "--.-";  
    morse['R'] = ".-.";  
    morse['S'] = "...";  
    morse['T'] = "-";  
    morse['U'] = "..-";  
    morse['V'] = "...-";  
    morse['W'] = ".--";  
    morse['X'] = "-..-";  
    morse['Y'] = "-.--";  
    morse['Z'] = "--..";  
    morse['_'] = "..--";  
    morse['.'] = "---.";  
    morse[','] = ".-.-";  
    morse['?'] = "----";  
    remorse[".-"] = 'A';  
    remorse["-..."] = 'B';  
    remorse["-.-."] = 'C';  
    remorse["-.."] = 'D';  
    remorse["."] = 'E';  
    remorse["..-."] = 'F';  
    remorse["--."] = 'G';  
    remorse["...."] = 'H';  
    remorse[".."] = 'I';  
    remorse[".---"] = 'J';  
    remorse["-.-"] = 'K';  
    remorse[".-.."] = 'L';  
    remorse["--"] = 'M';  
    remorse["-."] = 'N';  
    remorse["---"] = 'O';  
    remorse[".--."] = 'P';  
    remorse["--.-"] = 'Q';  
    remorse[".-."] = 'R';  
    remorse["..."] = 'S';  
    remorse["-"] = 'T';  
    remorse["..-"] = 'U';  
    remorse["...-"] = 'V';  
    remorse[".--"] = 'W';  
    remorse["-..-"] = 'X';  
    remorse["-.--"] = 'Y';  
    remorse["--.."] = 'Z';  
    remorse["..--"] = '_';  
    remorse["---."] = '.';  
    remorse[".-.-"] = ',';  
    remorse["----"] = '?';  
}

int main()
{
	Init();
	int t,cas=1;
	cin>>t;
	string s;
	while(t--)
	{
		cin>>s;
		cout<<cas++<<": ";
		string s_morse="",ans="";
		char num[100];
		int i;
		for(i=0;i<s.size();i++)
		{
			s_morse=s_morse+morse[s[i]];
			num[i]=morse[s[i]].length();
		}
		i-=1;
		int len=0;
		for(int j=i;j>=0;j--)
		{
			ans="";
			for(int k=0;k<num[j];k++)
			{
				ans=ans+s_morse[k+len];
			}
			cout<<remorse[ans];
			len=len+num[j];
		}
		cout<<endl;
	}
	return 0;
}
