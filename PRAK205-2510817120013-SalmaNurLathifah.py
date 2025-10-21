import math

nilai = input().split()

if len(nilai) == 1:
    A = float(nilai[0])
    B = float(input())
else:
    A, B = map(float, nilai)

alas = math.sqrt(B**2 - A**2)
tinggi = A
keliling = A + B + alas
luas = 0.5 * alas * A

print(f"Alas = {int(alas)} cm")
print(f"Tinggi = {int(tinggi)} cm")
print(f"Keliling = {int(keliling)} cm")
print(f"Luas = {int(luas)} cm^2")