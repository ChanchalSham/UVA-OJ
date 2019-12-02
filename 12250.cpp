/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i=1;
    char s[100];
    while(scanf("%s",s)==1)
    {
        if(strcmp(s,"#")==0) break;

		printf("Case %d: ",i++);
		if(strcmp(s,"HELLO")==0) printf("ENGLISH\n");
		else if(strcmp(s,"HOLA")==0) printf("SPANISH\n");
		else if(strcmp(s,"HALLO")==0) printf("GERMAN\n");
		else if(strcmp(s,"BONJOUR")==0) printf("FRENCH\n");
		else if(strcmp(s,"CIAO")==0) printf("ITALIAN\n");
		else if(strcmp(s,"ZDRAVSTVUJTE")==0) printf("RUSSIAN\n");
		else printf("UNKNOWN\n");
    }

    return 0;
}
