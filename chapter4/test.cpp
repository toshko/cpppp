// testing some features from the chapter
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct village_people 
{
   int villageFactor;
   int yokelFactor;
   double someOther;
};

int main()
{
   vector<* village_people> vd(3);
   village_people koceto;
   village_people * vp = &koceto;
   vd[0] = vp;
   char animal[20] = "bear";
   village_people s1, s2, s3;
   village_people trio[3];
   
   cout << &animal << endl << (char *) animal << endl;
   char * charpr;
   charpr = animal;
   cin >> charpr;

   cout << *charpr;

#if 0
   enum {Winter, Summer, Spring, Autumn};
   cout << Summer << "ENUM:" << endl;
   village_people koceto;
   koceto.villageFactor = 10;
   koceto.yokelFactor = 10;
   village_people karakashev = {1, 2};
   cout << karakashev.villageFactor << " " << karakashev.yokelFactor << " "
      << karakashev.someOther << endl;
   cout << koceto.villageFactor << endl;
   char str[20] = "Jokovich";
   string str1 = str; 
   str1 += " ";
   str1 += str;
   cout << str1 << endl;

   int *pt;
   village_people *ps;
   double *pntr;
   long long *lpt = new long long;
   village_people *koceto2 = new village_people;
   *koceto2 = { 1, 2, 10.0};
   int balls = 3;
   double buckets = 7;

   int arr[3] = {1, 2 ,3};
   int *arrp = arr;
   cout << "ARR POINTER " << arrp[1] << endl;
   ps = &karakashev;
   double ** dblpntr;
   dblpntr = &pntr;
   pntr = &buckets;
   string * strptr = &str1;
   cout << *(*dblpntr) << endl;
   cout << (*ps).villageFactor << endl;
   *lpt = 1723232;
   cout << *lpt << endl;
   cout << *strptr << endl;
#endif

}

