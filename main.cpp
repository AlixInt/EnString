#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char string[1000];
    int len,chr=0;
    cout<<"Enter the string: ";
    cin.get(string,1000);
    len = strlen(string);
    for (int i=0;i<len;i++){

        int chrnum = string[i];
        chr+=chrnum;
        }
    cout<<"The decrypted string value is: "<<chr;
    return 0;
}
