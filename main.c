#include <stdio.h>
#include <stdlib.h>

typedef struct {
        int jour;
        int mois;
        int annee;
    }date;
    typedef struct{
        char nom[15];
        char prenom[15];
        date apprenant_date;
    }info;

    void afficher(info *st,int n){
        int a;
        printf("how many student you want to print \n");
        scanf("%d",&a);
        if(a<=n){
        for(int i = 0;i<n;i++){
        printf("nom de compte[%d] :%s \n",i+1,st[i].nom);
        printf("prenom de compte[%d] :%s \n",i+1,st[i].prenom);
        printf("jour de naissance de compte[%d] :%d \n",i+1,st[i].apprenant_date.jour);
        printf("mois de naissance de compte[%d] :%d \n",i+1,st[i].apprenant_date.mois);
        printf("annee de naissance de compte[%d] :%d \n",i+1,st[i].apprenant_date.annee);
    }
    }else{
        printf("its impossible to that much of account you only have %d\n",n);
    }
    }

    void triagee(info *st,int n){
        info temp;
        for(int i =0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(st[i].apprenant_date.annee>st[j].apprenant_date.annee){
                temp = st[i];
                st[i]=st[j];
                st[j]= temp;
            }else if(st[i].apprenant_date.annee==st[j].apprenant_date.annee){
                if(st[i].apprenant_date.mois>st[j].apprenant_date.mois){
                temp = st[i];
                st[i]=st[j];
                st[j]= temp;
            }else if(st[i].apprenant_date.mois==st[j].apprenant_date.mois){
                if(st[i].apprenant_date.jour>st[j].apprenant_date.jour){
                temp = st[i];
                st[i]=st[j];
                st[j]= temp;
            }else if(st[i].apprenant_date.jour==st[j].apprenant_date.jour){
                temp = st[i];
                st[i]=st[j];
                st[j]= temp;
            }
            }
            }
        }
    }
    }

    void triagee2(info *st,int n){
        info temp;
        for(int i =0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(st[i].apprenant_date.annee<st[j].apprenant_date.annee){
                temp = st[i];
                st[i]=st[j];
                st[j]= temp;
            }else if(st[i].apprenant_date.annee==st[j].apprenant_date.annee){
                if(st[i].apprenant_date.mois<st[j].apprenant_date.mois){
                temp = st[i];
                st[i]=st[j];
                st[j]= temp;
            }else if(st[i].apprenant_date.mois==st[j].apprenant_date.mois){
                if(st[i].apprenant_date.jour<st[j].apprenant_date.jour){
                temp = st[i];
                st[i]=st[j];
                st[j]= temp;
            }else if(st[i].apprenant_date.jour==st[j].apprenant_date.jour){
                temp = st[i];
                st[i]=st[j];
                st[j]= temp;
            }
            }
            }
        }
    }
    }
    void moyen_age(info *st,int n){
        int sum = 0;
        for(int i = 0;i<n;i++){
            sum = sum +  st[i].apprenant_date.annee;
        }
        printf("moyen age est : %d\n",sum/n);
    }
int main()
{
    int choix,n;
    while(1<2){
        printf("----------------menu---------------\n");
        printf("1.creer les comptes\n");
        printf("2.afficher les comptes\n");
        printf("3.trier les comptes plus age vers mois agee\n");
        printf("4.trier les comptes moins age vers plus agee\n");
        printf("5.moyen age\n");
        printf("-------------------------------------\n");
        scanf("%d",&choix);
        switch(choix){
        case 1:
             printf("entrer le nombre de compte a creer\n");
            scanf("%d",&n);
            info *student = malloc(n * sizeof(info));
            for(int i = 0;i<n;i++){
            printf("entere le nom de compte %d \n",i+1);
            scanf("%s",student[i].nom);
            printf("entere le prenome de compte %d \n",i+1);
            scanf("%s",student[i].prenom);
            printf("entere le jour de naissance du compte n %d \n",i+1);
            scanf("%d",&student[i].apprenant_date.jour);
            printf("entere le mois de naissance du compte n %d \n",i+1);
            scanf("%d",&student[i].apprenant_date.mois);
            printf("entere lannee  de naissance du compte n %d \n",i+1);
            scanf("%d",&student[i].apprenant_date.annee);
            }
            break;
        case 2:
            afficher(student,n);
            break;
        case 3:
            triagee(student,n);
            afficher(student,n);
            break;
        case 4:
            triagee2(student,n);
            afficher(student,n);
            break;
        case 5:
            moyen_age(student,n);
            break;
        default :
            printf("please read the menu and try againe\n");
            break;
    }
        }
    }


