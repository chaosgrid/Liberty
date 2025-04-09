#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_513fb0);

PROC_DECLARE(0x513fb0, internal_513fb0, public_513fb0);
extern "C" NAKED register_t __cdecl internal_513fb0()
{
    __asm
    {
        push ecx
        fld dword ptr ds : [ecx+8]
        fld dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx]
        mov ecx, 0x5F3759DF
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fst dword ptr ss : [esp]
        mov eax, dword ptr ss : [esp]
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp], ecx
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp]
        fmul st, st(1)
        fmul dword ptr ds : [public_5c75e0]
        fsubr dword ptr ds : [public_5ca220]
        fmul dword ptr ss : [esp]
        fmulp 
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x513fb0)
    }
}
