class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        stack<int>St;

        for( int i = 0 ; i < operations.size() ; i++){

            if( operations[i] == "C"){

                St.pop();

            }else if( operations[i] == "D"){

                St.push(St.top() * 2);

            }else if( operations[i] == "+"){

               int a = St.top();
               St.pop();

               int b = St.top();
               St.push(a);
               St.push( a + b);

            }else{

                St.push(stoi(operations[i]));
            }
        }
        int sum = 0 ;

        while( !St.empty()){

            sum += St.top();
            St.pop();
        }
        return sum;
    }
};