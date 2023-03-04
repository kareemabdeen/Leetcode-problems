class Solution {
public:
 int lengthOfLastWord(string s) {
    int length =0;
    stack<char>st;
    for(char i : s)
        st.push(i);
    while(st.top()==' ')//pop the spaces of the end of text
        st.pop();

    while(st.top()!=' ' && !st.empty())
    {
        length ++;
        st.pop();
         if(st.empty()){
             break;
         }
    }

    return length;
}
};