class Solution {
public:
      static bool comp(vector<int> &a, vector<int> &b)
      {
        return a[1] < b[1];
    }
     
    int scheduleCourse(vector<vector<int>> &courses){
        
        //soring according to lastday in increasing order.
        sort(courses.begin(), courses.end(), comp);
        
        //priority queue to store duration of couses
        priority_queue<int> maxD;

        int time = 0; // time to store the total time taken
        for (auto course : courses){
            
            //if total time taken including this course is lesser than or equak to the last day then add couse to queue and add the time to total time
            if (time + course[0] <= course[1]){
                time += course[0];
                maxD.push(course[0]);
            }
            
            //else if there are element in priority queue then check if current course is shorter than the max previous couse then just replace that with current
            else if (!maxD.empty() && maxD.top() >= course[0]){
                time = time - maxD.top() + course[0]; //replacing max previous course with current in toytal time
                maxD.pop();                           //taking out max previous
                maxD.push(course[0]);                 //adding current course
            }
        }
        
        //as queue only contains the courses taken so size of queue is the number of courses.
        return maxD.size();
    }
}; 
    