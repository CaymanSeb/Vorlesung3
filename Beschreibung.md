# Vorlesung3
Übungsaufgaben zur dritten Vorlesung

Hier die Beschreibung zu der Aufgabe Iterative vs. Rekursiv:

Ich habe, da ich kein CyGwin benutze, aus dem Internet die Version mit der Messung der Prozessorlaufzeit benutzt,
um die benötigte Zeit herauszufinden.

Warum ist iterativ schneller als rekursiv, hier meine Theorie:

Die rekursive Funktion berechnet immer nur einen Schritt,
danach ruft sie sich selbst wieder auf, bis die Abbruchbedingung eintritt.
Das heißt, sie ruft sich bei der Zahl 42 -> 43 mal auf, da dann die Abbruchbedingung eintritt.
Rekursive Funktionen brauchen dadurch mehr Speicher da jedes mal wieder jede Zeile gelesen wird.

Die Iterative Funktion springt einmal in die Schleife und erhöht dann jedes mal den Wert,
ohne etwas auszugeben. Die Abbruchbedingung ist hier schon enthalten, 
ohne die Funktion noch einmal neu aufzurufen.Trifft die Bedingung zu, wird ein Wert ausgegeben.
Dadurch braucht die iterative Schleife weniger Zeit.

endl;
