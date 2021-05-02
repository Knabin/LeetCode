/*
 * 05/02/2021 20:28
 * Status   Accepted	
 * Runtime  100 ms
 * Memory   83.8 MB
 */


class OrderedStream {
public:
    vector<string> stream;
    int lastIndex;
    
    OrderedStream(int n) {
        stream.resize(n);
        lastIndex = 1;
    }
    
    vector<string> insert(int idKey, string value) {
        vector<string> result;
        stream[idKey - 1] = value;
        
        if (idKey == lastIndex)
        {
            for(int i = idKey - 1; i < stream.size(); ++i)
            {
                if (stream[i] == "")
                {
                    lastIndex = i + 1;
                    break;
                }
                result.push_back(stream[i]);
            }
        }
        
        return result;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */