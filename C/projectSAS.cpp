#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct{
 int jour;
 int mois;
 int annee;
}datePr;

typedef struct {
    int code;
    char nom[100];
    int prix;
    int quantite;
    datePr date;
} produit;



int main()
{
    int i,j,choix,choixDeTrie,choixDeCode,choixDeQu,choixDeTrie2,choixA,choixDeM,choixDeA,code,r,quant,prixT,count,m,min,num;
    int n = 0;
    int max =0;
	char q[100],p[100];
	produit pr[n+100],a;
    char temp[n+5];
	int prixTTC[n+5];
	produit trash;
	
	FILE * list = fopen("list.txt","r");
			for(i=0; i < 1 ; i++){			
					fgets(pr[i].nom,200,list);
					fgets(q,200,list);
					fgets(p,200,list);	
						
					pr[i].quantite = atoi(q);
					pr[i].prix = atoi(p);
					
					fgets(pr[i+1].nom,200,list);
					fgets(q,200,list);
					fgets(p,200,list);	
						
					pr[i+1].quantite = atoi(q);
					pr[i+1].prix = atoi(p);
					
					fgets(pr[i+2].nom,200,list);
					fgets(q,200,list);
					fgets(p,200,list);	
						
					pr[i+2].quantite = atoi(q);
					pr[i+2].prix = atoi(p);
					
					fgets(pr[i+3].nom,200,list);
					fgets(q,200,list);
					fgets(p,200,list);	
						
					pr[i+3].quantite = atoi(q);
					pr[i+3].prix = atoi(p);
					
					fgets(pr[i+4].nom,200,list);
					fgets(q,200,list);
					fgets(p,200,list);	
						
					pr[i+4].quantite = atoi(q);
					pr[i+4].prix = atoi(p);						
			}
        fclose(list);
			
        for(i=0; i < n+5 ; i++){
        	
            pr[i].date.jour = 22;
            pr[i].date.mois = 9;
            pr[i].date.annee = 2022;
                	
            pr[i].code = 1 + i;
        }
	
	menu :
		
	system("CLS");	
	printf("                               ______________________                          \n");	
	printf("\n        ******************    | GESTION DE PHARMACIE |    **********************\n");
    printf("     *                         ______________________                             *\n");
    printf("    **                                                                            **\n");
    printf("    **                              * Bienvenue *                                 **\n");
    printf("    **                                                                            **\n");
    printf("   ***        [1]:Ajouter des produits        *       [2]:Acheter des produit     ***\n");
    printf(" *****                                                                            *****\n");
    printf("******        [3]:Rechercher les Produit      *       [4]:Etat du stock           ******\n");
    printf(" *****                                                                            *****\n");
    printf("  ****        [5]:Alimenter le stock          *       [6]:Supprimer un produit    ****\n");
    printf("   ***                                                                            ***\n");
    printf("    **                           [7]:Statique de vente                            **\n");
    printf("     *                                                                            *\n");
    printf("        ************************************************************************\n");
    printf("\n                                 Enter votre choix :");
    
    scanf("%d",&choix);
        

    if(choix == 1){
		system("CLS");
        printf("Donnez le nombre des produit : ");
        scanf("%d", &n);
        
        
    if(n<100 && n>=0){
        
        for(i=5; i<n+5;i++)
        {
            printf("Donnez les informations du produit : \n");
            printf("taper le nom : ");
            scanf("%s", pr[i].nom);
            printf("Donnez la quantite : ");
            scanf("%d",&pr[i].quantite);
            printf("Donnez le prix : ");
            scanf("%d",&pr[i].prix);
            pr[i].code = 1+i;

        }
        
		
	}else{
		printf("SVP entre un numbre entre 0 et 100");
	}
	
	printf("do you want to sort the list ?\n");
	printf("type [1] for yes , or type anything else for no");
	scanf("%d",&choixA);
	
	if(choixA == 1){
		
	
	printf("how would you like to sort the list\n");
	printf("if you want to sort it alphabaticly type [1] \n or if you want to sort it based on the price type [2]: \n");
	scanf("%d",&choixDeTrie);
	
	
	if(choixDeTrie == 1){
		for(i=0;i<n+5;i++){
		
      		for(j=i+1; j<n+5 ;j++){
      			
     		    if(strcmp(pr[i].nom,pr[j].nom)>0){
     		    	
 		           	a = pr[i];
					pr[i] = pr[j];
					pr[j] = a;
       			}
      		}
     	}		
	}

	if(choixDeTrie == 2){
			for(i=0; i<n+5 ; i++){
			for (j = i+1 ; j < n+5 ; j++){
			
				if(pr[i].prix > pr[j].prix){
					a = pr[i];
					pr[i] = pr[j];
					pr[j] = a;	
				}
			}
		
			}
	}
	
		
	
		system("CLS");
	    for(i=0; i<n+5; i++)
		{
		prixTTC[i] = pr[i].prix + (pr[i].prix*0.15);	
		printf("les informations du produit %d :\n\n",i+1);
		printf("son nom : %s \nson prix : %dDH\n\nson prix TTC : %dDH\n\nson code : %d\n\n", pr[i].nom,pr[i].prix, prixTTC[i] ,pr[i].code);
		}
	}
	printf("\nif you want to go back to the menu type [1] or if you don't type anything else :");
	scanf("%d",&choixDeM);	
		if(choixDeM == 1){
			goto menu;
		}
		
	}

	if(choix == 2){
		system("CLS");
		for(i=0; i<n+5; i++)
		{
		prixTTC[i] = pr[i].prix + (pr[i].prix*0.15);	
		printf("les informations du produit %d :\n\n",i+1);
		printf("son nom : %s \nson prix : %dDH\n\nson prix TTC : %dDH\n\nson code : %d\n\n", pr[i].nom,pr[i].prix, prixTTC[i] ,pr[i].code);
		}
		printf("choose what product you want to buy by typing there code : \n");
		scanf("%d",&choixDeCode);
		
		for(i=0;i<n+5;i++){
			
			if(choixDeCode == pr[i].code){
				printf("how many do you want ?\n");
				scanf("%d",&choixDeQu);
				if(choixDeQu <= pr[i].quantite){
					pr[i].quantite -= choixDeQu;
					printf("merci pour votre achat \n");
					
					FILE * enrg = fopen("enregistrement.txt","a");
								
						fprintf(enrg ,pr[i].nom);
						putw(pr[i].prix , enrg);
						putw(pr[i].date.jour , enrg);
						putw(pr[i].date.mois , enrg);
						putw(pr[i].date.annee , enrg);
									
					fclose(enrg);
					
				}else{
					printf("we are out of suplay\n");
				}
				
			}
		}
		printf("\nif you want to go back to the menu type [1] or if you don't type anything else :");
		scanf("%d",&choixDeM);	
		if(choixDeM == 1){
			goto menu;
		}		
	}
	

	if(choix == 3){
		printf("\nif you want to serch by code type [1] or if you want to serch by the quantity type [2]\n");
		printf("\nenter votre choix\n");
		scanf("%d",&choixDeTrie2);
		if(choixDeTrie2 == 1){
		
		printf("\nenter le code: \n");
		scanf("%d",&code);
		for(i=0; i<n+5 ; i++){
			
			if(code == pr[i].code){					
				r= i+1;				
			} 
		}
		if(code = pr[r-1].code){
			system("CLS");
			printf("\nle nom : %s \nson prix : %dDH\n\nson quantite : %d\n\nson code : %d\n\n", pr[r-1].nom,pr[r-1].prix,pr[r-1].quantite,pr[r-1].code);
	
		}else{		
			printf("\nplease enter a code from the list");
		}		

		}
		if(choixDeTrie2 == 2){
			
			
			printf("\nenter le quantite: \n");
			scanf("%d",&code);
			for(i=0; i<n+5 ; i++){
			
				if(code == pr[i].quantite){					
					r= i+1;				
				} 
			}
			if(code = pr[r-1].quantite){
				system("CLS");
				printf("\nle nom : %s \nson prix : %dDH\n\nson quantite : %d\n\n", pr[r-1].nom,pr[r-1].prix,pr[r-1].quantite);
	
			}else{		
				printf("\nplease enter a quantite from the list");
			}		
		
		}
		printf("\nif you want to go back to the menu type [1] or if you don't type anything else :");
		scanf("%d",&choixDeM);	
		if(choixDeM == 1){
			goto menu;
		}
	}


	if(choix == 4){
			system("CLS");
			printf("les proudit avec la quantite  inferieure a 3 sont :\n");
		for(i=0; i<n+5 ; i++){
		if(pr[i].quantite <3){
			printf("\nle nom : %s \nson prix : %dDH\n\nson quantite : %d\n\n", pr[i].nom,pr[i].prix,pr[i].quantite);
		}
		}
		
		printf("\nif you want to go to the adding type [1] or if you don't type anything else :");
		scanf("%d",&choixDeA);	
		if(choixDeA == 1){
			goto alum;
		}else{		
			printf("\nif you want to go back to the menu type [1] or if you don't type anything else :");
			scanf("%d",&choixDeM);	
			if(choixDeM == 1){
				goto menu;
			}
		}
		
	}
	
	if(choix ==5){
		
			alum:
			
			system("CLS");
			for(i=0; i<n+5; i++)
			{
				prixTTC[i] = pr[i].prix + (pr[i].prix*0.15);	
				printf("les informations du produit %d :\n\n",i+1);
				printf("son nom : %s \nson prix : %dDH\n\nson prix TTC : %dDH\n\nson code : %d\n\net son quantite : %d\n\n", pr[i].nom,pr[i].prix, prixTTC[i] ,pr[i].code,pr[i].quantite);
			}
			printf("enter le code de produit vous souhaitez augmenter :\n");
			scanf("%d", &code);
			if(code<=n+5 && code >0){
			
				printf("\nenter te quantite you want to add :\n");
				scanf("%d", &quant);
			
				for(i=0; i<n+5; i++){
					if(code == pr[i].code){
						r= i+1;	
						pr[r-1].quantite += quant;
						system("CLS");
						printf("\nthe quantite of %snow is : %d\n",pr[r-1].nom,pr[r-1].quantite);
					}
				}
			}else{
				printf("\nSVP enter un code valide !\n");
			}
			
			printf("\nif you want to go back to the menu type [1] or if you don't type anything else :");
			scanf("%d",&choixDeM);	
			if(choixDeM == 1){
				goto menu;
			}
		}
		

		if(choix == 6){
			
			system("CLS");
			for(i=0; i<n+5; i++)
			{
				prixTTC[i] = pr[i].prix + (pr[i].prix*0.15);	
				printf("les informations du produit %d :\n\n",i+1);
				printf("son nom : %s \nson prix : %dDH\n\nson prix TTC : %dDH\n\nson code : %d\net son quantite : %d\n\n", pr[i].nom,pr[i].prix, prixTTC[i] ,pr[i].code,pr[i].quantite);
			}
			printf("\nenter how many products you want to delete\n");
			scanf("%d",&num);
			if(num<n+5 && num>0){
				
				
			
			for(i=0;i<n+5;i++){
				system("CLS");
			for(int r=0;r<num;r++){
				
				printf("\nenter the code of the product you want to delete\n");
				scanf("%d",&code);
		
				for(i=0;i<n+5;i++){
				
					if(code == pr[i].code){
					for(j=i; j<=n+5;j++){
						pr[j] = pr[j+1];	
					}
				}
				}
			}
			}
			
			system("CLS");
			printf("les informations du produit restants :\n\n",i+1);	
			for(i=0; i<(n+5)-num; i++)
			{
				printf("les informations du produit %d :\n\n",i+1);
				printf("son nom : %s \nson prix : %dDH\n\n\nson code : %d\net son quantite : %d\n\n", pr[i].nom,pr[i].prix,pr[i].code,pr[i].quantite);
			}
			
		}
		printf("\nif you want to go back to the menu type [1] or if you don't type anything else :");
		scanf("%d",&choixDeM);	
		if(choixDeM == 1){
			goto menu;
		}
		}
		
		if(choix ==7){
			
				FILE * enrg1 = fopen("enregistrement.txt","r");
								
					for(i=n+5; i<n+10+n; i++){
						fgets(pr[i].nom,200,enrg1);
						pr[i].prix = getw(enrg1);
						pr[i].date.jour = getw(enrg1);
						pr[i].date.mois = getw(enrg1);
						pr[i].date.annee = getw(enrg1);
									
					}
				fclose(enrg1);
					system("CLS");
					printf("\nles achates de jour :");
				for(i=n+5; i<n+10+n; i++){
					printf("\nle nom : %s \nson prix : %dDH\n\nson date : %d/%d/%d\n\n", pr[i].nom,pr[i].prix,pr[i].date.jour,pr[i].date.mois,pr[i].date.annee);
					prixT += pr[i].prix;
					count = i-(n+5);
					if(pr[i].prix >= max){
						max = pr[i].prix;
					}
					min = max;
					if(pr[i].prix <= min){
						min = pr[i].prix;
					}
				
				}
					m = prixT/count;
					system("CLS");
					printf("\nle total des prix des produits vendus en journee : %dDH\n",prixT);
					printf("\nla moyenne des prix des produits vendus en journee  : %dDH\n",m);
					printf("\nla max des prix des produits vendus en journee  : %dDH\n",max);
					printf("\nla min des prix des produits vendus en journee  : %dDH\n",min);
				
			
			printf("\nif you want to go back to the menu type [1] or if you don't type anything else :");
		scanf("%d",&choixDeM);	
		if(choixDeM == 1){
			goto menu;
		}
		}
		
	
	
	
    return 0;
    
}
