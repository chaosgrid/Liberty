#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632f8b0);

PROC_DECLARE(0x632f8b0, internal_632f8b0, public_632f8b0);
extern "C" NAKED register_t __cdecl internal_632f8b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [eax]
        mov edx, ecx
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], esi
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        fld dword ptr ds : [ecx+8]
        fld dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+8]
        fld dword ptr ds : [ecx]
        pop esi
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fdivr dword ptr ds : [public_639a1d0]
        fld st(0)
        fmul dword ptr ds : [ecx]
        fst dword ptr ds : [ecx]
        fld st(1)
        fmul dword ptr ds : [ecx+4]
        fst dword ptr ds : [ecx+4]
        fxch st(2)
        fmul dword ptr ds : [ecx+8]
        fst dword ptr ds : [ecx+8]
        fmul dword ptr ds : [eax+8]
        fxch st(2)
        fmul dword ptr ds : [eax+4]
        faddp st(2), st
        fmul dword ptr ds : [eax]
        faddp 
        fstp dword ptr ds : [ecx+0xC]
        ret 8
        UNREACHABLE_TRAP(0x632f8b0)
    }
}
