<?php
$docs_per_page = 5;

$page = isset($_GET['page']) ? $_GET['page'] : 1;
$q = isset($_GET['q']) ? $_GET['q'] : "";


$m = new Mongo;
$db = $m->arming;
$collection = $db->a10;

$criteria = array();
if (isset($q{0})) {
    $criteria['first_name'] = new MongoRegex('/' .$q . '/i');
    //$criteria['last_name']['$or'] = new MongoRegex('/' .$q . '/i');
}
$fields = array('email', 'first_name', 'created_at');

$skip = (int) ($docs_per_page * ($page - 1));
$limit = (int) $docs_per_page;

$cursor = $collection->find($criteria, $fields);
$cursor->sort(array('created_at' => -1))->skip($skip)->limit($limit);

$total_result = $cursor->count();
$total_page = (int) (ceil($total_result/$docs_per_page));

$m->close();

?>
