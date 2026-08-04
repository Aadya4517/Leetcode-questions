class MyCalendar {
public:
vector<pair<int,int>>booking;
    MyCalendar() {
        
    }
    
    bool book(int startTime, int endTime) {
        for(auto x:booking)
        {
            int start=x.first;
            int end=x.second;
            if(endTime<=start || startTime>=end)
            continue;
            else
            return false;
        }
        booking.push_back({startTime,endTime});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */