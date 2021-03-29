#include<iostream>
#include<windows.h>
#include<iomanip>
#include<string.h>
#include<fstream>
#include<ostream>

using namespace std;
void list();
int contact_agent();
class premium_calc
{

private:

    int age[10];
    string name[10];
    float premium[10];
    float premiumcompare[10];

public:
void inputdata(int i)
{
    int j;
    string next;
    char yn;
    system("cls");
   // cout<<"this is the input table"<<endl<<endl;
    cout<<left<<setw(20)<<"Sr No."<<left<<setw(20)<<"name"<<setw(20)<<"Age"<<setw(20)<<"premium"<<endl;
    for(j=0;j<=i;j++)
        {
        if(j==0||j==1)
            cout<<left<<setw(20)<<j+1<<left<<setw(20)<<name[j]<<setw(20)<<age[j]<<setw(20)<<premium[j]<<endl;
        if(j==2)
            cout<<left<<setw(20)<<j+1<<left<<setw(20)<<name[j]<<setw(20)<<age[j]<<setw(20)<<0.5*premium[j]<<endl;
        if(j>2)
            cout<<left<<setw(20)<<j+1<<left<<setw(20)<<name[j]<<setw(20)<<age[j]<<setw(20)<<0.4*premium[j]<<endl;
        }

}

void finaldata(int i)
{
    int j;
    float total=0;
    string next;
    char yn;
    system("cls");

    cout<<left<<setw(20)<<"Sr No."<<left<<setw(20)<<"name"<<setw(20)<<"Age"<<setw(20)<<"premium"<<endl;
    for(j=0;j<=i;j++)
        {
        if(j==0||j==1)
            {
                cout<<left<<setw(20)<<j+1<<left<<setw(20)<<name[j]<<setw(20)<<age[j]<<setw(20)<<premium[j]<<endl;
                total=total+premium[j];
            }

        if(j==2)
            {
                cout<<left<<setw(20)<<j+1<<left<<setw(20)<<name[j]<<setw(20)<<age[j]<<setw(20)<<0.5*premium[j]<<endl;
                total=total+0.5*premium[j];
            }
        if(j>2)
        {
            cout<<left<<setw(20)<<j+1<<left<<setw(20)<<name[j]<<setw(20)<<age[j]<<setw(20)<<0.4*premium[j]<<endl;
            total=total+0.4*premium[j];

        }

        }

        cout<<left<<setw(20)<<" "<<left<<setw(20)<<"GST"<<setw(20)<<" "<<setw(20)<<total*0.18<<endl;
        total=total+0.18*total;

        cout<<left<<setw(20)<<" "<<left<<setw(20)<<"TOTAL"<<setw(20)<<" "<<setw(20)<<total<<endl<<endl<<endl;





}
int plancomapare(int i,int r,int p)
{
    int j,z=i;
    float total=0;
    string next;
    char yn;
    float total2=0;
    float gst1=0,gst2=0;
    system("cls");

    cout<<left<<setw(20)<<"Sr No."<<left<<setw(20)<<"name"<<setw(20)<<"Age"<<setw(10)<<"premium"<<setw(10)<<p<<setw(10)<<"premium"<<r<<endl;


    for(j=0;j<i;j++)
         {
        if(j==0||j==1)
            {
                premiumcompare[j]=premium1(r,age[j]);

                cout<<left<<setw(20)<<j+1<<left<<setw(20)<<name[j]<<setw(20)<<age[j]<<setw(20)<<premium[j]<<setw(20)<<premiumcompare[j]<<endl;
                total=total+premium[j];
                total2=total2+premiumcompare[j];
     //           cout<<"total is "<<total<<" "<<"total 2 is "<<total2<<endl;
            }

        if(j==2)
            {
                premiumcompare[j]=premium1(r,age[j]);
                cout<<left<<setw(20)<<j+1<<left<<setw(20)<<name[j]<<setw(20)<<age[j]<<setw(20)<<0.5*premium[j]<<setw(20)<<0.5*premiumcompare[j]<<endl;
                total=total+0.5*premium[j];
                total2=total2+0.5*premiumcompare[j];
  //              cout<<"total is "<<total<<" "<<"total 2 is "<<total2<<endl;
            }
        if(j>2)
        {
            premiumcompare[j]=premium1(r,age[j]);
            cout<<left<<setw(20)<<j+1<<left<<setw(20)<<name[j]<<setw(20)<<age[j]<<setw(20)<<0.4*premium[j]<<setw(20)<<0.4*premiumcompare[j]<<endl;
            total=total+0.4*premium[j];
            total2=total2+0.4*premiumcompare[j];
//            cout<<"total is "<<total<<" "<<"total 2 is "<<total2<<endl;
        }

        }

        gst1=total*0.18;
        gst2=total2*0.18;

        cout<<left<<setw(20)<<" "<<left<<setw(20)<<"TOTAL BEFORE GST"<<setw(20)<<" "<<setw(20)<<total<<setw(20)<<total2<<endl;

        cout<<left<<setw(20)<<" "<<left<<setw(20)<<"GST"<<setw(20)<<" "<<setw(20)<<gst1<<setw(20)<<gst2<<endl;
        total=total+gst1;
        total2=total2+gst2;

        cout<<left<<setw(20)<<" "<<left<<setw(20)<<"TOTAL"<<setw(20)<<" "<<setw(20)<<total<<setw(20)<<total2<<endl<<endl<<endl;

        cout<<"enter plan you want to opt for :";
        cin>>p;

 //   cout<<left<<setw(20)<<"Sr No."<<left<<setw(20)<<"name"<<setw(20)<<"Age"<<setw(20)<<"premium"<<endl;
    for(j=0;j<z;j++)
        {
        if(j==0||j==1)
            {
                premium[j]=premium1(p,age[j]);
            }

        if(j==2)
            {
                premium[j]=premium1(p,age[j]);
            }
        if(j>2)
        {
            premium[j]=premium1(p,age[j]);

        }

        }
return p;
}
void agegreaterthen60(int i)
{
        system("cls");
        cout<<"You cannot enter age above 60.Please reenter the above data"<<endl<<endl;

            cout<<"enter name of the member : "<<i+1;
            cin>>name[i];



            cout<<"enter age of the member : "<<i+1;
            cin>>age[i];

                if(age[i]>60)
                {
                     agegreaterthen60(i);
                }
}
float premium1(int sum_insured,int age)
{
    //PREMIUM CALCUATION FOR SUM_INSURED 1 LAC
    if(sum_insured==1)
    {
        if(age>=1&&age<=20)
        {
            return 1029;
        }
        if(age>20&&age<=35)
        {
            return 1530;
        }
        if(age>35&age<=45)
        {
            return 1716;
        }
        if(age>45&&age<=55)
        {
            return 2106;
        }
        if(age>55&&age<=60)
        {
            return 3810;
        }
        if(age>60&&age<=66)
        {
            return 4822;
        }
          if(age>66&&age<=70)
        {
            return 5302;
        }
        if(age>70&&age<=75)
        {
            return 5829;
        }
          if(age>75&&age<=80)
        {
            return 6409;
        }
        if(age>80)
        {
            return 7048;
        }
    }

  //PREMIUM CALCUATION FOR SUM_INSURED 2 LAC
    if(sum_insured==2)
    {
        if(age>=1&&age<=20)
        {
            return 1862;
        }
        if(age>20&&age<=35)
        {
            return 2051;
        }
        if(age>35&age<=45)
        {
            return 2592;
        }
        if(age>45&&age<=55)
        {
            return 3497;
        }
        if(age>55&&age<=60)
        {
            return 5915;
        }
        if(age>60&&age<=66)
        {
            return 8175;
        }
          if(age>66&&age<=70)
        {
            return 8990;
        }
        if(age>70&&age<=75)
        {
            return 9887;
        }
          if(age>75&&age<=80)
        {
            return 10873;
        }
        if(age>80)
        {
            return 11957;
        }
    }

//PREMIUM CALCUATION FOR SUM_INSURED 3 LAC
    if(sum_insured==3)
    {
        if(age>=1&&age<=20)
        {
            return 2249;
        }
        if(age>20&&age<=35)
        {
            return 2720;
        }
        if(age>35&age<=45)
        {
            return 3552;
        }
        if(age>45&&age<=55)
        {
            return 4929;
        }
        if(age>55&&age<=60)
        {
            return 7986;
        }
        if(age>60&&age<=66)
        {
            return 11435;
        }
          if(age>66&&age<=70)
        {
            return 12576;
        }
        if(age>70&&age<=75)
        {
            return 13831;
        }
          if(age>75&&age<=80)
        {
            return 15211;
        }
        if(age>80)
        {
            return 16730;
        }
    }

//PREMIUM CALCUATION FOR SUM_INSURED 4 LAC
    if(sum_insured==4)
    {
        if(age>=1&&age<=20)
        {
            return 2747;
        }
        if(age>20&&age<=35)
        {
            return 2944;
        }
        if(age>35&age<=45)
        {
            return 4726;
        }
        if(age>45&&age<=55)
        {
            return 6465;
        }
        if(age>55&&age<=60)
        {
            return 10170;
        }
        if(age>60&&age<=66)
        {
            return 13127;
        }
          if(age>66&&age<=70)
        {
            return 14437;
        }
        if(age>70&&age<=75)
        {
            return 15878;
        }
          if(age>75&&age<=80)
        {
            return 17464;
        }
        if(age>80)
        {
            return 19207;
        }
    }

//PREMIUM CALCUATION FOR SUM_INSURED 5 LAC
    if(sum_insured==5)
    {
        if(age>=1&&age<=20)
        {
            return 3406;
        }
        if(age>20&&age<=35)
        {
            return 3491;
        }
        if(age>35&age<=45)
        {
            return 5767;
        }
        if(age>45&&age<=55)
        {
            return 7552;
        }
        if(age>55&&age<=60)
        {
            return 11626;
        }
        if(age>60&&age<=66)
        {
            return 14819;
        }
          if(age>66&&age<=70)
        {
            return 16299;
        }
        if(age>70&&age<=75)
        {
            return 17296;
        }
          if(age>75&&age<=80)
        {
            return 19716;
        }
        if(age>80)
        {
            return 21685;
        }
    }
//PREMIUM CALCUATION FOR SUM_INSURED 6 LAC
    if(sum_insured==6)
    {
        if(age>=1&&age<=20)
        {
            return 3406;
        }
        if(age>20&&age<=35)
        {
            return 3491;
        }
        if(age>35&age<=45)
        {
            return 5767;
        }
        if(age>45&&age<=55)
        {
            return 7552;
        }
        if(age>55&&age<=60)
        {
            return 11626;
        }
        if(age>60&&age<=66)
        {
            return 14819;
        }
          if(age>66&&age<=70)
        {
            return 16219;
        }
        if(age>70&&age<=75)
        {
            return 17926;
        }
          if(age>75&&age<=80)
        {
            return 19716;
        }
        if(age>80)
        {
            return 21685;
        }
    }

//PREMIUM CALCUATION FOR SUM_INSURED 7 LAC
    if(sum_insured==7)
    {
        if(age>=1&&age<=20)
        {
            return 4327;
        }
        if(age>20&&age<=35)
        {
            return 5326;
        }
        if(age>35&age<=45)
        {
            return 7906;
        }
        if(age>45&&age<=55)
        {
            return 12900;
        }
        if(age>55&&age<=60)
        {
            return 19428;
        }
        if(age>60&&age<=66)
        {
            return 25089;
        }
          if(age>66&&age<=70)
        {
            return 27593;
        }
        if(age>70&&age<=75)
        {
            return 30348;
        }
          if(age>75&&age<=80)
        {
            return 33377;
        }
        if(age>80)
        {
            return 36710;
        }
    }

//PREMIUM CALCUATION FOR SUM_INSURED 8 LAC
    if(sum_insured==8)
    {
        if(age>=1&&age<=20)
        {
            return 5170;
        }
        if(age>20&&age<=35)
        {
            return 6241;
        }
        if(age>35&age<=45)
        {
            return 9279;
        }
        if(age>45&&age<=55)
        {
            return 13631;
        }
        if(age>55&&age<=60)
        {
            return 20476;
        }
        if(age>60&&age<=66)
        {
            return 26336;
        }
          if(age>66&&age<=70)
        {
            return 28964;
        }
        if(age>70&&age<=75)
        {
            return 31856;
        }
          if(age>75&&age<=80)
        {
            return 35036;
        }
        if(age>80)
        {
            return 38535;
        }
    }

//PREMIUM CALCUATION FOR SUM_INSURED 9 LAC
    if(sum_insured==9)
    {
        if(age>=1&&age<=20)
        {
            return 5652;
        }
        if(age>20&&age<=35)
        {
            return 6757;
        }
        if(age>35&age<=45)
        {
            return 9752;
        }
        if(age>45&&age<=55)
        {
            return 14275;
        }
        if(age>55&&age<=60)
        {
            return 21397;
        }
        if(age>60&&age<=66)
        {
            return 27435;
        }
          if(age>66&&age<=70)
        {
            return 30174;
        }
        if(age>70&&age<=75)
        {
            return 33186;
        }
          if(age>75&&age<=80)
        {
            return 36499;
        }
        if(age>80)
        {
            return 40144;
        }
    }

//PREMIUM CALCUATION FOR SUM_INSURED 10 LAC
    if(sum_insured==10)
    {
        if(age>=1&&age<=20)
        {
            return 6180;
        }
        if(age>20&&age<=35)
        {
            return 7315;
        }
        if(age>35&age<=45)
        {
            return 10176;
        }
        if(age>45&&age<=55)
        {
            return 14851;
        }
        if(age>55&&age<=60)
        {
            return 22222;
        }
        if(age>60&&age<=66)
        {
            return 28418;
        }
          if(age>66&&age<=70)
        {
            return 31255;
        }
        if(age>70&&age<=75)
        {
            return 34376;
        }
          if(age>75&&age<=80)
        {
            return 37808;
        }
        if(age>80)
        {
            return 41584;
        }
    }

//PREMIUM CALCUATION FOR SUM_INSURED 12 LAC
    if(sum_insured==12)
    {
        if(age>=1&&age<=20)
        {
            return 6885;
        }
        if(age>20&&age<=35)
        {
            return 8236;
        }
        if(age>35&age<=45)
        {
            return 11683;
        }
        if(age>45&&age<=55)
        {
            return 16930;
        }
        if(age>55&&age<=60)
        {
            return 25121;
        }
        if(age>60&&age<=66)
        {
            return 32130;
        }
          if(age>66&&age<=70)
        {
            return 35309;
        }
        if(age>70&&age<=75)
        {
            return 38806;
        }
          if(age>75&&age<=80)
        {
            return 42652;
        }
        if(age>80)
        {
            return 46886;
        }
    }

//PREMIUM CALCUATION FOR SUM_INSURED 15 LAC
    if(sum_insured==15)
    {
        if(age>=1&&age<=20)
        {
            return 7323;
        }
        if(age>20&&age<=35)
        {
            return 9463;
        }
        if(age>35&age<=45)
        {
            return 13564;
        }
        if(age>45&&age<=55)
        {
            return 19728;
        }
        if(age>55&&age<=60)
        {
            return 29181;
        }
        if(age>60&&age<=66)
        {
            return 37585;
        }
          if(age>66&&age<=70)
        {
            return 41303;
        }
        if(age>70&&age<=75)
        {
            return 45392;
        }
          if(age>75&&age<=80)
        {
            return 49891;
        }
        if(age>80)
        {
            return 54893;
        }
    }

//PREMIUM CALCUATION FOR SUM_INSURED 18 LAC
    if(sum_insured==18)
    {
        if(age>=1&&age<=20)
        {
            return 7694;
        }
        if(age>20&&age<=35)
        {
            return 10845;
        }
        if(age>35&age<=45)
        {
            return 15528;
        }
        if(age>45&&age<=55)
        {
            return 22732;
        }
        if(age>55&&age<=60)
        {
            return 33550;
        }
        if(age>60&&age<=66)
        {
            return 43669;
        }
          if(age>66&&age<=70)
        {
            return 47988;
        }
        if(age>70&&age<=75)
        {
            return 52739;
        }
          if(age>75&&age<=80)
        {
            return 57966;
        }
        if(age>80)
        {
            return 63715;
        }
    }

//PREMIUM CALCUATION FOR SUM_INSURED 20 LAC
    if(sum_insured==20)
    {
        if(age>=1&&age<=20)
        {
            return 7914;
        }
        if(age>20&&age<=35)
        {
            return 11893;
        }
        if(age>35&age<=45)
        {
            return 16922;
        }
        if(age>45&&age<=55)
        {
            return 24924;
        }
        if(age>55&&age<=60)
        {
            return 36745;
        }
        if(age>60&&age<=66)
        {
            return 48261;
        }
          if(age>66&&age<=70)
        {
            return 53035;
        }
        if(age>70&&age<=75)
        {
            return 58286;
        }
          if(age>75&&age<=80)
        {
            return 64063;
        }
        if(age>80)
        {
            return 70417;
        }
    }


}
void arrangedata(int i)
{

        string temp_name;
        int temp_age;
        float temp_premium;
        int j=i;

        for(;j>0;j--)
        {
            if(age[j-1]<age[j])
            {
                temp_name=name[j];
                name[j]=name[j-1];
                name[j-1]=temp_name;

                temp_age=age[j];
                age[j]=age[j-1];
                age[j-1]=temp_age;

                temp_premium=premium[j];
                premium[j]=premium[j-1];
                premium[j-1]=temp_premium;
            }
        }
}
int premium_calculator(int member,int insured_sum)
{
    system("cls");
    int i,j;
    float total=0,gst=0;

   cout<<"enter data of your family"<<endl<<endl;

   for(i=0;i<member;i++)
   {
        int j=i,n=0;
        char yn;


        cout<<"enter name of the member "<<i+1<<" : ";
        cin>>name[i];



        cout<<"enter age of the member "<<i+1<<" : ";
        cin>>age[i];

            if(age[i]>60)
            {
                 agegreaterthen60(i);

            }


        premium[i]=premium1(insured_sum,age[i]);



        arrangedata(i);

        inputdata(i);
        cout<<"press 1 for next and 0 to reenter ";
        cin>>n;
        if(n==0)
            i--;

       if(i==member-1)
       {
           cout<<"do you want to add more!!(y/n)"<<endl;
           cin>>yn;

           if(yn=='y')
            member++;
           else
           {
               system("cls");
               cout<<"premium calc after adding gst"<<endl;
               finaldata(i);
               cout<<"Do you still want to comapre plan?";
               cin>>yn;



            if(yn=='y')

                {
                    cout<<"enter the sum insured you want to compare: ";
                    cin>>j;
                    insured_sum=plancomapare(member,j,insured_sum);
                    finaldata(i);
                }


            cout<<"want to contact agent !!!(y/n)"<<endl;
            cin>>yn;

            if(yn=='y')
            {
            contact_agent();

            ofstream myFile;
            myFile.open("customer detail.csv",ios::app);
            myFile<<"SR No."<<","<<"name"<<","<<"age"<<","<<"premium"<<insured_sum<<endl;
            for(int j=0;j<=i;j++)
            {
             if(j==0||j==1)
             {
               myFile<<j+1<<","<<name[j]<<","<<age[j]<<","<<premium[j]<<endl;
               total=total+premium[j];
             }

            if(j==2)
            {
                myFile<<j+1<<","<<name[j]<<","<<age[j]<<","<<0.5*premium[j]<<endl;
                total=total+0.5*premium[j];
            }

            if(j>2)
            {
                myFile<<j+1<<","<<name[j]<<","<<age[j]<<","<<0.4*premium[j]<<endl;
                total=total+0.4*premium[j];

            }

            }
            gst=total*0.18;
            myFile<<" "<<","<<"gst"<<","<<" "<<","<<gst<<endl;
            total=total+gst;
            myFile<<" "<<","<<"total"<<","<<" "<<","<<total<<endl;
            }




            else
            {
               system("cls");
                cout<<"you can buy or renew policy at near by center or you can visit website oicl"<<endl;
                cout<<"press 1 to go back to main menu";
                cout<<"press 0 to exit";
                cin>>j;
                if(j==1)
                    list();
                else
                    return 0;
            }



            }
       }
    }
};

void renewalpremium_calculator(int member,int insured_sum)
{
    system("cls");
    int i;


   cout<<"enter data of your family"<<endl<<endl;

   for(i=0;i<member;i++)
   {
        string temp_name;
        int temp_age;
        float temp_premium;
        int j=i;
        char yn;


        cout<<"enter name of the member : "<<i+1;
        cin>>name[i];



        cout<<"enter age of the member : "<<i+1;
        cin>>age[i];

        premium[i]=premium1(insured_sum,age[i]);


        for(;j>0;j--)
        {
            if(age[j-1]<age[j])
            {
                temp_name=name[j];
                name[j]=name[j-1];
                name[j-1]=temp_name;

                temp_age=age[j];
                age[j]=age[j-1];
                age[j-1]=temp_age;

                temp_premium=premium[j];
                premium[j]=premium[j-1];
                premium[j-1]=temp_premium;
            }
        }

       inputdata(i);


       if(i==member-1)
       {
           cout<<"do you want to add more!!(y/n)"<<endl;
           cin>>yn;

           if(yn=='y')
            member++;
           else
           {
              // system("cls");

               //cout<<"premium calc after adding gst"<<endl;
               finaldata(i);
           }
       }
    }
}

};


