class Solution {
public:
int lastStoneWeight(vector<int>& stones) {
int n =stones.size();
priority_queue <int>pq;
for(int i =0; i<n; i++)
{
pq.push(stones[i]);
}
int first ,second;
while(n>1)
{
first = pq.top();
pq.pop();
second = pq.top();
pq.pop();
n = n-2;
if(first-second>0)
{
pq.push(first-second);
n = n+1;
}
    }
    if(!pq.empty())
    {
        return pq.top();
    }
    return 0;
    
    }
};