#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_542790);

#define public_53f630 _public_53f630
#define public_53f632 _public_53f632
#define public_53f663 _public_53f663
#define public_53f665 _public_53f665
#define public_53f684 _public_53f684

PROC_DECLARE(0x53f610, internal_53f610, public_53f610);
extern "C" NAKED register_t __cdecl internal_53f610()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_542790
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_53f630
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 7
        cmp cl, 7
        je public_53f632
        public_53f630 : nop
        xor eax, eax
        public_53f632 : nop
        mov ecx, dword ptr ds : [public_5c6918]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edi
        mov ecx, eax
        call dword ptr ds : [edx+0x50]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x154]
        test al, al
        jne public_53f684
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_53f663
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 7
        cmp cl, 7
        je public_53f665
        public_53f663 : nop
        xor eax, eax
        public_53f665 : nop
        fld dword ptr ds : [eax+0xE8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        je public_53f684
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x15C]
        public_53f684 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x53f610)
    }
}

#undef public_53f630
#undef public_53f632
#undef public_53f663
#undef public_53f665
#undef public_53f684
