#include <iostream>
#include <cstring>
using namespace std;

int precedence(char op) {
    if (op == '*' || op == '/')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    return 0;
}

bool isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

int main() {
    char infix[50], postfix[100], stackArr[50];
    int top = -1;
    int i = 0, k = 0;

    cout << "Enter infix expression: ";
    cin >> infix;

    while (infix[i] != '\0') {
        char ch = infix[i];

     
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            postfix[k++] = ch;
            postfix[k++] = ' ';
        }
      
        else if (ch == '(') {
            stackArr[++top] = ch;
        }
        
        else if (ch == ')') {
            while (top != -1 && stackArr[top] != '(') {
                postfix[k++] = stackArr[top--];
                postfix[k++] = ' ';
            }
            if (top != -1 && stackArr[top] == '(')
                top--;
        }
   
        else if (isOperator(ch)) {
            while (top != -1 && precedence(stackArr[top]) >= precedence(ch)) {
                postfix[k++] = stackArr[top--];
                postfix[k++] = ' ';
            }
            stackArr[++top] = ch;
        }

        i++;
    }

  
    while (top != -1) {
        postfix[k++] = stackArr[top--];
        postfix[k++] = ' ';
    }

    postfix[k] = '\0';

    cout << "\nInfix Expression: " << infix << endl;
    cout << "Postfix Expression: " << postfix << endl;

    return 0;
}

