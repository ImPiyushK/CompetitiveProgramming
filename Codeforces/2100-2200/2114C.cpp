#include <iostream>
#include <vector>
#include <algorithm>

const int MAX_COORDINATE = 1000000;
std::vector<int> tree;
std::vector<int> touched_nodes_indices;

void update_segment_tree(int node_idx, int seg_start, int seg_end, int update_pos, int new_dp_val) {
    touched_nodes_indices.push_back(node_idx);

    if (seg_start == seg_end) {
        tree[node_idx] = std::max(tree[node_idx], new_dp_val);
        return;
    }

    int mid = seg_start + (seg_end - seg_start) / 2;
    if (update_pos <= mid) {
        update_segment_tree(2 * node_idx, seg_start, mid, update_pos, new_dp_val);
    } else {
        update_segment_tree(2 * node_idx + 1, mid + 1, seg_end, update_pos, new_dp_val);
    }
    
    tree[node_idx] = std::max(tree[2 * node_idx], tree[2 * node_idx + 1]);
}

int query_segment_tree(int node_idx, int seg_start, int seg_end, int query_L, int query_R) {
    if (query_L > query_R) {
        return 0;
    }
    
    if (query_L <= seg_start && seg_end <= query_R) { 
        return tree[node_idx];
    }
    
    int mid = seg_start + (seg_end - seg_start) / 2;
    int max_val_found = 0;
    
    if (query_L <= mid) {
        max_val_found = std::max(max_val_found, query_segment_tree(2 * node_idx, seg_start, mid, query_L, query_R));
    }
    if (query_R > mid) { 
        max_val_found = std::max(max_val_found, query_segment_tree(2 * node_idx + 1, mid + 1, seg_end, query_L, query_R));
    }
        
    return max_val_found;
}

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    for (int idx : touched_nodes_indices) {
        if (idx < tree.size()) { 
             tree[idx] = 0;
        }
    }
    touched_nodes_indices.clear();

    int max_total_arrays = 0;

    for (int i = 0; i < n; ++i) {
        int current_a_val = a[i];
        
        int dp_val_for_current_a = 1; 

        int max_prev_dp1 = 0;
        if (current_a_val - 2 >= 1) {
            max_prev_dp1 = query_segment_tree(1, 1, MAX_COORDINATE, 1, current_a_val - 2);
        }
        dp_val_for_current_a = std::max(dp_val_for_current_a, max_prev_dp1 + 1);

        int max_prev_dp2 = 0;
        int query_L_case2 = std::max(1, current_a_val - 1);
        int query_R_case2 = current_a_val; 
        
        if (query_L_case2 <= query_R_case2) {
             max_prev_dp2 = query_segment_tree(1, 1, MAX_COORDINATE, query_L_case2, query_R_case2);
        }
        dp_val_for_current_a = std::max(dp_val_for_current_a, max_prev_dp2);
        
        update_segment_tree(1, 1, MAX_COORDINATE, current_a_val, dp_val_for_current_a);
        
        max_total_arrays = std::max(max_total_arrays, dp_val_for_current_a);
    }

    std::cout << max_total_arrays << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    tree.resize(4 * MAX_COORDINATE + 8, 0); 

    int num_test_cases;
    std::cin >> num_test_cases;
    while (num_test_cases--) {
        solve();
    }

    return 0;
}