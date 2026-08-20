
        for(int i = 2; i < n; i++) {

            if(arr1.back() > arr2.back()) {
                arr1.push_back(nums[i]);
            }
            else {
                arr2.push_back(nums[i]);
            }
        }

        arr1.insert(arr1.end(), arr2.begin(), arr2.end());

        return arr1;
    }
};
