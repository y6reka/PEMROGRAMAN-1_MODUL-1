jumlah_pasukan = 958730
pahlawan = ["Zilong", "Ling", "Baxia", "Wanwan", "Chang’e"]
jumlah_pahlawan = len(pahlawan)

pasukan_per_pahlawan = jumlah_pasukan // jumlah_pahlawan

print(f"Jumlah pasukan yang dibawa Yu Zhong = {jumlah_pasukan:,}".replace(",", "."))
print(f"Jumlah pahlawan = {jumlah_pahlawan}")
print(f"Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah {pasukan_per_pahlawan} pasukan")

