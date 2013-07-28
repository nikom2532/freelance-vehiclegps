<?php 
$connection = new MongoClient();
$collection = $connection->arming->a3;	

echo $collection->count();

?>
