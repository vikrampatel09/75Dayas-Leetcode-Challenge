class Solution {
public:

bool isSame( int freq1[] , int freq2[]){
    for( int i = 0 ; i < 26 ; i++){
        if( freq1[i] != freq2[i]){
            return false;
        }
    }
    return true;
}


    bool checkInclusion(string s1, string s2) {

        if( s1.length() > s2.length()){
            return false;
        }

        int freq1[26] = {0};
        int freq2[26] = {0};

        for( int i = 0 ; i < s1.length() ; i++){
            freq1[s1[i] - 'a']++;
        }

        int windowsize = s1.length();

        for( int i = 0 ; i < windowsize ; i++){
            
            freq2[s2[i] - 'a']++;
        }
        if( isSame( freq1 , freq2)){
            return true;
        }

        for( int i = windowsize ; i< s2.length() ; i++){
            
            freq2[s2[i] - 'a']++;
            freq2[s2[i - windowsize] - 'a']--;
            
            if(isSame( freq1 , freq2)){
                return true;
            }
        }
        return false;
    }
};