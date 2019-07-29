<?php

$db = new mysqli('127.0.0.1','root','password',);
if($db->connect_errno){
	echo $db->connect_error;
	//die sorry were having problems
}

?>