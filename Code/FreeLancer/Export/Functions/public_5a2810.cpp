#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5a2810, internal_5a2810, public_5a2810);
extern "C" NAKED register_t __cdecl internal_5a2810()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e600c]
        mov dword ptr ds : [public_67de40], eax
        ret 
        UNREACHABLE_TRAP(0x5a2810)
    }
}
