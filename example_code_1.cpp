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
    for (int i = 0; i < 15; i++)
    {
        neo.setPixelColor
    }
}