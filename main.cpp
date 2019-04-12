#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[1000];
    int v,y=0;
    cout<<"Enter the string: ";
    cin.get(s,1000);
    v = strlen(s);
    for (int i=0;i<v;i++){

        int x = s[i];
        y+=x;
        }
    cout<<"The decrypted string value is: "<<y;
    return 0;
}
