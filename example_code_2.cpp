#include <Adafruit_NeoPixel.h>

//7번핀 사용
#define PIN        7
//픽셀 갯수 지정
#define NUMPIXELS 15
//밝기 지정
#define bright 255
#define dly 10000
//neopixel을 제어하기 위한 neo 생성
Adafruit_NeoPixel neo(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
    //neopixel 시작
    neo.begin();
    //neopixel 밝기 설정
    neo.setBrightness(bright);
    //neopixel 초기화
    neo.clear();
    //neopixel 적용
    //.show()를 사용해야 led에 적용이 되므로 주의
    neo.show();
}

void loop()
{
    //led가 번호순으로 순차적으로 흰색으로 점등
    for (int i = 0; i < 15; i++)
    {
        neo.setPixelColor(i, 255, 255, 255);
        neo.show();
        delay(500);
    }

    //led가 번호순으로 순차적으로 적색으로 점등
    delay(500);
    for (int i = 0; i < 15; i++)
    {
        neo.setPixelColor(i, 255, 0, 0);
        neo.show();
        delay(500);
    }

    //led가 번호순으로 순차적으로 녹색으로 점등
    delay(500);
    for (int i = 0; i < 15; i++)
    {
        neo.setPixelColor(i, 0, 255, 0);
        neo.show();
        delay(500);
    }

    //led가 번호순으로 순차적으로 청색으로 점등
    delay(500);
    for (int i = 0; i < 15; i++)
    {
        neo.setPixelColor(i, 0, 0, 255);
        neo.show();
        delay(500);
    }
    delay(2000);
}