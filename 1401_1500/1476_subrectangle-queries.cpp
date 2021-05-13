/*
 * 04/23/2021 18:53
 * Status   Accepted	
 * Runtime  4 ms
 * Memory   9.8 MB
 */


class SubrectangleQueries {
public:
    vector<vector<int>> _rec;
    
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        _rec = rectangle;
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        for (int i = row1; i <= row2; ++i)
        {
            for (int j = col1; j <= col2; ++j)
            {
                _rec[i][j] = newValue;
            }
        }
    }
    
    int getValue(int row, int col) {
        return _rec[row][col];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */