<?php
$e = 0;
$f = 1;
$i = 28;
while ($i > 0) {
	$f *= $i;
	$e += $f;
	$i--;
}
$e /= $f;
print($e);
?>
