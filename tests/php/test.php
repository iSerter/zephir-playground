<?php

$test = new Iserter\Test;

$test->hello() . PHP_EOL;

$collection = new Iserter\Utils\Collection(['asd',6,2,6,2,6]);

var_dump($collection);
$pop = $collection->pop();
var_dump('hello from pop', $pop);
$collection->push('ilyas');

echo $collection[3] . PHP_EOL;
echo $collection[2] . PHP_EOL;
echo $collection[1] . PHP_EOL;

foreach ($collection as $item) {
    var_dump($item);
}