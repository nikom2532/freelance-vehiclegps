<?php
$filename = "data.txt";

$text_variable = file_get_contents($filename);
$lines = file($filename, FILE_IGNORE_NEW_LINES);

print_r($lines);
?>
