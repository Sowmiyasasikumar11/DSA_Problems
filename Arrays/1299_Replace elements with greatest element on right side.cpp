class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        int n = arr.size();

        for(int i = 0; i < n; i++) {

            int maxElement = -1;

            for(int j = i + 1; j < n; j++) {

                if(arr[j] > maxElement) {
                    maxElement = arr[j];
                }
            }

            arr[i] = maxElement;
        }

        return arr;
    }
};