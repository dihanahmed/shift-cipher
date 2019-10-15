#include<stdio.h>
#include<string.h>
int main()
{
    int i,k;
    char ch[100],c;
    printf("write down the key :");
    scanf("%d",&k);
    printf("write down the plain text \n");
    scanf("%s",ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>96)ch[i]-=32;
        if((ch[i]+k)>=91)
            c=((ch[i]+k)%91)+65;
           else c=(ch[i]+k)%91;


        printf(" %c",c);
    }
    printf("\n");
    printf("write down the encrypted message \n");
    scanf("%s",ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>96)ch[i]-=32;
                if((ch[i]-k)<=65)
            c=91-(65-(ch[i]-k)%91);
           else c=(ch[i]-k)%91;
        printf(" %c",c);
    }




}

