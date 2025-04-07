#include "Server-PCH.h"

PROC_DECLARE(0x6cef380, internal_6cef380, public_6cef380);
extern "C" NAKED register_t __cdecl internal_6cef380()
{
    __asm
    {
        mov eax, 0xFFFFFFFD
        ret 0x10
        UNREACHABLE_TRAP(0x6cef380)
    }
}
