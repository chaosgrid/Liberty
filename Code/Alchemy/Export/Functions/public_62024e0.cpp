#include "Alchemy-PCH.h"

PROC_DECLARE(0x62024e0, internal_62024e0, public_62024e0);
extern "C" NAKED register_t __cdecl internal_62024e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_625791c]
        ret 4
        UNREACHABLE_TRAP(0x62024e0)
    }
}
