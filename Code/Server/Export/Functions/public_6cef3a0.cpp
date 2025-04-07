#include "Server-PCH.h"

PROC_DECLARE(0x6cef3a0, internal_6cef3a0, public_6cef3a0);
extern "C" NAKED register_t __cdecl internal_6cef3a0()
{
    __asm
    {
        mov eax, 0xFFFFFFFD
        ret 4
        UNREACHABLE_TRAP(0x6cef3a0)
    }
}
