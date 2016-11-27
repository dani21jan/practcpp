# include <stdio.h>

int main() {
    int h1,m1,s1,h2,m2,s2;
    int durasi_jam, durasi_menit, durasi_detik, biaya;
    
    printf("Jam mulai ? \n");
    scanf("%d:%d:%d", &h1, &m1, &s1);
    printf("Jam selesai ? \n");
    scanf("%d:%d:%d", &h1, &m1, &s1); 
    durasi_detik = s2 - s1;
    durasi_menit = m2 - m1;
    durasi_jam = h2 - h1;
    if (durasi_detik < 0) {
       durasi_menit--;
       durasi_detik += 60;
       }
    if (durasi_menit < 0) {
       durasi_jam-- ;
       durasi_menit += 60;
       }
    biaya = durasi_jam * 960 + durasi_menit * 16;
    if (durasi_detik >= 30) {
       biaya += 8;
       durasi_detik -= 30;
       }
    biaya += durasi_detik;
    printf("biaya telepon anda = %d", biaya);
    
    fflush(stdin); getchar();
    return 0;
}
