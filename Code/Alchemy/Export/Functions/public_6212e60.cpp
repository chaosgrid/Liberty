#include "Alchemy-PCH.h"

PROC_DECLARE(0x6212e60, internal_6212e60, public_6212e60);
extern "C" NAKED register_t __cdecl internal_6212e60()
{
    __asm
    {
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6212e60)
    }
}
