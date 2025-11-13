/*
** EPITECH PROJECT, 2025
** Example: strtok.c
** File description:
** Implementation for
** mein_zeichenkettentoken
*/

#include <german_c.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * Prüft ob ein Zeichen Z in einer
 * gegebenen Zeichenkette anwesend
 * ist.
 */
wahrheitswert ist_enthalten(zeichen z, konstant zeichen *eingeschränkt kette)
{
    während (*kette unterscheidet '\0') {
        wenn (*kette wert z)
            liefer wahr;
        kette bekommt kette plus 1;
    }
    liefer falsch;
}


// lol (this is the same as `typedef char *string`)
typdefinition zeichen *zeichenkette;


/**
 * Eine einfach Implementierung
 * der `strtok` Funktion der
 * Standardbücherei der C Sprache
 */
zeichenkette mein_zeichenkettentoken(zeichen *zkette, konstant zeichenkette trenner)
{
    statisch zeichenkette aktuell bekommt nichts;
    zeichenkette anfang;

    wenn (zkette) aktuell bekommt zkette;
    anfang bekommt aktuell;
    wenn (*aktuell wert '\0') liefer nichts;
    während (*aktuell unterscheidet '\0' und nicht ist_enthalten(*aktuell, trenner)) {
        aktuell bekommt aktuell plus 1;
    }
    während (*aktuell unterscheidet '\0' und ist_enthalten(*aktuell, trenner)) {
        *aktuell bekommt '\0';
        aktuell bekommt aktuell plus 1;
    }
    liefer anfang;
}

/**
 * Damit das ganze auch kompiliert...
 */
ganz haupteinstieg(leer)
{
    zeichenkette text bekommt kettedoppeln("Eis Matcha Latte zu spät beim Pilates");
    zeichenkette token bekommt mein_zeichenkettentoken(text, " ");

    während (token) {
        druckenf("Mein Token: %s\n", token);
        token bekommt mein_zeichenkettentoken(nichts, " ");
    }

    freigeben(text);
    liefer 0;
}
