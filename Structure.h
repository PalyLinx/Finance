
typedef struct Operation{
    int ID;                 // Identifiant unique de l'opération
    char Libelle[100];      // Libellé descriptif (100 caractères max)
    long double Credit;     // Montant crédité
    long double Debit;      // Montant débité
} Operation;
