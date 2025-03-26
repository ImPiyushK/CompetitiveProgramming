#include <bits/stdc++.h>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    
    while (test_cases--) {
        int array_size, target_value;
        cin >> array_size >> target_value;
        
        vector<int> arrA(array_size), arrB(array_size);
        
        for (int &el : arrA) 
            cin >> el;
        for (int &el : arrB) 
            cin >> el;
        
        long long total_difference = 0;
        int min_extra_steps = INT_MAX;
        
        for (int i = 0; i < array_size; i++) {
            int a = arrA[i], b = arrB[i];
            int delta_a = a - 1, delta_b = b - 1;
            int diff_mod = (delta_b - delta_a + 9) % 9;
            
            int move_count;
            int remaining_steps;
            
            if (diff_mod == 0) {
                move_count = 0;
                remaining_steps = 9;
            } else {
                int increase_steps = diff_mod;
                int decrease_steps = 9 - diff_mod;
                
                if (increase_steps <= decrease_steps) {
                    move_count = increase_steps;
                    remaining_steps = decrease_steps - increase_steps;
                } else {
                    move_count = decrease_steps;
                    remaining_steps = increase_steps - decrease_steps;
                }
            }
            
            total_difference += move_count;
            min_extra_steps = min(min_extra_steps, remaining_steps);
        }
        
        long long remaining_value = target_value - total_difference;
        
        if (remaining_value < 0) {
            cout << "NO\n";
        } else if (remaining_value % 2 == 0) {
            cout << "YES\n";
        } else {
            if (min_extra_steps <= remaining_value) 
                cout << "YES\n";
            else 
                cout << "NO\n";
        }
    }
    return 0;
}
