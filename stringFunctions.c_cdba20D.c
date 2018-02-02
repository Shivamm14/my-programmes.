#include <stdio.h>
#include <stdlib.h>
char* stringcat( char *s1, const char *s2)
{
    char *p;
    p=s1;
    while(*p!='\0')
    ++p;
    while(*s2!= '\0')
    *p++=*s2++;
    *p='\0';
    printf("in function concatinated string is %s\n",s1);
    return s1;
}
int stringcmp(char *s1,const char *s2)

{char *p;
p=s1;
while(*p++ !='\0'&& *s2++ !='\0')
{
    if(*p>*s2)
    return 1;
    if (*s2>*p)
    return -1;
    
    
}
if(*p!='\0')
return 1;
if(*s2!='\0')
return -1;
return 0;
    
}
char *stringcpy(char* s1, const char *s2)
{
    char *p;
    p=s1;
    while(*p++=*s2++);
    return s1;
}

int main()
{
    printf("Hello World!\n");
    char *s1,*s2;
    s1=malloc(100);
    s2=malloc(100);
    scanf("%s%s",s1,s2);
    printf("entered strings are %s and %s\n",s1,s2);
   
    printf("continated string is %s\n", stringcat(s1,s2));
    int a=stringcmp(s1,"shivammishra");
    printf("value of a is %i\n",a);
    printf("earlier %s \n later  ",s2);
    printf("%s\n",stringcpy(s2,"shivam"));
    
    free(s1);
    free(s2);
    
    
    return 0;
}
