<?php 
/*
$connection = new MongoClient();
$collection = $connection->arming->a4;	
*/

// connect
$m = new MongoClient();

// select a database
$db = $m->arming;

// select a collection (analogous to a relational database's table)
$collection = $db->a10;


// add a record
$document = array( "title" => "Calvin and Hobbes", "author" => "Bill Watterson" );
$collection->insert($document);

// add another record, with a different "shape"
$document = array( "title" => "XKCD", "online" => true );
$collection->insert($document);

// find everything in the collection
$cursor = $collection->find();

// iterate through the results
foreach ($cursor as $document) {
    echo $document["title"] . "\n";
}
//$collection->save($document);

$m->close();
?>
