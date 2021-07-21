#include "department.h"

int main(){

	department c;
	int inp, num, marks; cin>>inp;
	while(inp!=-1){
		if(inp==1){
			cin>>num>>marks;
			c.setMarks(num,marks);
		}
		else if(inp==2){
			cout<<c.getHighest()<<endl;
		}
		else if(inp==3){
			cout<<c.getAverage()<<endl;
		}
		else if(inp==4){
			cin>>num;
			c.fetchStudent(num);
		}
		else if(inp==5){
			char course_id[5];
			cin>>course_id;
			c.addCourse((char*)course_id);
		}
		else if(inp==6){
			c.listCourses();
		}
		else cout<<"Invalid Input\n";
		cin>>inp;
	}

}