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
    während (*kette != '\0') {
        wenn (*kette == z)
            liefer wahr;
        kette++;
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
    statisch zeichenkette aktuell = nichts;
    zeichenkette anfang;

    wenn (zkette) aktuell = zkette;
    anfang = aktuell;
    wenn (*aktuell == '\0') liefer nichts;
    während (*aktuell != '\0' && !ist_enthalten(*aktuell, trenner)) {
        aktuell++;
    }
    während (*aktuell != '\0' && ist_enthalten(*aktuell, trenner)) {
        *aktuell = '\0';
        aktuell++;
    }
    liefer anfang;
}

/**
 * Damit das ganze auch kompiliert...
 */
ganz haupteinstieg(leer)
{
    zeichenkette text = strdup("Eis Matcha Latte zu spät beim Pilates");
    zeichenkette token = mein_zeichenkettentoken(text, " ");

    während (token) {
        printf("Mein Token: %s\n", token);
        token = mein_zeichenkettentoken(nichts, " ");
    }

    free(text);
    liefer 0;
}
