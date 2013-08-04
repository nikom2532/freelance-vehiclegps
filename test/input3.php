<?php
$filename = "data.txt";
$file_handle = fopen($filename, "rb");
echo "++++<br/>";
while (!feof($file_handle) )
{
	$line_of_text = fgets($file_handle);
	$record = explode(',', $line_of_text);
	print_r($record);
	echo "<br />";
}

echo "++++<br/>";
fclose($file_handle);
?>
