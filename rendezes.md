# Link a feladathoz: https://cses.fi/problemset/task/1073
## Feladat:
* kockákból kell tornyokat építeni.
* az adatokat sorban kell feldolgozni tehát, egy kocka vagy már meglévő torony tetejére kerül vagy egy torony alapja lesz.
* cél: a lehető legkevesebb torony építése.
* visszatérési érték: épített tornyok száma
## Input:
* Az első sor egy egész számot (0 < n <= 2*10^5) tartalmaz, amely a kockák száma.
* A következő sor egész számok halmaza (0 < k <=10^9) mely a kockák méreteit tartalmazza.
## Algoritmus:
* A feladat megoldásához a "Binary search algoritmust" választottam.
## Kivitelezés:
* Először eltárolom a kockák számát egy változóban.
* Ezután egy for ciklus segítségével eltárolom egy tömbben a kockák méreteit.
* Majd ezt követően feldolgozom azokat és minden új kocka esetében végre hajtok egy bináris keresést ezen a listán.
* Első lépésben megnézem, hogy van-e olyan torony a listában, amelynek a tetejére tudnám helyezni az adott kockát.
* Ha van, akkor a listában át írom a torony értéket ezzel csökkentve a korábbi értékét. így implicit módon a listám növekvő sorrendben lesz, ugyanis, mindig a legkisebb szám kerül a lista elejére.
* Ha nincs, akkor egy új tornyot kezdek, amelyet úgy érek el, hogy a lista végére teszem az adott kockát.
* Ezt egészen addig folytatom amíg kocka méreteit tartalmazó lista végére nem érek.
* Ekkor egész egyszerűen visszaadom a tornyok nevű listám méretét. 
