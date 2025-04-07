#include "Server-PCH.h"

PROC_DECLARE(0x6cef370, internal_6cef370, public_6cef370);
extern "C" NAKED register_t __cdecl internal_6cef370()
{
    __asm
    {
        mov eax, 0xFFFFFFFD
        ret 0xC
        UNREACHABLE_TRAP(0x6cef370)
    }
}
