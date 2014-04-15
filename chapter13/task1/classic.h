#ifndef _CLASSIC_H_
#define _CLASSIC_H_

class Cd
{
protected:
   enum { MAX_PERFORMERS_SIZE = 50  };
private:
   enum { MAX_LABEL_SIZE = 20 };
   char   mPerformers[MAX_PERFORMERS_SIZE]; 
   char   mLabel[MAX_LABEL_SIZE];
   int    mSelections;
   double mPlayTime;
public:
   Cd(const char* s1,const char* s2, int n, double x);
   Cd(const Cd& cd);
   Cd();
   ~Cd();
   virtual void Report() const;
   Cd& operator=(const Cd& cd);
};

class Classic : public Cd
{
private:
   char   mMainPart[MAX_PERFORMERS_SIZE];
public:
   Classic(const char* s1, const char* s2,
           const char* s3, int n, double x);
   Classic();
   Classic(const Classic& cd);
   virtual void Report() const;
   Classic& operator=(const Classic& cl);
};
#endif
