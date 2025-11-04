/*
** EPITECH PROJECT, 2025
** Project: German C
** File description:
** Header file for anyone who
** wants to write C in German
*/

#ifndef GERMAN_C_H
    #define GERMAN_C_H

    // -------------- Language Keywords -------------- :
    /**
     * selbstbeschreibend
     */
    #define für for

    /**
     * selbstbeschreibend
     */
    #define während while

    /**
     * "break" währe halt sowas
     * wie "brich ab", also ist
     * "abbruch" OK (selbst wenn's
     * eher "cancel" währe)
     */
    #define abbruch break

    /**
     * "continue" könnte "weiter"
     * sein, aber ist mir ein bisschen
     * zu zweideutig.
     * "nächster" hört sich whack an.
     */
    #define überspringe continue

    /**
     * "switch" währe "schalte"
     * oder "Schalter" (wenn als Nomen).
     * schalte (wert) { fall 1: liefer "test"; }
     * ist übelst komisch, also lieber nicht.
     * "prüfe" passt gut mit den anderen Schlüsselwörtern.
     * Beispiel:
     * ```c
     * prüfe (wert) {
     *     falls 1: liefer "eis";
     *     falls 2: liefer "matcha";
     *     falls 3: liefer "latte";
     *     andernfalls: liefer "zu spät beim Pilates";
     * }
     * ```
     */
    #define prüfe switch

    /**
     * selbstbeschreibend
     * (Ein neuer Fall für die ???)
     */
    #define falls case

    /**
     * selbstbeschreibend
     */
    #define andernfalls default

    /**
     * selbstbeschreibend
     */
    #define mach do

    /**
     * selbstbeschreibend
     */
    #define wenn if

    /**
     * selbstbeschreibend
     */
    #define sonst else

    /**
     * Am akkuratesten währe "zurück geben",
     * aber es ist halt kein Wort (sondern Zwei).
     * Etwas wie "ergebe" ist währe OK für etwas
     * wie Haskell, aber da Funktionen oftmals mehr
     * machen als nur einen Ergebnis erzeugen, finde
     * ich "liefere" schon etwas besser.
     * "liefer" klingt natürlicher als das steife "liefere",
     * also why not.
     */
    #define liefer return

    // --------------- Primitive Types --------------- :
    /**
     * "ganz" kurz für "Ganzzahl" (vgl. "int" -> "integer")
     */
    #define ganz int

    /**
     * von "Gleitkommazahl" halt
     */
    #define gleitkomma float

    /**
     * selbstbeschreibend
     */
    #define doppel double


    /**
     * selbstbeschreibend
     */
    #define zeichen char

    /**
     * "nichts" wurde für "NULL"
     * behalten. Mehr dazu beim
     * define von "NULL" (weil es
     * nicht selbstbeschreibend ist)
     */
    #define leer void

    // ---------------- Type Modifiers --------------- :
    /**
     * selbstbeschreibend
     */
    #define statisch static

    /**
     * selbstbeschreibend
     */
    #define flüchtig volatile

    /**
     * selbstbeschreibend
     */
    #define eingeschränkt restrict

    /**
     * selbstbeschreibend
     * (boring ahh Schlüsselwort)
     */
    #define extern extern

    /**
     * Keine akkurate Übersetzung
     * aber passt und ist intuitiv
     * (°u°)b
     */
    #define einzeiler inline

    /**
     * "konstant" weil "konst" sich
     * gleich anhört
     */
    #define konstant const

    /**
     * selbstbeschreibend
     */
    #define kurz short

    /**
     * selbstbeschreibend
     */
    #define lang long

    /**
     * offizieller mathematischer Begriff
     */
    #define vorzeichenlos unsigned

    /**
     * ein bisschen silly aber naja
     * besser als sowas wie
     * "mitvorzeichen" weil's ein
     * einzizges Wort ist
     */
    #define vorzeichenbehaftet signed


    // ----------------- Custom Types ---------------- :
    /**
     * "typdefinition" statt "typdef"
     * weil "typdef" zu ähnlich am
     * Original ist (ja, German C wird
     * eine sehr ~lange~ verbose Sprache
     * (wer hät's gedacht))
     */
    #define typdefinition typedef
    
    /**
     * "struktur" weil "strukt"
     * zu ähnlich am Original ist
     */
    #define struktur struct

    /**
     * selbstbeschreibend
     */
    #define aufzählung enum

    /**
     * selbstbeschreibend
     */
    #define union union

    // --------------- Language Macros --------------- :
    /**
     * selbstbeschreibend
     * ich hab kein Numpad auf meinem
     * Laptop, also kein alt + 0223 :C
     */
    #define grössevon sizeof

    // ---------------- Custom Macros ---------------- :
    /**
     * weil "bool" langweilig ist
     */
    #define wahrheitswert _Bool

    /**
     * selbstbeschreibend
     */
    #define wahr 1

    /**
     * selbstbeschreibend
     */
    #define falsch 0

    /**
     * "NULL" is theoretisch auf Deutsch
     * auch einfach nur "null", aber trotz
     * der gleichen Definition werden beide
     * Wörter anders benutzt; das Deutsche
     * "null" ist am ehesten wie das Englische
     * "zero";
     * Im Endeffekt wurde "nichts" gewählt, weil
     * "liefere nichts;" (also "return NULL;")
     * sich besser anhört als "liefere leer" oder
     * (am schlimmsten mMn) "liefere null;".
     */
    #define nichts ((void *)0)

    /**
     * selbstbeschreibend
     */
    #define haupteinstieg main

#endif
