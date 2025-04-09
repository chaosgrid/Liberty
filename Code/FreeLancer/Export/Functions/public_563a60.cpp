#include "FreeLancer-PCH.h"

PROC_DECLARE(0x563a60, internal_563a60, public_563a60);
extern "C" NAKED register_t __cdecl internal_563a60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e21dc]
        mov dword ptr ds : [public_67a498], eax
        ret 
        UNREACHABLE_TRAP(0x563a60)
    }
}
