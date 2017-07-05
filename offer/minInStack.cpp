//包含min函数的栈
class Solution {
public:
    void push(int value) 
    {
        m_data.push(value);
        if (!m_min.size() || value < m_min.top())
            m_min.push(value);
        else
            m_min.push(m_min.top());
    }
    void pop() 
    {
        if (!m_min.size() || !m_data.size())
            return;
        m_data.pop();
        m_min.pop();
        
        
    }
    int top() 
    {
        if (!m_data.size())
            return 0;
        return m_data.top();
    }
    int min() 
    {
        if (!m_min.size())
            return 0;
        return m_min.top();
    }
private:
    stack<int> m_data;
    stack<int> m_min;
};