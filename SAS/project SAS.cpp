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

datePr date(){
	int jour,mois,annee,i,n;
	datePr date;
        printf("                                                                         ______________________                          \n");	
		printf("\n                                                  ******************    | GESTION DE PHARMACIE |    ************************\n");
    	printf("                                                *                        ______________________                              *\n");
   		printf("                                                *                                                                            *\n");
   		printf("                                                *                              * Bienvenue *                                 *\n");
   		printf("                                                  **************************************************************************\n");

        
        printf("                                                      enter la date d'aujourd'hui :\n");
        up:
        printf("                                                      enter la jour :");
        if(scanf("%d",&jour)==0){
 			fflush(stdin);
			goto up;
		}
        if(jour<=31 && jour>0){
        	up1:
      	 	printf("                                                      enter le mois :");
       		if(scanf("%d",&mois)==0){
 				fflush(stdin);
				goto up1;
			}
       		if(mois<=12 && mois>0){
       			up2:
     		    printf("                                                      enter l'annee :");
     	   		if(scanf("%d",&annee)==0){
 					fflush(stdin);
					goto up2;
				}
     	   		if(annee<=2022 && annee>0){
      				  for(i=0; i < n+5 ; i++){
        	
      				     	date.jour = jour;
        				    date.mois = mois;
        				    date.annee = annee;
                	
      				  }
      				  
					}else{
						printf("                                                      SVP enter un annee valide\n\n");
						goto up2;
		}
		   }else{
				printf("                                                      SVP enter un mois valide\n\n");
				goto up1;
		}
		}else{
			printf("                                                      SVP enter un jour valide\n\n");
			goto up;
		}
	
	return date;
}


