<h1>Trains</h1>

**Cel**

Symulacja pociągów, zabawa z łączeniem wagonów i lokomotyw, ładowaniem towarów do wagonów i zmiana prędkości pociągów.

**Na ocenę 3**

Opracować szkielet systemu w oparciu o poniższe klasy i funkcje.
*RailVehicle* - abstrakcyjna klasa bazowa dla wszystkich pojazdów szynowych. Umożliwia łączenie pojazdów. Umożliwia wyświetlanie stanu i zawartości pojazdów.

**Funkcje**

 - RailVehicle* ConnectToNext(RailVehicle* nextPtr);
 - virtual int GetSpeed() const;
 - virtual void ShowThis(ostream& o) const = 0;
 - void ShowAll(ostream& o) const;

*Engine* - lokomotywa. Umożliwia zmianę prędkości pociągu. Dziedziczy po RailVehicle. Ma maksymalną prędkość.

**Funkcje**

*int ChangeSpeed(int value)*

*FreightCar* - wagon towarowy. Dziedziczy po *RailVehicle*.

**Zasady łączenia pojazdów**

Pojazdy można połączyć jeśli z danej strony nie są do niczego podłączone. Do łączenia służy jedna funkcja, podłączająca pojazd do następnego w szeregu. Aby połączyć pojazdy, należy podać wskaźnik do następnego pojazdu. Aby rozłączyć pojazdy, należy podać NULL. W przypadku pomyślnej operacji funkcja zwraca wskaźnik do dołączanego pojazdu, w przeciwnym wypadku rzuca wyjątek. Operacje łączenia i rozłączania można przeprowadzić tylko gdy pojazdy łączone/rozłączane stoją. Zniszczenie pojazdu powoduje odłączenie go od sąsiadów (tu wyjątek: nawet jeśli jadą).

**Zasady zwracania prędkości pociągu**

Każdy pojazd można zapytać o prędkość pociągu. Używając wskaźników do poprzedniego pojazdu dochodzi on do czoła pociągu i jeśli jest tam lokomotywa, zwraca jej prędkość.

(uwaga: nie uwzględniamy wielu lokomotyw w pociągu, zwracamy zawsze prędkość lokomotywy z czoła pociągu)

**Inna funkcjonalność**

Funkcje *ShowThis* i *ShowAll* mają odpowiednio wyprowadzać do strumienia informację o pojedynczym pojeździe i całym pociągu.

