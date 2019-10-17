#include<stack>
bool checkBalanced(char *exp) {
    int i=0;
    stack<char> s;
    while(exp[i]){
        if(exp[i]=='('||exp[i]=='['||exp[i]=='{')
            s.push(exp[i]);
        
        if(exp[i]==')'){
            if(s.empty())
                return false;
            if(s.top()=='(')
                s.pop();
        }else if(exp[i]=='}'){
            if(s.empty())
                return false;
            if(s.top()=='{')
                s.pop();
        }else if(exp[i]==']'){
            if(s.empty())
                return false;
            if(s.top()=='[')
                s.pop();
        }
        i++;
    }
    if(s.empty())
        return true;
    else
        return false;
}
