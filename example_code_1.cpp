#include <Adafruit_NeoPixel.h>

//7���� ���
#define PIN        7
//�ȼ� ���� ����
#define NUMPIXELS 15
//��� ����
#define bright 255
#define dly 10000
//neopixel�� �����ϱ� ���� neo ����
Adafruit_NeoPixel neo(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
    //neopixel ����
    neo.begin();
    //neopixel ��� ����
    neo.setBrightness(bright);
    //neopixel �ʱ�ȭ
    neo.clear();
    //neopixel ����
    //.show()�� ����ؾ� led�� ������ �ǹǷ� ����
    neo.show();
}

void loop()
{
    for (int i = 0; i < 15; i++)
    {
        neo.setPixelColor
    }
}