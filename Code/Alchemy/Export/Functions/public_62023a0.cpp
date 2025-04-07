#include "Alchemy-PCH.h"

PROC_DECLARE(0x62023a0, internal_62023a0, public_62023a0);
extern "C" NAKED register_t __cdecl internal_62023a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6257908]
        ret 4
        UNREACHABLE_TRAP(0x62023a0)
    }
}
