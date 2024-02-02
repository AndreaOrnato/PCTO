#include<stdio.h>
#include<string.h>
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"
int Testfinale()
{
    printf("Bravissimo! Sei arrivato al test finale.\nQuesto test consiste nel mettersi nei panni di Mark, un uomo che ha deciso di lasciare il proprio lavoro per diventare un imprenditore.\nAiuta Mark a prendere delle decisioni\nLe decisioni saranno sempre due, una giusta e una sbagliata.\nSuperati i 3 errori dovrai ripetere il corso avanzato e potrai tornare al test finale.\n");
    printf("RISPONDI ALLE DOMANDE CON 1 O 2.\n");
    int r;
    int e = 0;
    t1:

    printf("Tappa 1: Il Sogno dell'Imprenditoria.\n Mark decide di abbandonare il suo lavoro e intraprendere la strada dell'imprenditoria. Mark è indeciso tra;\n1) Investire i risparmi personali.\n2) Cercare finanziamenti esterni.\n");
    scanf(" %d", &r);
    if (r == 1)                 
    {
        
        e = e + 1;
    }
    else if(r!= 2)
    {
        printf("Puoi rispondere solamente 1 o 2, riprova.\n");
        goto t1;
    }

    t2:

    printf("Tappa 2: La Scelta dell'Attività:\n1) Aprire un negozio di articoli sportivi\n2) Avviare una consulenza informatica.\n");
    scanf(" %d", &r);
    if (r == 1)                 
    {
        
        e = e + 1;
    }
    else if(r!= 2)
    {
        printf("Puoi rispondere solamente 1 o 2, riprova.\n");
        goto t2;
    }

     t3:

    printf("Tappa 3: Registrazione della Partita IVA:\n1) Registrare la Partita IVA in proprio.\n2) Affidarsi a un commercialista per la registrazione.\n");
    scanf(" %d", &r);
    if (r == 1)                 
    {
        
        e = e + 1;
    }
    else if(r!= 2)
    {
        printf("Puoi rispondere solamente 1 o 2, riprova.\n");
        goto t3;
    }


    t4:

    printf("Tappa 4: Scelta della Struttura Legale\n1) Aprire una SRL (Società a Responsabilità Limitata).\n2) Costituire una SNC (Società in Nome Collettivo).\n");
    scanf(" %d", &r);
    if (r == 1)                 
    {
        
        e = e + 1;
    }
    else if(r!= 2)
    {
        printf("Puoi rispondere solamente 1 o 2, riprova.\n");
        goto t4;
    }
    
    t5:

    printf("Tappa 5: Gestione delle Risorse Umane\n1) Optare per l'outsourcing dei servizi.\n2) Assumere dipendenti diretti.\n");
    scanf(" %d", &r);
    if (r == 2)                 
    {
        
        e = e + 1;
    }
    else if(r!= 1)
    {
        printf("Puoi rispondere solamente 1 o 2, riprova.\n");
        goto t5;
    }

       t6:

    printf("Tappa 6: Scelta del Fornitore\n1) Valutare la qualità del servizio offerto dal fornitore.\n2) Scegliere il fornitore più economico.\n");
    scanf(" %d", &r);
    if (r == 2)                 
    {
        
        e = e + 1;
    }
    else if(r!= 1)
    {
        printf("Puoi rispondere solamente 1 o 2, riprova.\n");
        goto t6;
    }

     t7:

    printf("Tappa 7: Decisione sui Prezzi\n1) Abbassare i prezzi per attirare più clienti.\n2)  Stabilire prezzi competitivi che coprano i costi e generino profitto.\n");
    scanf(" %d", &r);
    if (r == 1)                 
    {
        
        e = e + 1;
    }
    else if(r!= 2)
    {
        printf("Puoi rispondere solamente 1 o 2, riprova.\n");
        goto t7;
    }

    t8:

    printf("Tappa 8: Gestione del Flusso di Cassa\n1) Pagare immediatamente tutte le fatture.\n2) Pianificare pagamenti e incassi per mantenere un flusso di cassa positivo.\n");
    scanf(" %d", &r);
    if (r == 1)                 
    {
        
        e = e + 1;
    }
    else if(r!= 2)
    {
        printf("Puoi rispondere solamente 1 o 2, riprova.\n");
        goto t8;
    }

     t9:

    printf("Tappa 5: Gestione delle Risorse Umane\n1) Utilizzare finanziamenti agevolati per le imprese. \n2) Ottenere un prestito bancario con tassi di interesse elevati.\n");
    scanf(" %d", &r);
    if (r == 2)                 
    {
        
        e = e + 1;
    }
    else if(r!= 1)
    {
        printf("Puoi rispondere solamente 1 o 2, riprova.\n");
        goto t9;
    }


    t10:
    printf("Tappa 10: Gestione delle Tasse.\n1) Tenere traccia delle scadenze fiscali e pagare le tasse in modo puntuale.\n2) Ignorare le scadenze fiscali e pagare le multe.\n");                    //t12
    scanf(" %d", &r);
    if ( r == 2 )
    {
        e = e+1;
    }
    else if ( r != 1 )
    {
        printf("Puoi rispondere solamente 1 o 2, riprova\n");
        goto t10;
    }

    t11:
    printf("Tappa 11: Rendimento degli Investimenti.\n1) Investire tutti i profitti in azioni rischiose.\n2) Diversificare gli investimenti per ridurre il rischio.\n");                    //t11
    scanf(" %d", &r);
    if ( r == 1 )
    {
        e = e+1;
    }
    else if ( r != 2 )
    {
        printf("Puoi rispondere solamente 1 o 2, riprova\n");
        goto t11;
    }
    
     t12:
    printf("Tappa 12: Decisione di Espansione.\n1) Condurre uno studio di mercato approfondito prima di espandersi.\n2)  Espandere rapidamente in nuovi mercati senza ricerca preliminare.\n");                    //t12
    scanf(" %d", &r);
    if ( r == 2 )
    {
        e = e+1;
    }
    else if ( r != 1 )
    {
        printf("Puoi rispondere solamente 1 o 2, riprova\n");
        goto t12;
    }

    t13:
    printf("Tappa 13: Affrontare una Crisi Economica.\n1) Diversificare il business e cercare nuove opportunità di mercato.\n2) Tagliare drasticamente i costi eliminando dipendenti e servizi.\n");                    //t13
    scanf(" %d", &r);
    if ( r == 2 )
    {
        e = e+1;
    }
    else if ( r != 1 )
    {
        printf("Puoi rispondere solamente 1 o 2, riprova\n");
        goto t13;
    }

    t14:
    printf("Tappa 14: Adattarsi ai Cambiamenti del Mercato.\n1) Continuare con la stessa strategia nonostante i cambiamenti del mercato.\n2) Aggiornare la strategia aziendale per adattarsi ai cambiamenti del mercato.\n");                    //t14
    scanf(" %d", &r);
    if ( r == 1 )
    {
        e = e+1;
    }
    else if ( r != 2 )
    {
        printf("Puoi rispondere solamente 1 o 2, riprova\n");
        goto t14;
    }
    
    if(e > 3)
    {
        return 1;
    }
    else if (e<= 3)
    {
        printf("Bravissimo hai completato il percorso di educazione finanziaria grazie per aver visitato il nostro sito, speriamo ti sia stato utile passa a trovarci quando vuoi.\n");
        return 0;
    }
}
void Corsoavanzato()
{
    a0:
    t0:
    printf("Sulla mail ti abbiamo inviato le dispense per il corso avanzato.\nStudia da quelle, consulta i video allegati e torna a fare il test per raggiungere il corso successivo.");
    printf("TEST FINALE CORSO AVANZATO.\nTi ricordiamo che sono concessi solo due errori\n");

    char k;
    int a = 0;
    printf("RISPONDI V O F ALLE DOMANDE.\n");
    
    a1:

    printf("Il tasso di cambio flessibile implica che il governo interviene costantemente per mantenere stabile il valore della propria valuta.\n");
    scanf(" %c", &k);
    if (k == 70 || k == 102)                 
    {
        
        a = a + 1;
    }
    else if(!(k == 86 || k == 118))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto a1;
    }

    a2:
    
    printf("Il concetto di rischio sistemico si riferisce alla possibilità che un evento influenzi l'intero sistema finanziario, anziché una singola istituzione o mercato.\n");
    scanf(" %c", &k);
    if (k == 86 || k == 118)                 
    {
        a = a + 1;
    }
    else if(!(k == 70 || k == 102))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto a2;
    }

    a3:
    printf("L'elasticità-prezzo della domanda misura la sensibilità della quantità domandata di un bene rispetto a una variazione del prezzo di un altro bene. \n");
    scanf(" %c", &k);
    if (k == 70 || k == 102)                 
    {
        
        a = a + 1;
    }
    else if(!(k == 86 || k == 118))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto a3;
    }
    
    a4:
    
    printf("Il rendimento di un investimento è definito come la percentuale di profitto o perdita generata da tale investimento rispetto al suo costo originale.\n");
    scanf(" %c", &k);
    if (k == 86 || k == 118)                 
    {
        a = a + 1;
    }
    else if(!(k == 70 || k == 102))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto a4;
    }

    a5:
    
    printf("La deflazione è il processo di diminuzione generalizzata dei prezzi dei beni e dei servizi in un'economia.\n");
    scanf(" %c", &k);
    if (k == 86 || k == 118)                 
    {
        a = a + 1;
    }
    else if(!(k == 70 || k == 102))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto a5;
    }
    
    if ( k>=3)
    {
        printf("Bravissimo! Test superato.\nPuoi passare al corso medio.\n");
        if (Testfinale() == 1)
        {
            goto t0;
        }
    }
    else if ( k<=2 )
    {
        printf("Test non superato.\nRiprendi le slide e torna!\n");
        goto a0;
    }

}
void Corsomedio()
{
    
    m0:
    printf("Sulla mail ti abbiamo inviato le dispense per il corso medio.\nStudia da quelle, consulta i video allegati e torna a fare il test per raggiungere il corso successivo.");
    printf("TEST FINALE CORSO MEDIO.\nTi ricordiamo che sono concessi solo due errori\n");

    char z;
    int m = 0;
    printf("RISPONDI V O F ALLE DOMANDE.\n");
    
    m1:

    printf("L'IVA può essere applicata solo sui beni e non sui servizi.\n");
    scanf(" %c", &z);
    if (z == 70 || z == 102)                 
    {
        
        m = m + 1;
    }
    else if(!(z == 86 || z == 118))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto m1;
    }

    m2:
    
    printf("Il concetto di diversificazione del portafoglio suggerisce che investire in una varietà di attività può ridurre il rischio complessivo del portafoglio.\n");
    scanf(" %c", &z);
    if (z == 86 || z == 118)                 
    {
        m = m + 1;
    }
    else if(!(z == 70 || z == 102))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto m2;
    }

    m3:
    
    printf("La legge della domanda e dell'offerta afferma che, tutto il resto costante, un aumento del prezzo di un bene porterà a una diminuzione della quantità domandata di quel bene.\n");
    scanf(" %c", &z);
    if (z == 86 || z == 118)                 
    {
        m = m + 1;
    }
    else if(!(z == 70 || z == 102))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto m3;
    }

    m4:

     printf("L'IVA è un'imposta indiretta che grava sul consumatore finale.\n");
    scanf(" %c", &z);
    if (z == 86 || z == 118)                 
    {
        m = m + 1;
    }
    else if(!(z == 70 || z == 102))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto m4;
    }

     m5:

    printf("Il modello di equilibrio generale in economia si basa sull'idea che i prezzi si adattano istantaneamente per equilibrare la domanda e l'offerta.\n");
    scanf(" %c", &z);
    if (z == 70 || z == 102)                 
    {
        
        m = m + 1;
    }
    else if(!(z == 86 || z == 118))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto m5;
    }

    if ( m>=3)
    {
        printf("Bravissimo! Test superato.\nPuoi passare al corso medio.\n");
        Corsoavanzato();
    }
    else if ( m<=2 )
    {
        printf("Test non superato.\nRiprendi le slide e torna!\n");
        goto m0;
    }
}
void Corsobase()
{
    b0:
    printf("Sulla mail ti abbiamo inviato le dispense per il corso base.\nStudia da quelle, consulta i video allegati e torna a fare il test per raggiungere il corso successivo.");
    printf("TEST FINALE CORSO BASE.\nTi ricordiamo che sono concessi solo due errori\n");

    char y;
    int b = 0;
    printf("RISPONDI V O F ALLE DOMANDE.\n");
    
    b1:

    printf("Un aumento delle tasse sul reddito può aumentare la domanda aggregata.\n");
    scanf(" %c", &y);
    if (y == 70 || y == 102)                 
    {
        
        b = b + 1;
    }
    else if(!(y == 86 || y == 118))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto b1;
    }

    b2:
    
    printf("Le tasse possono variare a seconda del reddito di un individuo.\n");
    scanf(" %c", &y);
    if (y == 86 || y == 118)                 
    {
        b = b + 1;
    }
    else if(!(y == 70 || y == 102))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto b2;
    }

    b3:
    
    printf("I prestiti possono essere utilizzati per investire in nuovi progetti aziendali.\n");
    scanf(" %c", &y);
    if (y == 86 || y == 118)                 
    {
        b = b + 1;
    }
    else if(!(y == 70 || y == 102))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto b3;
    }

    b4:

    printf("Il tasso di interesse è determinato esclusivamente dalla domanda e dall'offerta di denaro.\n");
    scanf(" %c", &y);
    if (y == 70 || y == 102)                 
    {
        
        b = b + 1;
    }
    else if(!y == 86 || y == 118)
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto b4;
    }
    
    b5:
    
    printf("I tassi di interesse dei prestiti possono essere fissi o variabili.\n");
    scanf(" %c", &y);
    if (y == 86 || y == 118)                 
    {
        b = b + 1;
    }
    else if(!(y == 70 || y == 102))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto b5;
    }

    if ( b>=3)
    {
        printf("Bravissimo! Test superato.\nPuoi passare al corso medio.\n");
        Corsomedio();
    }
    else if ( b<=2 )
    {
        printf("Test non superato.\nRiprendi le slide e torna!\n");
        goto b0;
    }
    
}
void Questionario()
{
    char x;
    int p = 0;
    printf("RISPONDI V O F ALLE DOMANDE.\n");
    
    d1:

    printf("L' inflazione è sempre dannosa per l'economia.\n");
    scanf(" %c", &x);
    if (x == 70 || x == 102)                 
    {
        
        p = p + 1;
    }
    else if(!(x == 86 || x == 118))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto d1;
    }

    d2:
    
    printf("Il tasso di disoccupazione misura la percentuale di persone in età lavorativa che sono senza lavoro e cercano attivamente un impiego.\n");
    scanf(" %c", &x);
    if (x == 86 || x == 118)                 
    {
        p = p + 1;
    }
    else if(!(x == 70 || x == 102))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto d2;
    }

    d3:
    
    printf("Il PIL pro capite è una misura del reddito medio della nazione.\n");
    scanf(" %c", &x);
    if (x == 86 || x == 118)                 
    {
        p = p + 1;
    }
    else if(!(x == 70 || x == 102))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto d3;
    }


    d4:

    printf("Il mercato azionario è sempre un indicatore preciso delle condizioni economiche generali.\n");
    scanf(" %c", &x);
    if (x == 70 || x == 102)                 
    {
        
        p = p + 1;
    }
    else if(!(x == 86 || x == 118))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto d4;
    }


     d5:

    printf("Il salario minimo è uno strumento efficace per ridurre la disoccupazione.\n");
    scanf(" %c", &x);
    if (x == 70 || x == 102)                 
    {
        
        p = p + 1;
    }
    else if(!(x == 86 || x == 118))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto d5;
    }


     d6:
    
    printf("Il debito pubblico rappresenta la somma di tutti i debiti accomulati da un governoi nel corso del tempo.\n");
    scanf(" %c", &x);
    if (x == 86 || x == 118)                 
    {
        p = p + 1;
    }
    else if(!(x == 70 || x == 102))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto d6;
    }


    d7:

    printf("La politica economica è gestita dal governo attraverso la regolamentazione delle tasse.\n");
    scanf(" %c", &x);
    if (x == 70 || x == 102)                 
    {
        
        p = p + 1;
    }
    else if(!(x == 86 || x == 118))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto d5;
    }


    d8:
    
    printf("Il PIL è la somma di consumi, investimenti, spesa pubblica e esportazioni nette.\n");
    scanf(" %c", &x);
    if (x == 86 || x == 118)                 
    {
        p = p + 1;
    }
    else if(!(x == 70 || x == 102))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto d8;
    }

    d9:
    
    printf("Nel finanziamento, il finanziatore ottiene un rendimento sottoforma di interessi, mentre nel prestito il prestatore riceve una quota di partecipazione nei profitti dell'attività finanziata.\n");
    scanf(" %c", &x);
    if (x == 70 || x == 102)                 
    {
        p = p + 1;
    }
    else if(!(x == 86 || x == 118))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto d9;
    }


    d10:
    
    printf("L'economia di mercato è un sistema economico in cui il governo controlla l'allocazione delle risorse.\n");
    scanf(" %c", &x);
    if (x == 70 || x == 102)                 
    {
        p = p + 1;
    }
    else if(!(x == 86 || x == 118))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto d10;
    }


     d11:
    
    printf("Il deficit di bilancio si verifica quando il governo spende più di quanto guadagna.\n");
    scanf(" %c", &x);
    if (x == 86 || x == 118)                 
    {
        p = p + 1;
    }
    else if(!(x == 70 || x == 102))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto d11;
    }

    d12:
    
    printf("L'effeto a lungo termine dell'innovazione tecnologica è sempre positivo sull'economia.\n");
    scanf(" %c", &x);
    if (x == 86 || x == 118)                 
    {
        p = p + 1;
    }
    else if(!(x == 70 || x == 102))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto d12;
    }


    d13:
    
    printf("Il concetto di offerta e domanda suggerisce che il prezzo di un bene è determinato dall'interazione tra l'offerta e la domanda.\n");
    scanf(" %c", &x);
    if (x == 86 || x == 118)                 
    {
        p = p + 1;
    }
    else if(!(x == 70 || x == 102))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto d13;
    }


    d14:
    
    printf("L'inflazione si verifica quando il livello generale dei prezzi diminuisce nel tempo.\n");
    scanf(" %c", &x);
    if (x == 70 || x == 102)                 
    {
        p = p + 1;
    }
    else if(!(x == 86 || x == 118))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto d14;
    }


    d15:
    
    printf("Un finanziamento può rigaurdare sia denaro che altri beni, mentre un prestito è sempre associato a somme di denaro.\n");
    scanf(" %c", &x);
    if (x == 86 || x == 118)                 
    {
        p = p + 1;
    }
    else if(!(x == 70 || x == 102))
    {
        printf("Puoi rispondere solamente v o f, riprova.\n");
        goto d15;
    }

    printf("Bravo, hai completato il questionatio.\nHai raggiunto un punteggio di %d\n", p);
    if ( p<5 )
    {
        printf("Non ti preoccupare il nostro sito serve a questo.\nTi reindirizziamo al corso base.\n");
        Corsobase();
    }
    else if ( p>5 && p<10 )
    {
         printf("Bravo ma puoi fare di meglio.\nTi reindirizziamo al corso medio.\n");
        Corsomedio();
    }
    else if ( p>10 )
    {
        printf("Bravissimo! Puoi fare ancora di più.\nTi reindirizziamo al corso avanzato.\n");
        Corsoavanzato();
    }

    
}
void sceltaCorso()
{
    char stringa1[100];
    printf("Scegli tra i Corsi:\nBase\nMedio\nAvanzato.\n");
    corso:
    scanf(" %s",stringa1);
    if (strstr(stringa1, "base") || strstr(stringa1, "BASE") || strstr(stringa1,"base") != NULL)
    {
        Corsobase();
    }
    else if (strstr(stringa1, "medio") || strstr(stringa1, "MEDIO") || strstr(stringa1,"medio") != NULL)
    {
        Corsomedio();
    }
    else if (strstr(stringa1, "avanzato") || strstr(stringa1, "AVANZATO") || strstr(stringa1,"avanzato") != NULL)
    {
        Corsoavanzato();
    }
    else
    {
    printf("Errore\nPuoi scrivere solo base, medio o avanzato.\n");
    goto corso;
    }
}
void Sito1()
{
    char stringa[100];
    printf( "Vi diamo il benvenuto su COINFORMATION!\nIl nostro sito ha lo scopo di formare ed educare i giovani sull'economia.\nPotrai scegliere se partire direttamente con uno dei nostri corsi oppure potrai essere valutato con un test.\nIl nostro test è composto da 15 domande e in base al punteggio verrai reindirizzato ad un corso diverso:\nCorso Base,\nCorso Medio,\nCorso Avanzato.\n");
    printf("ADESSO SCEGLI TRA TEST O CORSO.\n");
    sito:
    scanf(" %s",stringa);
    if (strstr(stringa, "test") || strstr(stringa, "TEST") || strstr(stringa,"Test") != NULL)
    {
        Questionario();
    }
    else if (strstr(stringa, "corso") || strstr(stringa, "CORSO") || strstr(stringa,"Corso") != NULL)
    {
        sceltaCorso();
    }
    else
    {
    printf("Errore.\nPuoi scegliere solo tra test o corso\n");
    goto sito;
    }
}
int main()
{
    Sito1();
    return(0);
}