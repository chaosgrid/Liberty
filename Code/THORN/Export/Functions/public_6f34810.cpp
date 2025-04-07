#include "THORN-PCH.h"

PROC_DECLARE(0x6f34810, internal_6f34810, public_6f34810);
extern "C" NAKED register_t __cdecl internal_6f34810()
{
    __asm
    {
        mov eax, 0xFFFFFFF9
        ret 0xC
        UNREACHABLE_TRAP(0x6f34810)
    }
}
