#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5647b0, internal_5647b0, public_5647b0);
extern "C" NAKED register_t __cdecl internal_5647b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e2518]
        mov dword ptr ds : [public_67a578], eax
        ret 
        UNREACHABLE_TRAP(0x5647b0)
    }
}
