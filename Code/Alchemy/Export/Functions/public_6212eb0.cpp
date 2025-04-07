#include "Alchemy-PCH.h"

PROC_DECLARE(0x6212eb0, internal_6212eb0, public_6212eb0);
extern "C" NAKED register_t __cdecl internal_6212eb0()
{
    __asm
    {
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6212eb0)
    }
}
