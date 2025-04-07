#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6350aa0);

PROC_DECLARE(0x6350aa0, internal_6350aa0, public_6350aa0);
extern "C" NAKED register_t __cdecl internal_6350aa0()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_63a5460]
        fld st(0)
        fmul dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fmul st, st(1)
        fmul dword ptr ds : [public_63a5624]
        fsubp 
        fst dword ptr ss : [esp+4]
        fstp dword ptr ds : [ecx]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fld st(0)
        fmul st, st(1)
        fmul st, st(1)
        fmul dword ptr ds : [public_63a5624]
        fsubp 
        fst dword ptr ss : [esp+8]
        fstp dword ptr ds : [ecx+4]
        fmul dword ptr ds : [eax+8]
        fld st(0)
        fmul st, st(1)
        fmul st, st(1)
        fmul dword ptr ds : [public_63a5624]
        fsubp 
        fst dword ptr ds : [ecx+8]
        fld st(0)
        fmulp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        faddp 
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        faddp 
        fsubr dword ptr ds : [public_63a53d0]
        fsqrt 
        fstp dword ptr ds : [ecx+0xC]
        ret 8
        UNREACHABLE_TRAP(0x6350aa0)
    }
}
