#include "FreeLancer-PCH.h"

PROC_DECLARE(0x52c810, internal_52c810, public_52c810);
extern "C" NAKED register_t __cdecl internal_52c810()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dd424]
        mov dword ptr ds : [public_675450], eax
        ret 
        UNREACHABLE_TRAP(0x52c810)
    }
}
