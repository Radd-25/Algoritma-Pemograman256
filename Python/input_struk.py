nama = input("Masukkan nama barang: ")
harga = float(input("Masukkan harga barang: "))
jumlah = int(input("Masukkan jumlah beli: "))

total = harga * jumlah

if total >15200:
    diskon = total * 0.02
else:
    diskon = 0

total_bayar = total - diskon

print("===== STRUK PEMBELIAN =====")   
print("Nama Barang   : ", nama)
print("Harga Satuan  : Rp", harga)
print("Jumlah Beli   :",jumlah, "pcs")
print("Total Harga   : Rp", total)
print("Diskon        : Rp", diskon)
print("Total Bayar   : Rp", total_bayar)
print("===========================")