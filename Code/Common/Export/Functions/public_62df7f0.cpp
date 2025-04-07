#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62df7f0);

PROC_DECLARE(0x62df7f0, internal_62df7f0, public_62df7f0);
extern "C" NAKED register_t __cdecl internal_62df7f0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_63a073c]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, 0x5F3759DF
        shr eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp+4], ecx
        fmul dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        fld dword ptr ds : [public_63a0740]
        fmul dword ptr ss : [esp+4]
        fxch st(2)
        fmulp 
        fsubp 
        ret 
        UNREACHABLE_TRAP(0x62df7f0)
    }
}
