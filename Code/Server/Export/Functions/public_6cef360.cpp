#include "Server-PCH.h"

PROC_DECLARE(0x6cef360, internal_6cef360, public_6cef360);
extern "C" NAKED register_t __cdecl internal_6cef360()
{
    __asm
    {
        mov eax, 0xFFFFFFFD
        ret 0x14
        UNREACHABLE_TRAP(0x6cef360)
    }
}