void get_quote();

int next()
{
    int i;
    cout<<"press 1 for next or 0 to go back to main menu:";
    cin>>i;
    return i;
}

void list();
void check_plan(int i);
void explaindiamondplan(int i)
{
int member;
    system("cls");
    char yn;

    cout<<"In Gold plan you would have the following benfits:"<<endl<<endl<<endl;
    cout<<"Sum insured for Diamond plan is between 12,15,18,20 Lac "<<endl;
    cout<<"Company will pay 100% of the Hospitalisation cost upto the sum insured."<<endl;
    cout<<"Room, Boarding and Nursing Expense will be upto Rs.10000 +0.5% of the Sum Insured per day."<<endl;
    cout<<"Intensive Care Unit(ICU) Expenses will be upto Rs.20000 +1% of the Sum Insured per day."<<endl;
    cout<<"Ambulance service charges as here in after defined as 3000 Rs per Illness and maximum of 8000 Rs per period."<<endl;
    cout<<"Daily Hospital Cash Allowance as hereinafter defined will be 0.1% of Sum Insured per day of Hospitalisation , subject to a maximum compensation for 10 days per Illness and upto 1.5% of the sum insured."<<endl;
    cout<<"Attendant allowance as hereinafter defined.Rs 1000 per day of Hospitalisation subject to maximum of 10 days per illness,15 days per policy period."<<endl;
    cout<<"Maternity expenses as hereinafter automatically cover upto 2.5% of sum Insured."<<endl;
    cout<<"New Born Baby cover as hereinafter Automatic cover upto 2.5% of the Sum Insured upto 90days from the date of birth.Cover beyond 90 days,available for full Sum Insured only on payment of requisite premium."<<endl;
    cout<<"Medical Second Opinion on specified major Illnesses maximum of 15000 Rs. "<<endl;
    cout<<"Organ Donor Benefit when Insured Person is Donor : Maximum of 10% of sum insured"<<endl;
    cout<<"Donor Expenses when Insured Person is Recipient upto sum Insured."<<endl;
    cout<<"Pre and Post Hospitalisation expenses: Medical expenses incurred 30days prior to Hospitalisation and upto 60 days post Hospitalisation"<<endl<<endl<<endl;

    cout<<"Do you want change the sum insured(y/n):";
    cin>>yn;

    if(yn=='y'||yn=='Y')
    {
        cout<<"enter the amount of sum insured :";
        cin>>i;

        check_plan(i);
    }
    else
        {
            cout<<"enter the no of members in family. ";
            cin>>member;


            class premium_calc p1;
            p1.premium_calculator(member,i);
        }


};

