function cetak_seri_deret_fibonacci($jumlah)
{
	$angka_awal = 0;
	$angka_kedua = 1;
	$hasil = "$angka_awal $angka_kedua";
	    for ($i=0; $i<$jumlah-2; $i++)
{
	$output = $angka_kedua + $angka_awal;
	$hasil = $hasil."$output";
	$angka_awal = $angka_kedua;
	$angka_kedua = $output;
}
		return $hasil;
}
	echo cetak_seri_deret_fibonacci(10);
?>
