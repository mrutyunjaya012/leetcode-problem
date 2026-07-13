// Last updated: 13/07/2026, 16:20:56
class Solution {
public:
    int myAtoi(string s) {
        int sign=1;
        int i=0;
            while(s[i]==' ')i++;
            if(i<s.length() && s[i]=='-' || s[i]=='+'){
                if(s[i]=='-'){
                sign=-1;
            }
                i++;
            }
            long long sum=0;
            while(i<s.length() && isdigit(s[i])){
                sum=sum*10 + (s[i]-'0');

            if (sign * sum > INT_MAX)
                return INT_MAX;

            if (sign * sum < INT_MIN)
                return INT_MIN;

        i++;
    }
    return sum*sign;
    }
};