class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minangle=minutes*6;
        double hourangle=minutes*0.5+hour*30;

        double diff=abs(hourangle-minangle);
        return min(diff,360-diff);
    }
};