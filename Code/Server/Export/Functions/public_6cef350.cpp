#include "Server-PCH.h"

PROC_DECLARE(0x6cef350, internal_6cef350, public_6cef350);
extern "C" NAKED register_t __cdecl internal_6cef350()
{
    __asm
    {
        mov eax, 0xFFFFFFFD
        ret 8
        UNREACHABLE_TRAP(0x6cef350)
    }
}
