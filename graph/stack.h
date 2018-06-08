//
// Created by liqi on 18-6-7.
//

#ifndef DATASTRUCT_STACK_H
#define DATASTRUCT_STACK_H

#include <iostream>
using namespace std;

struct Stack{
    int value[100];
    int top;
};

void InitStack(Stack &stack){
    stack.top=-1;
}

bool Push(Stack &stack,int value){
    if (stack.top==99){
        return false;
    } else{
        stack.top++;
        stack.value[stack.top]=value;
        return true;
    }
}

bool Pop(Stack &stack,int &value){
    if (stack.top==-1){
        return false;
    }else{
        value=stack.value[stack.top];
        stack.top--;
        return true;
    }
}

bool GetTop(Stack &stack,int &value){
    if (stack.top==-1){
        return false;
    } else{
        value=stack.value[stack.top];
        return true;
    }
}

bool StackEmpty(Stack &stack){
    return stack.top == -1;
}

#endif //DATASTRUCT_STACK_H
