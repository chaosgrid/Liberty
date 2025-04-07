#include "Server-PCH.h"

PROC_DECLARE(0x6cef390, internal_6cef390, public_6cef390);
extern "C" NAKED register_t __cdecl internal_6cef390()
{
    __asm
    {
        mov eax, 0xFFFFFFFD
        ret 
        UNREACHABLE_TRAP(0x6cef390)
    }
}
