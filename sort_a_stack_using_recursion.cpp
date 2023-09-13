void insert(stack<int>& v,int temp)
{
     if (v.size() == 0)
    {
        v.push(temp);
        return;
    }
    int ykt = v.top();
    v.pop();
    insert(v, temp);
    v.push(ykt);
    return;
}

void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.size() == 1)
    return;
    
    int temp = stack.top();
    stack.pop();
    reverseStack(stack);
    insert(stack, temp);

}