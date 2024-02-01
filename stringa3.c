int i;
     for (i=0; i<strlen(s); i++)
          // Se il carattere corrispondente della stringa è
          // un carattere maiuscolo, ovvero è compreso tra A e Z...
          
          if ( (s[i]>='A') && (s[i]<='Z') )
s[i]+=32; // spazio che esiste in codice ASCII tra i caratteri maiuscoli e minuscoli 
}
int main()  {
     char s[20];
int i;
     printf ("Inserisci una stringa: ");
     scanf ("%20s",s);
     toLower(s);
     printf ("Stringa convertita completamente in “
        “caratteri minuscoli: %s\n",s);
    return 0;
}
