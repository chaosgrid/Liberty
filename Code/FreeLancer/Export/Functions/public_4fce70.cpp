#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4fce70, internal_4fce70, public_4fce70);
extern "C" NAKED register_t __cdecl internal_4fce70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d9e18]
        mov dword ptr ds : [public_674f74], eax
        ret 
        UNREACHABLE_TRAP(0x4fce70)
    }
}
