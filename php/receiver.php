<?php

//$uploaddir = './images';
//$uploadfile = $uploaddir . basename($_FILES['userfile']['name']);

mail("contact@dansakamoto.com", "form submitted", $_POST['message']);

?>