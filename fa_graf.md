# Link a feladathoz: https://www.spoj.com/problems/GCPC11J/
## Feladat:
* Adott egy körmentes hálózat és az a dolgunk, hogy elhelyezünk egy router-t benne úgy, hogy az a lehető legoptimálisabb legyen.
* Feladatunk az, hogy kiszámoljuk mennyi volna a legoptimálisabb azaz legkisebb Time to live (TTL) értéke.
## Input:
* Első teszt esetek száma 1 ≤ c ≤ 100
* Minden teszt eset egy számmal kezdődik amely, megadja a hálózatban lévő eszközök számát 1 < N ≤ 10^5
* Ezt követően N - 1 sorban a hálózati kapcsolatok vannak leírva
## Megoldás:
* Az adatokat beolvasáskor eltároltam egy szomszédsági listában.
* Ezt követően egy tetszőleges pontot választva, mélységi kereséssel megtalálom a hozzá legtávolabbi pontot.
* Ez lesz 'A' a kiindulási pont.
* Ezután még egy mélységi kereséssel meghatározzuk a hozzá legtávolabbi pontot ez lesz a 'B' pont.
* Utána, az optimális TTL formulába beílsztve (TTL = B/2) kapom meg az eredmény.
* A router-t a leghosszabb út közepére kell helyezni.
