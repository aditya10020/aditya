#include <cmath>

class Investment
{
private:
     double amount;
     int period;
public:
    Investment()
    {
      amount=10000;
      period=2;
    }
  
  bool GetInv(double a, int p)
   {
      if(a>5000 && period >= 2)
        {
	   amount=a;
	   period=p;
	   return true;
        }
     return false;
   }
 
/*
    Investment(double amount,int period)
    {
      this->amount=amount;
      this->period=period;
    }


   double Get_Amount()
  {
     return amount;
  }
  
   void Set_Amount(double aa)
   {
    amount=aa;
    }

   int Get_Period()
  { 
    return period;
  }

   void Set_Period(int pp)
  {
   period=pp;
  }
*/
   double InterestRate() const
  {
    double rate=0;
	if(amount<10000)
  	 rate=8.0;
  	if((amount>10000)&&(amount<50000))
	 rate=9.0;
 	if(amount>50000)
	 rate=10.0;
    
 	if(period>5)
   	  return rate+=1;
        else
  	   return rate;
 }


  bool GetInterest(int Interesttype)
  {
     double rate=InterestRate();
     double a=1+rate/100;
     double total=amount*(pow(a,period));
     double interest=total-amount;
     if(Interesttype != 1)
     {
	printf("Calculated Compound Interest is %.2lf\n",interest);
	return true;
    }
    else
      {
       interest=  amount * InterestRate() * period  / 100;
      printf("Calculated Simple Interest is %.2lf\n",interest);
       return false;
    }

 }
  ~Investment()
   {

   }



};
