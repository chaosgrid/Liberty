#include "THORN-PCH.h"

PROC_DECLARE(0x6f34800, internal_6f34800, public_6f34800);
extern "C" NAKED register_t __cdecl internal_6f34800()
{
    __asm
    {
        mov eax, 0xFFFFFFF9
        ret 0xC
        UNREACHABLE_TRAP(0x6f34800)
    }
}
