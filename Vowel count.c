#include<stdio.h>

int get_count(const char *s)
{
  int count = 0;
  for(int i=0;s[i];i++)
    {
      if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
      {
        count++;
      }
    }
  return count;
}
