#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629f6d0);
CLANG_FORWARD_PROC_SYMBOL(public_62c2660);

PROC_DECLARE(0x629f6d0, internal_629f6d0, public_629f6d0);
extern "C" NAKED register_t __cdecl internal_629f6d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+0x24]
        call public_62c2660
        mov dword ptr ds : [esi+0x83C], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x629f6d0)
    }
}
