#include<iostream>
#include<stdlib.h>
using namespace std;

class Subjects{
    public:
        //char s1[40],s2[40],s3[40],s4[40],s5[40],s6[40];
        string s1, s2, s3, s4, s5, s6;
        string subjectName[6]={"PROGRAMMING","PHYSICS","ENGLISH","GRAPHIC","MATH4","ACCOUNTING"};

    void subValidation(string sub)
    {
        for(int i=0; i<sub.size(); i++)
        {
            if(sub[i]>=97 && sub[i]<=122)
            {
                sub[i]=sub[i]-32;
            }
        }

                if(!sub.compare(subjectName[0])==0&&!sub.compare(subjectName[1])==0&&!sub.compare(subjectName[2])==0&&
                   !sub.compare(subjectName[3])==0&&!sub.compare(subjectName[4])==0&&!sub.compare(subjectName[5])==0)
                    {
                        cout<<sub<<endl;
                    cout<<"Invalid Subject Name"<<endl;
                    exit(1);
                }

        }


};

class RegFees{
    private:
        int total_fees;
    public:
        int get_fees(int numberOfSub){
            total_fees=(numberOfSub*3)*5500;
            return total_fees;
        }
};



class CoursePlan: public Subjects , public RegFees{
public:
    string batch[3]={"A","B","C"};

    void SetNumSub4()
            {
                cout<<"Enter your first subject"<<endl;
                cin>>s1;
                subValidation(s1);
                cout<<"Enter your second subject"<<endl;
                cin>>s2;
                subValidation(s2);
                cout<<"Enter your third subject"<<endl;
                cin>>s3;
                subValidation(s3);
                cout<<"Enter your fourth subject"<<endl;
                cin>>s4;
                subValidation(s4);

            }
           void GetNumSub4(){
               cout<<"Your subjects are: "<<endl;
               cout<<"                  1."<<s1<<endl;
               cout<<"                  2."<<s2<<endl;
               cout<<"                  3."<<s3<<endl;
               cout<<"                  4."<<s4<<endl;
               cout<<"Batch no: "<<batch[0] <<endl;
               cout<<"Total amount to be paid "<<get_fees(4)<<" taka"<<endl;


           }
/////////////////////////////////////////////////////////////////////////////////

           void SetNumSub5()
            {

                cout<<"Enter your first subject"<<endl;
                cin>>s1;
                subValidation(s1);
                cout<<"Enter your second subject"<<endl;
                cin>>s2;
                subValidation(s2);
                cout<<"Enter your third subject"<<endl;
                cin>>s3;
                subValidation(s3);
                cout<<"Enter your fourth subject"<<endl;
                cin>>s4;
                subValidation(s4);
                cout<<"Enter your fifth subject"<<endl;
                cin>>s5;
                subValidation(s5);
            }

           void GetNumSub5(){
               cout<<"Your subjects are: "<<endl;
               cout<<"                  1."<<s1<<endl;
               cout<<"                  2."<<s2<<endl;
               cout<<"                  3."<<s3<<endl;
               cout<<"                  4."<<s4<<endl;
               cout<<"                  5."<<s5<<endl;
               cout<<"Batch no: "<<batch[1] <<endl;
               cout<<"Total amount to be paid "<<get_fees(5)<<" taka"<<endl;
           }

/////////////////////////////////////////////////////////////////////////////////////////////
            void SetNumSub6()
            {
                cout<<"Enter your first subject"<<endl;
                cin>>s1;
                subValidation(s1);
                cout<<"Enter your second subject"<<endl;
                cin>>s2;
                subValidation(s2);
                cout<<"Enter your third subject"<<endl;
                cin>>s3;
                subValidation(s3);
                cout<<"Enter your fourth subject"<<endl;
                cin>>s4;
                subValidation(s4);
                cout<<"Enter your fifth subject"<<endl;
                cin>>s5;
                subValidation(s5);
                cout<<"Enter your sixth subject"<<endl;
                cin>>s6;
                subValidation(s6);
            }

           void GetNumSub6(){
               cout<<"Your subjects are: "<<endl;
               cout<<"                  1."<<s1<<endl;
               cout<<"                  2."<<s2<<endl;
               cout<<"                  3."<<s3<<endl;
               cout<<"                  4."<<s4<<endl;
               cout<<"                  5."<<s5<<endl;
               cout<<"                  6."<<s6<<endl;
               cout<<"Batch no: "<<batch[2] <<endl;
               cout<<"Total amount to be paid "<<get_fees(6)<<" taka"<<endl;

           }

};




int main(){


    CoursePlan cp;


 cout<<"                                      **********5th Semester Registration**********"<<endl;
 cout<<" "<<endl;
 cout<<" "<<endl;

 cout<<"Your subjects in this semester are:  "<<endl;
 cout<<"                                   1. "<<cp.subjectName[0]<<endl;
 cout<<"                                   2. "<<cp.subjectName[1]<<endl;
 cout<<"                                   3. "<<cp.subjectName[2]<<endl;
 cout<<"                                   4. "<<cp.subjectName[3]<<endl;
 cout<<"                                   5. "<<cp.subjectName[4]<<endl;
 cout<<"                                   6. "<<cp.subjectName[5]<<endl;
 cout<<" "<<endl;
 cout<<">>You have to choose minimum 4 subjects"<<endl;
 cout<<">>Per subject contain 3 credits"<<endl;
 cout<<">>Per credit costs 5500 taka "<<endl;
 cout<<" "<<endl;



            cout<<"How many subjects you want to choose?"<<endl;

int numSub;
cin>>numSub;
            if(numSub == 4){cp.SetNumSub4(); cp.GetNumSub4(); }

            else if(numSub == 5){cp.SetNumSub5(); cp.GetNumSub5();}

            else if(numSub == 6) {cp.SetNumSub6(); cp.GetNumSub6();}

            else{cout<<"Invalid Number"<<endl;}




}
