#include "Alchemy-PCH.h"

PROC_DECLARE(0x6209130, internal_6209130, public_6209130);
extern "C" NAKED register_t __cdecl internal_6209130()
{
    __asm
    {
        mov eax, 0xFFFFFFF9
        ret 8
        UNREACHABLE_TRAP(0x6209130)
    }
}
