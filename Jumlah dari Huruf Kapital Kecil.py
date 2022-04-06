HurufKapital = 0
HurufKecil = 0
teks = input(' Masukkan Teks yang anda inginkan : ')
for a in range (0, len (teks)):
    jumlah = teks[a]
    if jumlah.isupper():
        HurufKapital = HurufKapital + 1
    elif jumlah.islower():
        HurufKecil = HurufKecil + 1
        
    print('Jumlah dari Huruf Kapital=', HurufKapital)
    print('Jumlah dari Huruf Kecil=', HurufKecil)