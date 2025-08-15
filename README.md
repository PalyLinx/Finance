/* Fichier include h Structures comporte les structure de base de la data base.
/* nom : Structures.h 
/* ver : 1.0
/* date : 15/08/2025
/* H'eure : 19.40
/* auteur : M.L D
/* Singture numerique : 
typedef struct {
    int ID;                 // Identifiant unique de l'opération
    char Libelle[100];      // Libellé descriptif (100 caractères max)
    double Credit;          // Montant crédité
    double Debit;           // Montant débité
} Operation;
