#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f67c0, internal_4f67c0, public_4f67c0);
extern "C" NAKED register_t __cdecl internal_4f67c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d98b0]
        mov dword ptr ds : [public_674c4c], eax
        ret 
        UNREACHABLE_TRAP(0x4f67c0)
    }
}
