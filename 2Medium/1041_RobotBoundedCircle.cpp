class Solution {
private:
    bool checkOrigin(int h, int v) { return (h==0 && v==0); }
    
public:
    bool isRobotBounded(string instructions) {
        char cdir='N';
        int v=0, h=0;
        
        for(char c: instructions) {
            if(c=='G') {
                v+= cdir == 'N' ? 1 : 0; 
                v+= cdir == 'S' ? -1 : 0; 
                h+= cdir == 'E' ? 1 : 0; 
                h+= cdir == 'W' ? -1 : 0; 
            }
            else {
                if(cdir=='N') cdir = c == 'L' ? 'W' : 'E';
                else if(cdir=='S') cdir = c == 'L' ? 'E' : 'W';
                else if(cdir=='E') cdir = c == 'L' ? 'N' : 'S';
                else if(cdir=='W') cdir = c == 'L' ? 'S' : 'N';
               } 
            }
        if(checkOrigin(h, v) || cdir!='N') return true;
        return false;
    }
};