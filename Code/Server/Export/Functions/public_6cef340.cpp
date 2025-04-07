#include "Server-PCH.h"

PROC_DECLARE(0x6cef340, internal_6cef340, public_6cef340);
extern "C" NAKED register_t __cdecl internal_6cef340()
{
    __asm
    {
        mov eax, 0xFFFFFFF8
        ret 4
        UNREACHABLE_TRAP(0x6cef340)
    }
}