void explaingoldplan(int i)
{
    int member;
    system("cls");
    char yn;

    cout<<"In Gold plan you would have the following benfits:"<<endl<<endl<<endl;
    cout<<"Sum insured for Gold plan is between 5 Lac to 10 Lac "<<endl;
    cout<<"Company will pay 100% of the Hospitalisation cost upto the sum insured."<<endl;
    cout<<"Room, Boarding and Nursing Expense will be upto 1 % of the Sum Insured per day."<<endl;
    cout<<"Intensive Care Unit(ICU) Expenses will be upto 2% of the Sum Insured per day."<<endl;
    cout<<"Ambulance service charges as here in after defined as 2000 Rs per Illness and maximum of 6000 Rs per period."<<endl;
    cout<<"Daily Hospital Cash Allowance as hereinafter defined will be 0.1% of Sum Insured per day of Hospitalisation , subject to a maximum compensation for 10 days per Illness and upto 1.5% of the sum insured."<<endl;
    cout<<"Medical Second Opinion on specified major Illnesses maximum of 5000 Rs. "<<endl;
    cout<<"Attendant allowance as hereinafter defined.Rs 500 per day of Hospitalisation subject to maximum of 10 days per illness,15 days per policy period."<<endl;
    cout<<"Medical Second Opinion on specified major Illnesses maximum of 10000 Rs. "<<endl;
    cout<<"Organ Donor Benefit when Insured Person is Donor : Maximum of 10% of sum insured"<<endl;
    cout<<"Donor Expenses when Insured Person is Recipient upto sum Insured."<<endl;
    cout<<"Pre and Post Hospitalisation expenses: Medical expenses incurred 30days prior to Hospitalisation and upto 60 days post Hospitalisation"<<endl<<endl<<endl;

    cout<<"IF YOU INCREASE YOUR SUM INSURED BY :"<<12-i<<" YOU WILL GET FOLLOWING ADDITIONAL BENIFITS:"<<endl<<endl<<endl;
    cout<<"Room, Boarding and Nursing Expense will be upto Rs.10000 +0.5% of the Sum Insured per day."<<endl;
    cout<<"Intensive Care Unit(ICU) Expenses will be upto Rs.20000 +1% of the Sum Insured per day."<<endl;
    cout<<"Ambulance service charges as here in after defined as 3000 Rs per Illness and sum insured maximum of 8000 Rs per period."<<endl;
    cout<<"Attendant allowance as hereinafter defined.Rs 1000 per day of Hospitalisation subject to maximum of 10 days per illness,15 days per policy period."<<endl;
    cout<<"Maternity expenses as hereinafter automatically cover upto 2.5% of sum Insured."<<endl;
    cout<<"New Born Baby cover as hereinafter Automatic cover upto 2.5% of the Sum Insured upto 90days from the date of birth.Cover beyond 90 days,available for full Sum Insured only on payment of requisite premium."<<endl;
    cout<<"Medical Second Opinion on specified major Illnesses maximum of 15000 Rs. "<<endl<<endl<<endl<<endl;

    cout<<"Do you want change the sum insured(y/n):";
    cin>>yn;

    if(yn=='y'||yn=='Y')
    {
        cout<<"enter the amount of sum insured :";
        cin>>i;

        check_plan(i);
    }
    else
        {
            cout<<"enter the no of members in family. ";
            cin>>member;


            class premium_calc p1;
            p1.premium_calculator(member,i);
        }



};

