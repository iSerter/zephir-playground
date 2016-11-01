<?php

$test = new Iserter\Test;

$test->hello() . PHP_EOL;

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