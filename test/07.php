<?php
$connection = new MongoClient();
$collection = $connection->arming->a3;

for ( $i = 0; $i < 100; $i++ )
{
    $collection->insert( array( 'i' => $i, "field{$i}" => $i * 2 ) );
}

?>
