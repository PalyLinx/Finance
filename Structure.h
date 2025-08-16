/* Structure Operation est une operation conserne la comptabilite
/* Il faud Qu on donne une structure a la table compte

typedef struct Operation{
    int ID;                 // Identifiant unique de l'opération
    char Libelle[100];      // Libellé descriptif (100 caractères max)
    long double Credit;     // Montant crédité
    long double Debit;      // Montant débité
} Operation;


