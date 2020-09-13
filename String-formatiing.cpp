/*
C++ provides a nice alternative data type to manipulate strings, and the data type is conveniently called string. Some of its widely used features are the following:

Declaration:

string a = "abc";
Size:

int len = a.size();
Concatenate two strings:

string a = "abc";
string b = "def";
string c = a + b; // c = "abcdef".
Accessing  element:

string s = "abc";
char   c0 = s[0];   // c0 = 'a'
char   c1 = s[1];   // c1 = 'b'
char   c2 = s[2];   // c2 = 'c'

s[0] = 'z';         // s = "zbc"
P.S.: We will use cin/cout to read/write a string.

Input Format

You are given two strings,  and , separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

Output Format

In the first line print two space-separated integers, representing the length of  and  respectively.
In the second line print the string produced by concatenating  and  ().
In the third line print two strings separated by a space,  and .  and  are the same as  and , respectively, except that their first characters are swapped.

Sample Input

abcd
ef
Sample Output

4 2
abcdef
ebcd af

link:-https://www.hackerrank.com/challenges/c-tutorial-strings/problem
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program

    string str,str1;
    cin>>str;
    cin>>str1;
    int len1= str.size();
    int len2= str1.size();

    cout<<len1<<" "<<len2<<endl;
    cout<<str+str1<<endl;

    char a,b;
    a=str[0];
    b=str1[0];

    str[0]=b;
    str1[0]=a;
    cout<<str<<" "<<str1;



  
    return 0;
}