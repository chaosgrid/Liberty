#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5300d0, internal_5300d0, public_5300d0);
extern "C" NAKED register_t __cdecl internal_5300d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ddd40]
        mov dword ptr ds : [public_67550c], eax
        ret 
        UNREACHABLE_TRAP(0x5300d0)
    }
}
