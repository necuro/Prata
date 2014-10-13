Класс Person (Человек) предназначен для хранения имени и фамилии  
человека. Кроме конструкторов он содержит метод Show () для вывода этих данных. 
Класс Gunslinger (Снайпер) виртуально порожден от класса Person. Он  
содержит член Draw () , который возвращает значение типа double — время,  
необходимое снайперу для перехода в боевую готовность. Класс также имеет член типа 
int, содержащий количество насечек на винтовке. И, наконец, класс содержит 
функцию Show (), которая выводит всю эту информацию. 
Класс PokerPlayer (Игрок в покер) виртуально порожден от класса Person. Он 
имеет метод Draw (), который возвращает случайное число в диапазоне от 1 до 
52 — значение карты. (Можно создать класс Card с членами, определяющими 
масть и рубашку карты, чтобы метод Draw () возвращал значение типа Card.) 
Класс PokerPlayer использует функцию Show() класса Person. Класс BadDude 
(Хулиган) открыто порожден от классов Guns linger и PokerPlayer. Он  
содержит член Gdraw (), возвращающий время вынимания оружия, и член Cdraw (), 
возвращающий следующую вытянутую карту. У него есть соответствующая  
функция Show (). Определите все упомянутые классы и методы вместе с другими  
необходимыми методами (такими как методы для задания значений объекта) и 
протестируйте их с помощью простой программы, подобной представленной в 
листинге 14.12. 