void explainsilverplan(int i)
{
    int member;
    system("cls");
    char yn;

    cout<<"In silver plan you would have the following benfits:"<<endl<<endl<<endl;
    cout<<"Sum insured for silver plan is between 1 Lac to 5 Lac "<<endl;
    cout<<"Company will pay 90% of the Hospitalisation cost upto the sum insured."<<endl;
    cout<<"Room, Boarding and Nursing Expense will be upto 1 % of the Sum Insured per day."<<endl;
    cout<<"Intensive Care Unit(ICU) Expenses will be upto 2% of the Sum Insured per day."<<endl;
    cout<<"Ambulance service charges as here in after defined as 1000 Rs per Illness and 1% of the sum insured maximum of 3000 Rs per period."<<endl;
    cout<<"Medical Second Opinion on specified major Illnesses maximum of 5000 Rs. "<<endl;
    cout<<"Organ Donor Benefit when Insured Person is Donor : Maximum of 10% of sum insured"<<endl;
    cout<<"Donor Expenses when Insured Person is Recipient upto sum Insured."<<endl;
    cout<<"Pre and Post Hospitalisation expenses: Medical expenses incurred 30days prior to Hospitalisation and upto 60 days post Hospitalisation"<<endl<<endl<<endl;

    cout<<"IF YOU INCREASE YOUR SUM INSURED BY :"<<6-i<<" YOU WILL GET FOLLOWING ADDITIONAL BENIFITS:"<<endl<<endl<<endl;

    cout<<"Company will pay 100% of the Hospitalisation cost upto the sum insured."<<endl;
    cout<<"Ambulance service charges as here in after defined as 2000 Rs per Illness and sum insured maximum of 6000 Rs per period."<<endl;
    cout<<"Daily Hospital Cash Allowance as hereinafter defined will be 0.1% of Sum Insured per day of Hospitalisation , subject to a maximum compensation for 10 days per Illness and upto 1.5% of the sum insured."<<endl;
    cout<<"Attendant allowance as hereinafter defined.Rs 500 per day of Hospitalisation subject to maximum of 10 days per illness,15 days per policy period."<<endl;
    cout<<"Medical Second Opinion on specified major Illnesses maximum of 10000 Rs. "<<endl<<endl<<endl<<endl;

    cout<<"Do you want increase the sum insured(y/n):";
    cin>>yn;


      if(yn=='y'||yn=='Y')
        {
        cout<<"enter the amount of sum insured :";
        cin>>i;

        check_plan(i);
        }
    else
        {
            cout<<"enter the no of members in family. ";
            cin>>member;


            class premium_calc p1;
            p1.premium_calculator(member,i);
        }


};

