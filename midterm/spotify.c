#include <stdio.h>
#include <string.h>

int main() {
    long int m, s, q;
    scanf("%ld.%ld", &m, &s);
    scanf("%ld", &q);

    char playlist[q][51];
    int min[q], sec[q];
    int total_time = 0;
    for (int i = 0; i < q; i++) {
        int queue_num, tmp_min, tmp_sec;
        char temp_name[51];
        scanf(" Queue#%d <|> %[^<] <|> %d.%d", &queue_num, temp_name, &tmp_min, &tmp_sec); //รับเลขคิว ชื่อเพลง ความยาวของเพลง นาที:วินาที
        strcpy(playlist[queue_num - 1], temp_name); //ใส่ชื่อเพลงลงไปใน arr ตามลำดับของเพลง
        min[queue_num - 1] = tmp_min; //เพิ่มหน่วยนาทีของเพลงลงไปใน arr เพื่อเก็บค่า นำมาคำนวณต่อในภายหลัง
        sec[queue_num - 1] = tmp_sec + tmp_min * 60; //เพิ่มหน่วยวินาทีของเพลงลงไปใน arr เพื่อเก็บค่า นำมาคำนวณต่อในภายหลัง
        total_time += sec[queue_num - 1]; //ความยาวราวของเพลลิสต์เป็นหน่วยวินาที
    }

    long int listen = (m * 60) + s; //เก็บค่าเวลาที่เราฟังเป็นหน่วยวินาที

    if (listen > total_time) {
        listen %= total_time; //mod เวลาที่เกินจากความยาวของเพลลิสต์
    }

    int i = 0;
    while (i < q && listen > sec[i]) { 
        listen -= sec[i]; 
        i++;
    }

    int duration = sec[i];
    printf("Song Order: %d\n", i + 1);
    printf("Song Name: %s\n", playlist[i]);

    int percent = (listen * 100) / duration;
    if (percent == 100) {
        printf("Song Process: Complete");
    } else {
        if (percent == 0 && listen > 0) {
            percent = 1;
        }
        printf("Song Process: %d%%", percent);
    }

    return 0;
}
