#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2af60);

#define public_6c2af9a _public_6c2af9a

PROC_DECLARE(0x6c2af60, internal_6c2af60, public_6c2af60);
extern "C" NAKED register_t __cdecl internal_6c2af60()
{
    __asm
    {
        fld dword ptr ds : [ecx+0xC]
        fcomp qword ptr ds : [public_6c36318]
        fnstsw ax
        test ah, 1
        jne public_6c2af9a
        fld dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ss : [esp+4]
        fmul dword ptr ds : [ecx+0xC]
        fld st(0)
        fchs 
        fld st(0)
        fstp dword ptr ds : [eax+4]
        fld st(1)
        fstp dword ptr ds : [eax]
        fst dword ptr ds : [eax+0xC]
        fld st(1)
        fstp dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+0x14]
        fstp dword ptr ds : [eax+0x10]
        xor eax, eax
        ret 4
        public_6c2af9a : nop
        push edi
        mov edi, dword ptr ss : [esp+8]
        xor eax, eax
        mov ecx, 6
        rep stosd
        or eax, 0xFFFFFFFF
        pop edi
        ret 4
        UNREACHABLE_TRAP(0x6c2af60)
    }
}

#undef public_6c2af9a