void mediclaim()
{
    int i;
    system("cls");

    if(i==0)
    {
        list();
    }

    else
    {
        cout<<"enter the amount of sum insured in lacs:" ;
        cin>>i;
        check_plan(i);


    }

};
void check_plan(int i)
{
    if(i>=1&&i<=5)
            explainsilverplan(i);
       else if(i>5&&i<=10)
          explaingoldplan(i);
        else if(i==12||i==15||i==18||i==20)
            explaindiamondplan(i);
        else if(i==11||i==13||i==14||i==16||i==17||i==19)
            {
                system("cls");
                cout<<"please enter a plan from 12,15,18,20 lacs.";
                cin>>i;
                check_plan(i);
            }
}

void function(int n);

//list displaying all the basic inputs...
void list()
{
    system("cls");
    int i,n;
    //for(i=0;i<86;i++)
    //cout<< setfill('~') << setw(1)<<"" << setfill('-') << setw(1)<<"";
    //cout<<endl<<endl;
    cout<<setfill(' ')<< setw(85)<<"INSURE POINT"<<endl<<endl<<endl;

    cout<<"(1).BUY A POLICY"<<endl;
    cout<<"(2).RENEW POLICY"<<endl;
    cout<<"(3).CONTACT AGENT"<<endl;
    cout<<"(4).GET QUOTE"<<endl;




    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;



    cout<<"choose any one of the above:";
    cin>>n;

    function(n);
   // cout<< setfill('~') << setw(1)<<"" << setfill('-') << setw(1)<<"";
}
void buy_policy()
{

    mediclaim();
    //system("cls");
    //list();
}
void renew_policy()
{
    system("cls");
    int member,insured_sum;
    system("cls");

    cout<<"enter the no of members in family. ";
    cin>>member;

    cout<<"enter the sum insured for the mediclaim (in lacs): ";
    cin>>insured_sum;

    class premium_calc p1;
    p1.renewalpremium_calculator(member,insured_sum);

}

