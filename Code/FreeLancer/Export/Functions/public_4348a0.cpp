#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4348a0, internal_4348a0, public_4348a0);
extern "C" NAKED register_t __cdecl internal_4348a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cada0]
        mov dword ptr ds : [public_668654], eax
        ret 
        UNREACHABLE_TRAP(0x4348a0)
    }
}
