
// Time Complexity- O(N*N)
// Auxiliary Space- O(1)
class Solution {
public:
    int maxArea(vector<int>& height) {
        int result=0;
        for(int i=0;i<height.size()-1;i++){
            for(int j=i+1;j<height.size();j++){
                result=max(result,(j-i)*min(height[i],height[j]));
            }
        }
        return result;
    }
};

// Time Complexity- O(N)
// Auxiliary Space- O(1) 
class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0,end=height.size()-1,result=0;
        while(start<end){
            result=max(result,(end-start)*min(height[start],height[end]));
            if(height[start]<height[end]) start++; else end--;
        }
        return result;
    }
};