void get_quote()
{
    int member,insured_sum;
    system("cls");

    cout<<"enter the no of members in family. ";
    cin>>member;

    cout<<"enter the sum insured for the mediclaim (in lacs): ";
    cin>>insured_sum;

    class premium_calc p1;
    p1.premium_calculator(member,insured_sum);

    //list();
}

int contact_agent()
{
    char n[10];
    system("cls");
    int i;
    //cout<<"here information regarding agent will be provided."<<endl;
    for(i=0;i<43;i++)
    cout<< setfill('~') << setw(2)<<" " << setfill('-') << setw(2)<<" ";
    cout<<setfill(' ') << setw(85)<<"Agent Information"<<endl;
    cout<<setfill('-')<<setw(172)<<""<<endl;

    cout<<left<< setfill(' ') << setw(58)<<"|(1).Kamlesh Patva"<< setfill(' ') << setw(61)<<"|    |(2).Ravi Patel"<< setfill(' ') << setw(52)<<"|    |(3).Viraj Patva"<<"|"<<endl<<endl;
    cout<<left<< setfill(' ') << setw(58)<<"|    Amin Marg Rajkot"<<setfill(' ') << setw(61)<<"|    |    Navarangpura Ahemdabad" << setfill(' ')<< setw(52)<<"|    |    Anand"<<"|"<<endl<<endl;
    cout<<left<< setfill(' ') << setw(58)<<"|    Office time : 10:00 AM to 8:00 PM"<<setfill(' ') << setw(61)<<"|    |    Office time : 11:00 PM to 7:30 PM"<<setfill(' ') << setw(52)<<"|    |    Office time : 4:00 PM to 7:30 PM"<<"|"<<endl<<endl;
    cout<<left<< setfill(' ') << setw(58)<<"|    Contact no : 9429637250"<< setfill(' ') << setw(61)<<"|    |    Contact no : 7456783250"<< setfill(' ') << setw(52)<<"|    |     Contact no : 7467457887"<<"|"<<endl<<endl;
    cout<<setfill('-')<<setw(172)<<""<<endl;

    cout<<left<< setfill(' ') << setw(58)<<"|(4).Vishruti Patel"<< setfill(' ') << setw(61)<<"|    |(5).Prakash Sharma"<< setfill(' ') << setw(52)<<"|    |(6).Vinay Kumar"<<"|"<<endl<<endl;
    cout<<left<< setfill(' ') << setw(58)<<"|    Nadiad"<<setfill(' ') << setw(61)<<"|    |    Vadodara" << setfill(' ')<< setw(52)<<"|    |    Rajpath road Delhi"<<"|"<<endl<<endl;
    cout<<left<< setfill(' ') << setw(58)<<"|    Office time : 11:00 AM to 4:30 PM"<<setfill(' ') << setw(61)<<"|    |    Office time : 10:00 PM to 8:00 PM"<<setfill(' ') << setw(52)<<"|    |    Office time : 8:00 AM to 7:30 PM"<<"|"<<endl<<endl;
    cout<<left<< setfill(' ') << setw(58)<<"|    Contact no : 8890633220"<< setfill(' ') << setw(61)<<"|    |    Contact no : 7456964342"<< setfill(' ') << setw(52)<<"|    |    Contact no : 9234222320"<<"|"<<endl<<endl;

    cout<<setfill('-')<<setw(172)<<""<<endl;
    cout<<left<< setfill(' ') << setw(58)<<"|(7).Abhiraj Jadeja"<< setfill(' ') << setw(61)<<"|    |(8).Salim Khan"<< setfill(' ') << setw(52)<<"|    |(9).Apurva Mehta"<<"|"<<endl<<endl;
    cout<<left<< setfill(' ') << setw(58)<<"|    Jamanagar"<<setfill(' ') << setw(61)<<"|    |    Lucknow" << setfill(' ')<< setw(52)<<"|    |    Mumbai"<<"|"<<endl<<endl;
    cout<<left<< setfill(' ') << setw(58)<<"|    Office time : 10:00 AM to 7:30 PM"<<setfill(' ') << setw(61)<<"|    |    Office time : 10:00 PM to 6:00 PM"<<setfill(' ') << setw(52)<<"|    |    Office time : 10:00 AM to 5:30 PM"<<"|"<<endl<<endl;
    cout<<left<< setfill(' ') << setw(58)<<"|    Contact no : 986231189"<< setfill(' ') << setw(61)<<"|    |    Contact no : 7867213232"<< setfill(' ') << setw(52)<<"|    |    Contact no : 9452094520"<<"|"<<endl<<endl;
    cout<<setfill('-')<<setw(172)<<""<<endl;
    ofstream myFile;
    myFile.open("customer phone number.csv",ios::app);
    cout<<"enter your contact no ,so that agent can contact you :";
    cin>>n;
    myFile<<n<<endl;

}

//loading screen used for making it atracttive
void loading_screen()
{
    int i;


    for(i=0;i%20==0,i<50;i++)
    {
         cout<<"please use full screen mode to use the application"<<endl;
       cout<<endl<< setfill(' ') << setw(30)<<""<<left<<"Loading "<<setfill('>')<<setw(10)<<""
            <<setfill('>')<<""<<setw(i)<<""<<endl;
        system("cls");
    }
}

void function(int n)
{
    if(n==1)
        buy_policy();
    if(n==2)
        renew_policy();
    if(n==3)
        contact_agent();
    if(n==4)
        get_quote();

}

int main()
{
    loading_screen();
    list();
}
