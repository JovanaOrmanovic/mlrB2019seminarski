﻿Користићемо алгоритам за проналажење пресека два сортирана низа.

Вредност бројача **br**, коју смо на почетку поставили на нулу  ћемо увећавати кад год наиђемо на ученика који се налази на оба списка.

Крећемо од почетка низова и користимо два бројача **i** и **j**, по један за сваки низ, која ће памтити позиције до којих смо стигли. 
Унутар **while** петље, све док не дођемо до краја једног од низова, упоређујемо њихове елементе.
Уколико су елементи једнаки повећавамо вредност бројача **br** и прелазимо на наредни елемент у оба низа. Уколико је број у дневнику актуелног елемента првог низа мањи од броја у дневнику актуелног елемента другог низа, можемо да га прескочимо јер се он сигурно не налази у другом низу. Слично и уколико је број у дневнику актуелног елемента другог низа мањи од броја у дневнику актуелног елемента првог низа и њега прескачемо. Испитивање вршимо употребом наредбе гранања.

Како су нам подаци на списковима дати у облики *Иницијали_ученикаБр_у_дневнику*, а спискови сортирани по бројевима  у дневнику, у засебној функцији издвајамо тај број. За издвајање подстринга користимо фукнцију **Substring** у језику C#, **substr** у језику C++, док у Python-у подстринг можемо извојити користећи индексирање нпр. **[i: ]** враћа све каракере од индекса *i*. 

