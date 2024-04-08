class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int c_stu_zero = 0;
        int c_stu_one = 0;
        for(int i=0;i<students.size();i++){
            if(students[i] == 1) c_stu_one++;
            else c_stu_zero++;
        }
        int p = sandwiches.size()-1; 
        int i = 0;
        int j = 0;
        while(i<=p){
        if(sandwiches[i] == 1 && c_stu_one ==0 ) return (sandwiches.size()-i);
        else if(sandwiches[i] == 0 && c_stu_zero ==0 ) return (sandwiches.size()-i);
        else {
            while(students[j]!=sandwiches[i]){
                students.push_back(students[j]);
                j++;
            }
            if(sandwiches[i] == 1) c_stu_one--;
            else c_stu_zero--;
             i++;
           }
        }
        return 0;
       
    }
};