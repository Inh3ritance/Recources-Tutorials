<?php
	error_reporting(0);
	require 'db/connect.php';
	
	if($update = $db->query("UPATE people SET created = NOW() WHERE id > 1")){//UPDATE
		echo $db->affected_rows;
	}
	
	if($update = $db->query("DELETE FROM people WHERE id = 1")){//DELETE
		echo $db->affected_rows;
	}
	
?>