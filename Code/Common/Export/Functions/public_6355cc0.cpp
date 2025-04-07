#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6355cc0);
CLANG_FORWARD_PROC_SYMBOL(public_63561c0);

#define public_6355d1c _public_6355d1c

PROC_DECLARE(0x6355cc0, internal_6355cc0, public_6355cc0);
extern "C" NAKED register_t __cdecl internal_6355cc0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [eax+0x120]
        fmul dword ptr ds : [esi+0x24]
        fst dword ptr ss : [esp+4]
        fst dword ptr ds : [esi+0x24]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        jne public_6355d1c
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        jne public_6355d1c
        mov ecx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        jne public_6355d1c
        mov edx, dword ptr ss : [esp+4]
        push edx
        mov ecx, esi
        call public_63561c0
        fld st(0)
        mov eax, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [eax+0xC]
        fadd dword ptr ds : [eax+0x68]
        fstp dword ptr ds : [eax+0x68]
        fld dword ptr ds : [esi+0x24]
        fsub st, st(1)
        fstp dword ptr ds : [esi+0x24]
        fstp st(0)
        public_6355d1c : nop
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6355cc0)
    }
}

#undef public_6355d1c
