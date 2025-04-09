#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f6ea0, internal_4f6ea0, public_4f6ea0);
extern "C" NAKED register_t __cdecl internal_4f6ea0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d99d4]
        mov dword ptr ds : [public_674f48], eax
        ret 
        UNREACHABLE_TRAP(0x4f6ea0)
    }
}
