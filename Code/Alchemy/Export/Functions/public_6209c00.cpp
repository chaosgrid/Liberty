#include "Alchemy-PCH.h"

PROC_DECLARE(0x6209c00, internal_6209c00, public_6209c00);
extern "C" NAKED register_t __cdecl internal_6209c00()
{
    __asm
    {
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6209c00)
    }
}
