#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
 int jour;
 int mois;
 int annee;
}datenaise;

typedef struct
{	
int age;
char nom[15];
char prenom[15];
datenaise date;
}Personne;


int calcage(int j,int m,int a){
	int age;
	m = m + (a * 12);
	j = j+ ( m * 30.5);
	age = 2022-(j/30.5/12);
	return age+1;	
}

int main() 
{

	int n,i,m,t,a,sum,choix;
	int end =0;
	int ch;
	
	up:
		
	printf("Donnez le nombre des Apprents : ");
	scanf("%d",&n);
	Personne p[n],d;

	
	for(i=0;i<n;i++)
	{
	printf("Donnez les informations du Apprent %d : \n" ,i+1);
	printf("taper le nom : ");
	scanf("%s" ,p[i].nom) ;
	printf("taper le prenom : ");
	scanf("%s",&p[i].prenom);
	printf("Donnez la DN : \n") ;
	ch = 0;
	printf("Jour : ");
	scanf("%d",&p[i].date.jour) ;
	if(p[i].date.jour<=31 && p[i].date.jour > 0){
		printf("Mois : ");
		scanf("%d",&p[i].date.mois) ;
		if(p[i].date.mois<=12 && p[i].date.mois > 0){
			printf("Annee : ");
			scanf("%d",&p[i].date.annee);
			if(p[i].date.annee<=2022 && p[i].date.annee > 0){
				ch =1;
			}else{
				goto down;
			}
	}else{
		goto down;
	
	}
	}else{
		goto down;
	}
	
	system("CLS");
	
	p[i].age = calcage(p[i].date.jour,p[i].date.mois,p[i].date.annee);	

	}
		
	for(i=0;i<n;i++)
	{
	printf("les informations du Apprent %d :\n",i+1);
	printf("son nom : %s,\nson prenom : %s,\nson date de naissance : %d/%d/%d \n", p[i].nom,p[i].prenom,p[i].date.jour,p[i].date.mois,p[i].date.annee);
	printf("et son age est: %d\n\n",p[i].age);
	end = i;
	}
		
	for(i = 0 ; i < n ;i++){
			
			for(int j = 0 ; j < n-1 ;j++){
				
				if(p[j].age > p[j+1].age){
					d = p[j];
					p[j] = p[j+1];
					p[j+1] = d; 
				}
			}	
	}
		
	printf("le plus petit est : %s\n",p[0].nom);
	printf("le plus grand est : %s\n",p[end].nom);
	
	for(i = 0 ; i < n ;i++){
	
	sum += p[i].age;
	}
	
	m = sum/end;	
	
	printf("le m des ages est : %d\n",m);
	
	down:
		
	if(ch == 0){
		printf("SVP entre un date valide !\n\n");
	}
	
	printf("\n\n      ***********************************************************************************************************\n");
	printf("\n Si vous souhaitez redemarrer Typez '1' , si vous souhaitez quitter tapez autre chose \n");
	scanf("%d",&choix);
	if (choix == 1){
		system("CLS");
		goto up;
	}else{
		system("CLS");
		printf("\n\n************************************************************************************************************************\n");
		printf("\n********************************************            THANK YOU             ******************************************\n");
		printf("\n************************************************************************************************************************\n");
	}
		
	return 0;
}