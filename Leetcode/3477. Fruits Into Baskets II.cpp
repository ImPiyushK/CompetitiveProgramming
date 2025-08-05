class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int c = 0;
        for(int i = 0 ; i < fruits.size() ; ++i){
            for(int j = 0 ; j < baskets.size() ; ++j){
                if(fruits[i] <= baskets[j]){
                    c++;
                    basket[j] = -1;
                    break;
                }
            }
        }
        return fruits.size() - c;
    }
};