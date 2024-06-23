#include <stdio.h>

int joker(char *s1, char *s2) 
{
  if (s1 == NULL || s2 == NULL)
  {
    return 0;
  }
  if (s1 == NULL && s2 == NULL)
  {
    return 1;
  }
  if(*s1 = '\0' && *s2 = '\0')
  {
    return 1;
  }
  if(*s1 == *s2 || *s2 == '*')
  {
    return joker(s+1,s2) || joker(s1+1,s2+2);
  }
  else
  {
    return joker(s1+1,s2+1);
  }
  return 0;
}