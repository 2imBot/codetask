secret = "GMBH|D0ef_Cb4t1d~"
# Khai báo chuỗi cần mã hóa
flag = "".join(chr(ord(c) - 1) for c in secret)
#Chuỗi hoạt động từ phải sang trái,từ ord(c)- =>chr() =join()
print("Flag tim duoc la:", flag)
#in ra output
#endd
