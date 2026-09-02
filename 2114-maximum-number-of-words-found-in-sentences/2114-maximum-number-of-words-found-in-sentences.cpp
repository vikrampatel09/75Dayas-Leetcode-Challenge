class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int result = 0 ;

        for( int i = 0 ; i < n ; i++){
            int count = 0;
                for( int j = 0 ; j < sentences[i].size() ; j++){
                    if( sentences[i][j] ==' '){
                        count++;
                    }
                }
          result = max( result , count + 1);
        }
        return result;
    }
};