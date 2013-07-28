<?php
$connection = new MongoClient();
$db = $connection->arming;

// select a collection:
$collection = $db->a1;

$doc = array(
    "a1" => "a1data",
    "a2" => "a2data"
);

$collection->insert( $doc );

$document = $collection->findOne();
var_dump( $document );

/*
$cursor = $collection->find();
// iterate through the results
foreach ($cursor as $document) {
    echo $document["title"] . "\n";
}
*/
?>
