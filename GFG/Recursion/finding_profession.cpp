class Solution{
public:
    char profession(int level, int pos){
        if(pos==1)
        {
            return 'e';
        }
        if (profession(level-1, (pos+1)/2) == 'd')
        {
            return (pos%2)? 'd' : 'e';
        }
        return (pos%2)?  'e' : 'd';
    }
};