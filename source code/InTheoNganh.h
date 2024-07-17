void InNganh(CauTrucTroNganh* Nganh);
void InTheoNganh(CauTrucTroNganh Nganh[SL_Nganh]); 


void InTheoNganh(CauTrucTroNganh Nganh[SL_Nganh])
{
	puts("1.KHMT 2.CNTT 3.ATTT 4.KTMT"); 
	printf("Nhap Ten Nganh: ");

	char TenNganh[KT_Nganh]; 
	scanf("%s", TenNganh); getchar(); 
	ChuanHoaTenNganh(TenNganh); 

	if(strcmp(TenNganh, "KHMT") == 0) 
	{
		InNganh(&Nganh[0]); 
	}
	else if(strcmp(TenNganh, "CNTT") == 0)
	{
		InNganh(&Nganh[1]); 
	}
	else if(strcmp(TenNganh, "ATTT") == 0)
	{
		InNganh(&Nganh[2]); 
	}
	else if(strcmp(TenNganh, "KTMT") == 0)
	{
		InNganh(&Nganh[3]); 
	}
	return; 
}

void InNganh(CauTrucTroNganh* Nganh)
{
	// In tiêu đề bảng
    	printf("+-----------+-------------------------+------------+---------+\n");
    	printf("|   NGANH   |           TEN           |    TUOI    |   GPA   |\n"); 
    	printf("+-----------+-------------------------+------------+---------+\n");
	
	if(Nganh->Dau == NULL)
	{
		printf("|   NULL    |           NULL          |    NULL    |   NULL  |\n"); 
    		printf("+-----------+-------------------------+------------+---------+\n");

		return; 
	}
	SinhVien* ConTro = Nganh->Dau;
	while(ConTro != NULL)
	{
		int khoang_trang_TenNganh = 3; 
		int khoang_trang_TenSV = 3; 
        	int khoang_trang_Tuoi = 4; 
        	int khoang_trang_Gpa = 3;

        	printf("|%*s%*s|%*s%*s|%*d%*s|%*.1f%*s|\n", 

               	khoang_trang_TenNganh + (int) strlen(ConTro->TenNganh), ConTro->TenNganh,
               	11 - khoang_trang_TenNganh - (int) strlen(ConTro->TenNganh), "", 

               	khoang_trang_TenSV + (int) strlen(ConTro->TenSV), ConTro->TenSV, 
               	25 - khoang_trang_TenSV - (int) strlen(ConTro->TenSV), "", 

               	khoang_trang_Tuoi + (ConTro->Tuoi < 10 ? 1 : 
               			    (ConTro->Tuoi < 100 ? 2 : 3)), ConTro->Tuoi, 
               	12 - khoang_trang_Tuoi - (ConTro->Tuoi < 10 ? 1:
               			         (ConTro->Tuoi < 100 ? 2 : 3)), "", 

        	khoang_trang_Gpa + 3, ConTro->Gpa,
        	khoang_trang_Gpa, ""); 

               
    		printf("+-----------+-------------------------+------------+---------+\n");
		ConTro = ConTro->Next;
	}


}

