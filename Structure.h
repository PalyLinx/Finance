
typedef struct Operation{
    int ID;                 // Identifiant unique de l'opération
    char Libelle[100];      // Libellé descriptif (100 caractères max)
    double Credit;          // Montant crédité
    double Debit;           // Montant débité
} Operation;
