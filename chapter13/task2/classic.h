#ifndef _CLASSIC_H_
#define _CLASSIC_H_

class Cd
{
private:
   char*   m_pPerformers;
   char*   m_pLabel;
   int     m_nSelections;
   double  m_dPlayTime;
public:
   Cd();
   Cd(const char* s1, const char* s2, int sel, double play);
   Cd(const Cd& cd);
   virtual ~Cd();
   virtual void Report() const; 
   Cd& operator=(const Cd& cd);
};

class Classic : public Cd
{
private:
   char*   m_pMainPart;
public:
   Classic();
   Classic(const char* mainpart, const char* s1, const char* s2, int sel, double play);
   Classic(const Classic& cl);
   virtual ~Classic();
   virtual void Report() const;
   Classic& operator=(const Classic& cl);
};
#endif
