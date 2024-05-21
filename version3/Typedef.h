
typedef struct Nguoi 
{
	char TenSV[KT_TenSV];
	int Tuoi;
	float Gpa;
	char TenNganh[KT_Nganh]; 
	struct Nguoi* Next;
} SinhVien; 



typedef struct 
{
	SinhVien* Dau;
	SinhVien* Cuoi; 
} CauTrucTroNganh; 