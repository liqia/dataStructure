#include <iostream>
using namespace std;
struct Astack{
    BitTree data[100];
    int top;
};
void initStack(Astack *s){
    s->top=-1;
}
bool stackEmpty(Astack s){
    if(s.top==-1)
        return true;
    else
        return false;
}
bool push(Astack *s,BitTree value){
    if(s->top==99){
        return false;
    }
    s->top++;
    s->data[s->top]=value;
    return true;
}
bool pop(Astack *s,BitTree *x){
    if(s->top==-1){
        return false;
    }
    *x=(s->data[s->top]);
    s->top--;
    return true;
}
bool getTop(Astack s,BitTree *x){
    if(s.top==-1)
        return false;
    *x=s.data[s.top];
    return true;
}
