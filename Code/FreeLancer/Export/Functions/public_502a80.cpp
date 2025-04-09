#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_502a80);

PROC_DECLARE(0x502a80, internal_502a80, public_502a80);
extern "C" NAKED register_t __cdecl internal_502a80()
{
    __asm
    {
        push esi
        mov esi, ecx
        call dword ptr ds : [public_5c6030]
        lea ecx, ds:[esi+4]
        call dword ptr ds : [public_5c69a0]
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x502a80)
    }
}
