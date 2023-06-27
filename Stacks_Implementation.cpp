#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

void Reverse(char *c, int n) {
    stack<char> s;
    //loop for push
    for(int i = 0; i<n; i++) {
        s.push(c[i]);
    }
    //loop for pop
    for(int i = 0;i<n;i++) {
        c[i] = s.top();
        s.pop();
    }
}

int main() {
    char c[51];
    printf("Enter a string: ");
    gets(c);
    Reverse(c, strlen(c));
    printf("Output = %s", c);
}