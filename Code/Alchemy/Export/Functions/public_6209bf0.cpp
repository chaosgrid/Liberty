#include "Alchemy-PCH.h"

PROC_DECLARE(0x6209bf0, internal_6209bf0, public_6209bf0);
extern "C" NAKED register_t __cdecl internal_6209bf0()
{
    __asm
    {
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6209bf0)
    }
}
