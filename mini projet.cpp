#include<stdio.h>
#include<string.h>

struct livre{
	char titre[50];
	char auteur[50];
	float prix;
	int quantite;
};

struct livre liv[100];
int count=0;
void ajout(){
	printf("entrer le titre du livre %d:\n",count+1);
	scanf(" %[^\n]",liv[count].titre);
	printf("entrer l auteur du livre %d:\n",count+1);
	scanf(" %[^\n]",liv[count].auteur);
	printf("entrer le prix du livre %d:\n",count+1);
	scanf("%f",&liv[count].prix);
	printf("entrer la quantite du livre %d:\n",count+1);
	scanf("%d",&liv[count].quantite);
	count++;
	}
	
void affiche(){
	for (int i=0;i<count;i++){
	    printf("livre %d:\n",i+1);
	    printf("le titre: %s\n",liv[i].titre);
	    printf("l auteur: %s\n",liv[i].auteur);
	    printf("le prix:%f\n",liv[i].prix);
	    printf("la quantite:%d\n",liv[i].quantite);
	}
}

void recherche(){
	char titre_rech[50];
	printf("entrer le titre a rechercher:");
	scanf(" %[^\n]",titre_rech);
	for (int i=0;i<count;i++){
	   if (strcmp(titre_rech,liv[i].titre)==0){
	    	printf("livre trouve %d:\n",i+1);
	        printf("le titre: %s\n",liv[i].titre);
        	printf("l auteur: %s\n",liv[i].auteur);
	        printf("le prix:%f\n",liv[i].prix);
	        printf("la quantite:%d\n",liv[i].quantite);
	    }else{
	    	printf("le livre ne se trouve pas\n");
    	}
   }	
}

void mise_a_jour(){
	char titre_mettre_jour[50];
	printf ("entrer le titre du livre a mettre a jour:");
	scanf(" %[^\n]",titre_mettre_jour);
	for(int i=0;i<count;i++){
	    if (strcmp(titre_mettre_jour,liv[i].titre)==0){
	    	printf("livre trouve %d:\n",i+1);
	        printf("le titre: %s\n",liv[i].titre);
        	printf("l auteur: %s\n",liv[i].auteur);
	        printf("le prix:%f\n",liv[i].prix);
	        printf("la quantite:%d\n",liv[i].quantite);
		    printf("entrer la nouvelle quantite:");
		    scanf("%d",&liv[i].quantite);
	    }else{
		    printf("le livre ne se trouve pas\n");
	    }
	}
}

void supprime(){
	char titre_a_supprimer[50];
	printf("entrer le titre a supprimer:");
	scanf(" %[^\n]",titre_a_supprimer);
	for(int i=0;i<count;i++){
	    if(strcmp(titre_a_supprimer,liv[i].titre)==0){
	
		}
	}
	
}

void affiche_nbr(){
	printf("le nombre total de livre en stock est :");
	scanf("%d",&count);
}

void menu(){

	int choix;
	do{
	printf("entrer 1 pour ajouter un livre.\n");
	printf("entrer 2 pour afficher tous les livres.\n");
	printf("entrer 3 pour rechercher un livre par son titre.\n");
	printf("entrer 4 pour mettre a jour la quantite.\n");
	printf("entrer 5 pour supprimer un livre.\n");
	printf("entrer 6 pour afficher le nombre totale des livres.\n");
	printf("entrer un choix:");
	scanf("%d",&choix);
	switch(choix){
		case 1:
			ajout();
			break;
		case 2:
			affiche();
			break;
		case 3:
			recherche();
			break;
		case 4:
			mise_a_jour();
			break;
		case 5:
			supprime();
			break;
		case 6:
			affiche_nbr();
			break;   
		case 7:
			printf("quitter le programme");
			break;
		default:
			printf("entrer un autre choix\n");
	}
	}    
	while(choix!=7);
	}


	

int main(){
	menu();
}
