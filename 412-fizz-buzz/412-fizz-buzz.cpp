class Solution {
public:
    vector<string> fizzBuzz(int i) {
        
        vector<string> result;
        for(int n = 1; n<=i; n++){
            
        if(n%3 == 0 && n%5 == 0)result.push_back("FizzBuzz");
        else if(n%3==0)result.push_back( "Fizz");
        else if(n%5==0)result.push_back("Buzz");
        else result.push_back(to_string(n));
            
        }
            return result;

    }
};