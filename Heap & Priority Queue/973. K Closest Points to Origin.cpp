class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<pair<int , pair<int,int>>> maxHeap;

        for(auto point : points){
            int dis = pow(point[0],2) + pow(point[1],2);

            maxHeap.push({dis, {point[0], point[1]}});
            if(maxHeap.size() > k){
                maxHeap.pop();
            }
        }

        vector<vector<int>> res;

        while(!maxHeap.empty()){
            auto point = maxHeap.top().second;
            maxHeap.pop();
            res.push_back({point.first, point.second});
        }
        return res;
    }
};
