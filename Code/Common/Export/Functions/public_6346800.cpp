#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346800);

PROC_DECLARE(0x6346800, internal_6346800, public_6346800);
extern "C" NAKED register_t __cdecl internal_6346800()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        fld dword ptr ds : [eax]
        fld st(0)
        fmulp 
        fld dword ptr ds : [eax+4]
        fld st(0)
        fmulp 
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+4]
        fld st(0)
        fmulp 
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+8], eax
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fmul dword ptr ds : [ecx+0x20]
        fxch st(4)
        fmul dword ptr ds : [ecx+0x18]
        fxch st(3)
        fmul dword ptr ds : [ecx+0x1C]
        faddp st(3), st
        fxch st(4)
        fmul dword ptr ds : [ecx+0x14]
        faddp st(2), st
        fxch 
        faddp st(2), st
        fxch 
        fmul dword ptr ds : [public_63a5460]
        fxch st(2)
        fstp st(0)
        fstp st(0)
        ret 8
        UNREACHABLE_TRAP(0x6346800)
    }
}
