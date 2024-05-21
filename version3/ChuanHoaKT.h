void ChuanHoaTenNganh(char TenNganh[KT_Nganh])
{
	for(int i = 0; i < (int) strlen(TenNganh); i++)
	{
		TenNganh[i] = toupper(TenNganh[i]); 
	}
    return; 
}


void ChuanHoaTenSV(char TenSV[KT_TenSV])
{
    while (TenSV[0] == ' ') memmove(&TenSV[0], &TenSV[1], strlen(TenSV));

    while (TenSV[strlen(TenSV) - 1] == ' ') TenSV[strlen(TenSV) - 1] = '\0';

    for (int i = 0; TenSV[i]; i++)
    {
        TenSV[i] = tolower(TenSV[i]);
    }

    TenSV[0] = toupper(TenSV[0]);
    for (int i = 1; TenSV[i]; i++) 
    {
        if (TenSV[i - 1] == ' ') TenSV[i] = toupper(TenSV[i]);
    }

    for (int i = 0; TenSV[i]; i++) 
    {
        if (TenSV[i] == ' ' && TenSV[i + 1] == ' ') 
        {
            memmove(&TenSV[i], &TenSV[i + 1], strlen(TenSV) - i);
            i--;
        }
    }
    if(TenSV[(int) strlen(TenSV) - 1] == ' ') TenSV[(int) strlen(TenSV)] == '\0';
	return;
}