int main()
{
    int i,j,nu,jour,mois,annee,choix,choixDeTrie,choixDeCode,choixDeQu,choixDeTrie2,choixA,choixDeM,choixDeA,code,r,quant,prixT,count,m,num;
    int n = 0;
    int d = 0;
    int g = n+5;
    int max =0;
    int min = 10000;
	char q[90],p[90];
	produit pr[n+100];
	produit a;
    char temp[n+5];
	int prixTTC[n+5];
	produit trash;
	
//		l'extraction des produit:	
	
		FILE * list = fopen("list.txt","r");
			for(i=0; i <=5 ; i++){			
			
					fgets(pr[i].nom,200,list);
					fgets(q,200,list);
					fgets(p,200,list);
						
					pr[i].quantite = atoi(q);
					pr[i].prix = atoi(p);
			}

        fclose(list);

//	la date d'aujourd'hui:
        a.date = date();

        for(i=0; i < n+5 ; i++){
        	
          	pr[i].date = a.date;
                	
  			pr[i].code = 1 + i;
      	 }
			
	menu:	
	system("CLS");	
	printf("                                                                           ______________________                          \n");	
	printf("\n                                                    ******************    | GESTION DE PHARMACIE |    **********************\n");
    printf("                                                 *                         ______________________                             *\n");
    printf("                                                **                                                                            **\n");
    printf("                                                **                              * Bienvenue *                                 **\n");
    printf("                                                **                                                                            **\n");
    printf("                                               ***        [1]:Ajouter des produits        *       [2]:Acheter des produit     ***\n");
    printf("                                             *****                                                                            *****\n");
    printf("                                            ******        [3]:Rechercher les Produit      *       [4]:Etat du stock           ******\n");
    printf("                                             *****                                                                            *****\n");
    printf("                                              ****        [5]:Alimenter le stock          *       [6]:Supprimer un produit    ****\n");
    printf("                                               ***                                                                            ***\n");
    printf("                                                **        [7]:Statique de vente           *       [8]:sortir                  **\n");
    printf("                                                 *                                                                            *\n");
    printf("                                                    ************************************************************************\n");
    y:
    printf("\n                                                                             Enter votre choix :");
    if(scanf("%d",&choix)==0){
    	fflush(stdin);
    	printf("SVP enter un nombre entre 1 et 8\n");
    	goto y;
	}
    
    
//	 Ajouter des produits  : 
    if(choix == 1){
		system("CLS");
        b:
        printf("Donnez le nombre des produit : ");
    	if(scanf("%d",&nu)==0){
    		fflush(stdin);
    		goto b;
		}
        
    if(nu<100 && nu>=0){
        
        for(i=5+n-num; i<(n+5)-num+nu;i++)
        {
            printf("Donnez les informations du produit : \n");
            c:
            printf("taper le nom : ");
            if(scanf("%s", pr[i].nom)==0){
   				fflush(stdin);
	   			goto c;
			}
			d:
            printf("Donnez la quantitee : "); 
            if(scanf("%d",&pr[i].quantite)==0){
   				fflush(stdin);
	   			goto d;
			}
			e:
            printf("Donnez le prix : ");           
            if(scanf("%d",&pr[i].prix)==0){
   				fflush(stdin);
	   			goto e;
			}
            pr[i].code = 1+i;
            pr[i].date = a.date;     

        }
    n += nu; 
		
	}else{
		printf("SVP entre un numbre entre 0 et 100");
	}
	
//	le trie:
	f:
	printf("voulez-vous trier la liste ?\n");
	printf("tapez [1] pour oui , pour non tapez autre chose ");
    if(scanf("%d",&choixA)==0){
   		fflush(stdin);
   		goto f;
	}
	
	if(choixA == 1){
		
	g:
	printf("comment voulez-vous trier la liste\n");
	printf("si vous souhaitez trier la liste par ordre alphabetique tapez [1]\n ou si vous souhaitez la trier en fonction de prix tapez [2]: \n");	
	if(scanf("%d",&choixDeTrie)==0){
   		fflush(stdin);
		goto g;
	}
	
	if(choixDeTrie == 1){
		for(i=0;i<n+5;i++){
		
      		for(j=i+1; j<(n+5)-num ;j++){
      			
     		    if(strcmp(pr[i].nom,pr[j].nom)>0){
     		    	
 		           	a = pr[i];
					pr[i] = pr[j];
					pr[j] = a;
       			}
      		}
     	}		
	}

	if(choixDeTrie == 2){
			for(i=0; i<(n+5)-num ; i++){
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
	    for(i=0; i<(n+5)-num; i++)
		{
		prixTTC[i] = pr[i].prix + (pr[i].prix*0.15);	
		printf("les informations du produit %d :\n\n",i+1);
		printf("son nom : %s \nson prix : %dDH\n\nson prix TTC : %dDH\n\nson code : %d\n\n", pr[i].nom,pr[i].prix, prixTTC[i] ,pr[i].code);
		}
	}
		h:
		printf("\nsi vous voulez revenir au menu tapez [1] ou si vous ne voulez rien faire tapez autre chose :");	
		if(scanf("%d",&choixDeM)==0){
   		fflush(stdin);
		goto h;
		}
		if(choixDeM == 1){
			goto menu;
		}

//	l'achat :
	}else if(choix == 2){
		system("CLS");
		for(i=0; i<(n+5)-num; i++)
		{
		prixTTC[i] = pr[i].prix + (pr[i].prix*0.15);	
		printf("les informations du produit %d :\n\n",i+1);
		printf("son nom : %s \nson prix : %dDH\n\nson prix TTC : %dDH\n\nson code : %d\n\n", pr[i].nom,pr[i].prix, prixTTC[i] ,pr[i].code);
		}
		j:
		printf("pour choisir le produit que vous souhaitez acheter, tapez son code : \n");		
		if(scanf("%d",&choixDeCode)==0){
   		fflush(stdin);
		goto j;
		}
		
		for(i=0;i<(n+5)-num;i++){
			
			if(choixDeCode == pr[i].code){
				k:
				printf("combien en voulez-vous ?\n");				
					if(scanf("%d",&choixDeQu)==0){
   					fflush(stdin);
					goto k;
					}
				if(choixDeQu <= pr[i].quantite){
					pr[i].quantite -= choixDeQu;
					d += choixDeQu;
					printf("merci pour votre achat \n");
					
					
					
					FILE * enrg = fopen("enregistrement.txt","a");
						
						for(j=0;j<choixDeQu;j++){
						fprintf(enrg ,pr[i].nom);
						putw(pr[i].prix , enrg);
						putw(pr[i].date.jour , enrg);
						putw(pr[i].date.mois , enrg);
						putw(pr[i].date.annee , enrg);
						}	
						
									
					fclose(enrg);
					
				}else{
					printf("nous sommes en rupture de stock\n");
				}
				
			}
		}
		h1:
		printf("\nsi vous voulez revenir au menu tapez [1] ou si vous ne voulez rien faire tapez autre chose :");	
		if(scanf("%d",&choixDeM)==0){
   		fflush(stdin);
		goto h1;
		}
		if(choixDeM == 1){
			goto menu;
		}

//	recherche:				
	}else if(choix == 3){
		l:
		printf("\nsi vous souhaitez rechercher par code tapez [1] ou si vous souhaitez rechercher par quantitee tapez [2]\n");
		printf("\nenter votre choix\n");		
		if(scanf("%d",&choixDeTrie2)==0){
 			fflush(stdin);
			goto l;
		}
		if(choixDeTrie2 == 1){
		m:
		printf("\nenter le code: \n");		
		if(scanf("%d",&code)==0){
 			fflush(stdin);
			goto m;
		}
		for(i=0; i<n+5 ; i++){
			
			if(code == pr[i].code){					
				r= i+1;				
			} 
		}
		if(code = pr[r-1].code){
			system("CLS");
			printf("\nle nom : %s \nson prix : %dDH\n\nson quantite : %d\n\nson code : %d\n\n", pr[r-1].nom,pr[r-1].prix,pr[r-1].quantite,pr[r-1].code);
	
		}else{		
			printf("\nSVP entrer un code de la liste");
		}		

		}
		if(choixDeTrie2 == 2){
			
			n:
			printf("\nenter le quantite: \n");
			if(scanf("%d",&code)==0){
 			fflush(stdin);
			goto n;
			}
			for(i=0; i<n+5 ; i++){
			
				if(code == pr[i].quantite){					
					r= i+1;				
				} 
			}
			if(code = pr[r-1].quantite){
				system("CLS");
				printf("\nle nom : %s \nson prix : %dDH\n\nson quantitee : %d\n\n", pr[r-1].nom,pr[r-1].prix,pr[r-1].quantite);
	
			}else{		
				printf("\nplease enter a quantitee from the list");
			}		
		
		}
		h2:
		printf("\nsi vous voulez revenir au menu tapez [1] ou si vous ne voulez rien faire tapez autre chose :");	
		if(scanf("%d",&choixDeM)==0){
   		fflush(stdin);
		goto h2;
		}
		if(choixDeM == 1){
			goto menu;
		}
		
//	Etat du stock:		
	}else if(choix == 4){
			system("CLS");
			printf("les proudit avec la quantite  inferieure a 3 sont :\n");
		for(i=0; i<(n+5)-num ; i++){
		if(pr[i].quantite <3){
			printf("\nle nom : %s \nson prix : %dDH\n\nson quantitee : %d\n\n", pr[i].nom,pr[i].prix,pr[i].quantite);
		}
		}
		o:
		printf("\nsi vous voulez aller a l'ajout tapez [1] ou sinon tapez autre cose :");		
			if(scanf("%d",&choixDeA)==0){
 			fflush(stdin);
			goto o;
			}	
		if(choixDeA == 1){
			goto alum;
		}		
		h3:
		printf("\nsi vous voulez revenir au menu tapez [1] ou si vous ne voulez rien faire tapez autre chose :");	
		if(scanf("%d",&choixDeM)==0){
   		fflush(stdin);
		goto h3;
		}
		if(choixDeM == 1){
			goto menu;
		}

//	pour alimenter le stock:		
	}else if(choix ==5){
		
			alum:
			
			system("CLS");
			for(i=0; i<(n+5)-num; i++)
			{
				prixTTC[i] = pr[i].prix + (pr[i].prix*0.15);	
				printf("les informations du produit %d :\n\n",i+1);
				printf("son nom : %s \nson prix : %dDH\n\nson prix TTC : %dDH\n\nson code : %d\n\net son quantitee : %d\n\n", pr[i].nom,pr[i].prix, prixTTC[i] ,pr[i].code,pr[i].quantite);
			}
			q:
			printf("enter le code de produit vous souhaitez augmenter :\n");
			if(scanf("%d",&code)==0){
 			fflush(stdin);
			goto q;
			}
			if(code<=n+5 && code >0){
				r:
				printf("\nentrez la quantitee que vous souhaitez ajouter :\n");				
				if(scanf("%d", &quant)==0){
 					fflush(stdin);
					goto r;
				}
			
				for(i=0; i<n+5; i++){
					if(code == pr[i].code){
						r= i+1;	
						pr[r-1].quantite += quant;
						system("CLS");
						printf("\nla quantitee de %smaintenant est : %d\n",pr[r-1].nom,pr[r-1].quantite);
					}
				}
			}else{
				printf("\nSVP enter un code valide !\n");
			}
			
		h4:
		printf("\nsi vous voulez revenir au menu tapez [1] ou si vous ne voulez rien faire tapez autre chose :");	
		if(scanf("%d",&choixDeM)==0){
   		fflush(stdin);
		goto h4;
		}
		if(choixDeM == 1){
			goto menu;
		}

//	la supprimation:		
		}else if(choix == 6){
			
			system("CLS");
			for(i=0; i<(n+5)-num; i++)
			{
				prixTTC[i] = pr[i].prix + (pr[i].prix*0.15);	
				printf("les informations du produit %d :\n\n",i+1);
				printf("son nom : %s \nson prix : %dDH\n\nson prix TTC : %dDH\n\nson code : %d\net son quantite : %d\n\n", pr[i].nom,pr[i].prix, prixTTC[i] ,pr[i].code,pr[i].quantite);
			}
			s:
			printf("\nentrez le nombre de produits que vous souhaitez supprimer\n");			
			if(scanf("%d",&num)==0){
 					fflush(stdin);
					goto s;
			}
			if(num<n+5 && num>0){		
			
			for(i=0;i<n+5;i++){
				system("CLS");
			for(int r=0;r<num;r++){
				t:
				printf("\nentrez le code de produit que vous souhaitez supprimer\n");				
				if(scanf("%d",&code)==0){
 					fflush(stdin);
					goto t;
				}
		
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
				printf("son nom : %s \nson prix : %dDH\n\n\nson code : %d\net son quantitee : %d\n\n", pr[i].nom,pr[i].prix,pr[i].code,pr[i].quantite);
			}
			
		}
		h5:
		printf("\nsi vous voulez revenir au menu tapez [1] ou si vous ne voulez rien faire tapez autre chose :");	
		if(scanf("%d",&choixDeM)==0){
   		fflush(stdin);
		goto h5;
		}
		if(choixDeM == 1){
			goto menu;
		}
		
//	Statistique de vente:		
		}else if(choix ==7){
			
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
					
				for(i=n+5; i<n+5+d; i++){
					printf("\nle nom : %s \nson prix : %dDH\n\nson date : %d/%d/%d\n\n", pr[i].nom,pr[i].prix,pr[i].date.jour,pr[i].date.mois,pr[i].date.annee);
					prixT += pr[i].prix;
					if(pr[i].prix >= max){
						max = pr[i].prix;
					}

					if(pr[i].prix <= min){
						min = pr[i].prix;
					}
				
					}

					m = prixT/d;

					printf("\nle total des prix des produits vendus en journee : %dDH\n",prixT);
					printf("\nla moyenne des prix des produits vendus en journee  : %dDH\n",m);
					printf("\nla max des prix des produits vendus en journee  : %dDH\n",max);
					printf("\nla min des prix des produits vendus en journee  : %dDH\n",min);
					
					
				FILE * bill = fopen("bill.txt","w");
					for(i=n+5; i<n+5+d; i++){			
					for(j=0;j<choixDeQu;j++){
						fprintf(bill ,pr[i].nom);
						
						fprintf(bill,"le prix %dDH, la date %d/%d/%d\n",pr[i].prix,pr[i].date.jour,pr[i].date.mois,pr[i].date.annee);
				
						}
					}
					fprintf(bill ,"\nle total des prix des produits vendus en journee : %dDH",prixT);
					fprintf(bill ,"\nla moyenne des prix des produits vendus en journee  : %dDH",m);
					fprintf(bill ,"\nla max des prix des produits vendus en journee  : %dDH",max);
					fprintf(bill ,"\nla min des prix des produits vendus en journee  : %dDH",min);
					
						
				fclose(bill);	
				
			
		h6:
		printf("\nsi vous voulez revenir au menu tapez [1] ou si vous ne voulez rien faire tapez autre chose :");	
		if(scanf("%d",&choixDeM)==0){
   		fflush(stdin);
		goto h6;
		}
		if(choixDeM == 1){
			goto menu;
		}
		
//	sortir:		
		}else if(choix == 8){
			goto end;
			
		}else{
		printf("SVP enter un nombre entre 1 et 8\n");
		h7:
		printf("\nsi vous voulez revenir au menu tapez [1] ou si vous ne voulez rien faire tapez autre chose :");	
		if(scanf("%d",&choixDeM)==0){
   		fflush(stdin);
		goto h7;
		}
		if(choixDeM == 1){
			goto menu;
		}
			
		}
	
			
	end:		
		
		system("CLS");
		printf("\n\n************************************************************************************************************************\n");
		printf("\n********************************************            A BIENTOT             ******************************************\n");
		printf("\n************************************************************************************************************************\n");
	
	
    return 0;
    
}