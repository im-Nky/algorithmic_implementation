vector<int> rotateLeft(int d, vector<int> arr) {
    vector <int> res;
    for(int i=d;i<arr.size();i++) {
        res.push_back(arr[i]);
    }
    for(int i=0;i<d;i++){
        res.push_back(arr[i]);
    }
    return res;
}
