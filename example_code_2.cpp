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
    //led�� ��ȣ������ ���������� ������� ����
    for (int i = 0; i < 15; i++)
    {
        neo.setPixelColor(i, 255, 255, 255);
        neo.show();
        delay(500);
    }

    //led�� ��ȣ������ ���������� �������� ����
    delay(500);
    for (int i = 0; i < 15; i++)
    {
        neo.setPixelColor(i, 255, 0, 0);
        neo.show();
        delay(500);
    }

    //led�� ��ȣ������ ���������� ������� ����
    delay(500);
    for (int i = 0; i < 15; i++)
    {
        neo.setPixelColor(i, 0, 255, 0);
        neo.show();
        delay(500);
    }

    //led�� ��ȣ������ ���������� û������ ����
    delay(500);
    for (int i = 0; i < 15; i++)
    {
        neo.setPixelColor(i, 0, 0, 255);
        neo.show();
        delay(500);
    }
    delay(2000);
}