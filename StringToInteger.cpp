class Solution {
public:
    int myAtoi(string s) {
        
        auto it = s.begin();
        while (it != s.end()) 
            if (isspace(*it)) 
                it++;
            else
                break;
        
        bool isNeg = false;
        
        if (*it == '-') {
            isNeg = true;
            it++; 
        } 
        
        else if (*it == '+')
            it++;
        
        else if(!isdigit(*it)) 
            return 0;
        
        while(*it == '0') 
            it++;
        
        
        auto itt = it;
        
        while (itt != s.end()) 
            if (isdigit(*itt)) 
                itt++;
            else
                break;
        
        auto _size = distance(it,itt);
        
        if ( _size > 10) 
            return ((isNeg) ? numeric_limits<int>::min() : numeric_limits<int>::max());  
        
        long temp = 0;
        for (unsigned i = 1; i <= _size; i++) 
            temp += int(*it++ - '0') * pow (10, _size - i);
        
        if (fabs(temp) > numeric_limits<int>::max())
            return ((isNeg) ? numeric_limits<int>::min() : numeric_limits<int>::max());
        
        return static_cast<int> (((isNeg) ? temp * -1 : temp));
    }
};
