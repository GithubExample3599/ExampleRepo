#include "console.h"
#include "util.h"
void console_init(struct MultibootInfo* mbi)
{
    volatile unsigned char* framebuffer = (volatile unsigned char*)mbi->mbiFramebufferAddress;
    char* i = framebuffer-1;
    while(i++ < mbi->mbiFramebufferWidth)
    {
        *i = 0;
    }
}

void set_pixel(int x, int y, int r, int g, int b)
{

}
