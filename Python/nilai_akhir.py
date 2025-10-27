tugas = float(input("Masukkan nilai tugas: "))
uts = float(input("Masukkan nilai UTS: "))
uas = float(input("Masukkan nilai UAS: "))
nilai_akhir = (tugas + uts + uas) / 3
print("Nilai akhir: ", nilai_akhir)
if nilai_akhir >= 60:
    print("Status: Lulus")
else:
    print("Status: Tidak Lulus")