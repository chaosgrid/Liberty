#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635b4d0);
CLANG_FORWARD_PROC_SYMBOL(public_635bd10);

#define public_635b53a _public_635b53a

PROC_DECLARE(0x635b4d0, internal_635b4d0, public_635b4d0);
extern "C" NAKED register_t __cdecl internal_635b4d0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x60]
        fld dword ptr ds : [ecx+0x5C]
        fld dword ptr ds : [ecx+0x58]
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
        fcom dword ptr ds : [public_63a5494]
        fnstsw ax
        test ah, 0x41
        jne public_635b53a
        fld dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [ecx]
        fmul dword ptr ds : [ecx+0x60]
        fld dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [ecx+0x5C]
        faddp 
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [ecx+0x58]
        faddp 
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [ecx+0x60]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+0x5C]
        faddp 
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx+0x58]
        faddp 
        fxch 
        fsub st, st(1)
        fxch 
        fstp st(0)
        fld st(0)
        fmul st, st(1)
        fdivrp st(2), st
        fstp st(0)
        ret 
        public_635b53a : nop
        mov edx, dword ptr ds : [ecx+0x4C]
        fstp st(0)
        push esi
        mov eax, edx
        and eax, 0xFFFFFFF0
        mov esi, dword ptr ds : [eax]
        and esi, 0xFFF
        neg esi
        shl esi, 4
        add eax, esi
        push edx
        add eax, 0xFFFFFFF0
        push eax
        add ecx, 8
        push ecx
        call public_635bd10
        add esp, 0xC
        pop esi
        ret 
        UNREACHABLE_TRAP(0x635b4d0)
    }
}

#undef public_635b53a
