#include "Alchemy-PCH.h"

PROC_DECLARE(0x6212e70, internal_6212e70, public_6212e70);
extern "C" NAKED register_t __cdecl internal_6212e70()
{
    __asm
    {
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6212e70)
    }
}
