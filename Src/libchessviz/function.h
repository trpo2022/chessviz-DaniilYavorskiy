 #ifndef function
 #define function
 
extern char doska[8][8];

int Take(int x_start, int x_end, int y_start, int y_end, int hod, int kod_sbros);
int Move(int x_start, int x_end, int y_start, int y_end, int hod, int kod_sbros);
int Proverka_vvoda(int kod_sbros);
void Vivod_doski();
void Doska_v_nachale();

 #endif
