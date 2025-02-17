class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int, vector<int>> maxHeap(stones.begin(), stones.end());

        while(maxHeap.size() != 1 && !maxHeap.empty()){
            int top1 = maxHeap.top();
            maxHeap.pop();
            int top2 = maxHeap.top();
            maxHeap.pop();
            if(top1 == top2){
                continue;
            }else{
                maxHeap.push(top1 - top2);
            }
        }

        return maxHeap.empty() ? 0 : maxHeap.top();
    }
};
