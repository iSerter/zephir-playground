<?php

$str = new Iserter\Utils\Str('hello world 5');

var_dump($str->length());
var_dump($str->slice(4,3),$str->slice(0,5));
var_dump($str->endsWith(' 5'),$str->endsWith('world'),$str->endsWith('0'));
var_dump($str->contains('wor'),$str->contains('o'),$str->contains(5),$str->contains(2));
exit;

$collection = new Iserter\Utils\Collection(['asd',6,2,6,2,6]);

$pop = $collection->pop();
var_dump('hello from pop', $pop);
$collection->push('ilyas');
$collection->prepend('prepended item');

echo $collection[3] . PHP_EOL;
echo $collection[2] . PHP_EOL;
echo $collection[1] . PHP_EOL;

//for($i=0; $i < 500000; $i++) {
//    $collection->push($i);
//}

var_dump($collection->count());

var_dump(json_encode($collection));
var_dump($collection->toJson());


foreach ($collection as $item) {
    var_dump($item);
}