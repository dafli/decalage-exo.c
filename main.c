#include <stdio.h>

void  decalage(char *s,int p){
    char tab[20];
    int i,a,siz;
   siz =  sizeof(s) / sizeof(char);
    if(p < siz){

    for(i=0;i<p;i++)
        tab[i]=s[i];

    for(i=0;s[i+p]!='\0';i++)
        s[i]=s[i+p];
        a=i;

    for(i=0;i<p;i++)
       s[a+i]=tab[i];
         printf("votre chaine apres le decalage du pas %d est : \n %s  \n",p,s);
}
else
    printf("veuillez saisir un pas < %d  \n",siz);
}

int main(void)
{    int p;
    char s[20];
    puts("saisi votre chaine de depart \n");
    scanf("%s",&s);
    printf("votre chaine de depart est :\n %s  \n",s);
    printf("sisai votre pas de decalage : \n");
    scanf("%d",&p);
    decalage(s,p);
    return 0;
}

