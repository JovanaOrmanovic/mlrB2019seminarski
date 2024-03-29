﻿Ако је n непарно медијана је средњи по величини међу датим бројевима, а ако је n парно медијана је аритметичка средина два средња по величини броја међу датим бројевима.
Да бисмо израчунали медијану потребно је да дате бројеве уредимо по величини. Пошто ћемо бројеве уносити у низ, то ћемо у језику C# остварити позивом функције **Arrays.Sort**, у језику Python фунцијом **sorted**, а и језику C++ функцијом **sort**.

Мода је вредност која се појављује најчешће. Може их бити и више уколико највећи број појављивања одговара већем броју бројева . 
Да бисмо одредили моду направимо низ $b$ који ће чувати колико пута се појавила која оцена.  $b[i-1]$ ће садржати број појављивања оцене $i$. Како оцена има пет, толико ће бити и елемената нашег низа. Приликом прављења низа сви елементи се иницијализују на 0, зато једноставно само увећавати број $b[a[i] - 1]$ кад год се појави оцена $a[i]$. 
У језику C# помоћу фукнције **Max()** одредићемо највећу вредност низа $b$ што је уједно и највећи број појављивања неке оцене.
У језику C++ користићемо функцију **max_element** из библиотеке **algorithm** која враћа показивач на највећу вредност у низу. А пошто нам треба вредност, а не показивач на ту вредност у низу, ми је дереференцирамо ( *max_element() ).
У језику Python највећу вредност ћемо одредити помоћу функције **max()**. 
Затим ћемо још једним проласком кроз низ $b$  исписати све оцене које се појављују толики број пута.


 
