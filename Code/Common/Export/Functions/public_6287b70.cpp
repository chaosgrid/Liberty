#include "Common-PCH.h"

PROC_DECLARE(0x6287b70, internal_6287b70, public_6287b70);
extern "C" NAKED register_t __cdecl internal_6287b70()
{
    __asm
    {
        lea eax, ds:[ecx+0x24C]
        ret 
        UNREACHABLE_TRAP(0x6287b70)
    }
}
