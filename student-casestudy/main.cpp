#include <iostream>
using namespace std;
class Student{
public:

    float getTotalMarks() const {
        return totalMarks;
    }

    float getPercentage() {
        return percentage;
    }
    void setId(int i){
        id = (i >= 0 )? i : 0;
    }

    void setName(string n){
        name = n;
    }

    void setMath(float m){
        math = ((m >= 0) && (m <= 100)) ? m : 0;
    }
    void setScience(float s){
        science = ((s >= 0) && (s <= 100)) ? s : 0;
    }
    void setUrdu(float u){
        urdu = ((u >= 0) && (u <= 100)) ? u : 0;
    }
    void setEnglish(float e){
        english = ((e >= 0) && (e <= 100)) ? e : 0;
    }
    string getName(){
        return name;
    }
    float getMath(){
        return math;
    }
    float getScience(){
        return science;
    }
    /*string getName(){
        return name;
    }*/
    int getId(){
        return id;
    }
    void display(){
        process();
        cout<<"Student[ Id : "<<id<<" , Name = "<<name
            <<" , Math = "<<math<<" , Science = "<<science
            <<", Urdu = "<<urdu<<" , English = "<<english
            <<" , Marks Obtained = "<<totalMarks<<" , Percentage = "<<percentage<<" ] "<<endl;
    }
private:
    void process(){
        totalMarks = urdu + science + english + math;
        percentage = (totalMarks * 100.0f) / 400.0f;
    }

    int id;
    string name;
    float math;
    float science;
    float urdu;
    float english;
    float totalMarks;
    float percentage;
};

int main() {
    const int size = 3;
    Student s[size];

    int id[size];
    string name[size];
    float math[size];
    float science[size];
    float urdu[size];
    float english[size];

    for (int i = 0; i < size; ++i) {
        cout<<"Enter student Id : "<<endl;
        cin>>id[i];
        cout<<"Enter student Name : "<<endl;
        cin>>name[i];
        cout<<"Enter Math Marks : "<<endl;
        cin>>math[i];
        cout<<"Enter Science Marks : "<<endl;
        cin>>science[i];
        cout<<"Enter Urdu Marks : "<<endl;
        cin>>urdu[i];
        cout<<"Enter English Marks : "<<endl;
        cin>>english[i];

        s[i].setId(id[i]);
        s[i].setName(name[i]);
        s[i].setScience(science[i]);
        s[i].setUrdu(urdu[i]);
        s[i].setMath(math[i]);
        s[i].setEnglish(english[i]);
    }

    for (int j = 0; j < size; ++j) {
        s[j].display();
    }
    s[2].setMath(88);
    for (int j = 0; j < size; ++j) {
        s[j].display();
    }
    return 0;
}
