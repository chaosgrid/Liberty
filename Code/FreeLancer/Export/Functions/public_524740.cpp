#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_524740);
CLANG_FORWARD_PROC_SYMBOL(public_54d920);

#define public_52476a _public_52476a
#define public_524780 _public_524780
#define public_524790 _public_524790
#define public_524797 _public_524797
#define public_5247d8 _public_5247d8

PROC_DECLARE(0x524740, internal_524740, public_524740);
extern "C" NAKED register_t __cdecl internal_524740()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        cmp edx, dword ptr ds : [ecx+0x154]
        push ebx
        push esi
        jge public_52476a
        test edx, edx
        jl public_52476a
        mov esi, dword ptr ss : [esp+0xC]
        push edx
        push esi
        add ecx, 0xFC
        call public_54d920
        mov eax, esi
        pop esi
        pop ebx
        ret 8
        public_52476a : nop
        mov eax, dword ptr ds : [ecx+0x188]
        mov esi, dword ptr ds : [ecx+0x18C]
        cmp eax, esi
        je public_524797
        lea ebx, ds:[ebx]
        public_524780 : nop
        mov ecx, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [ecx+0x5C]
        cmp edx, ebx
        jl public_524790
        add ebx, dword ptr ds : [ecx+0x58]
        cmp edx, ebx
        jl public_5247d8
        public_524790 : nop
        add eax, 4
        cmp eax, esi
        jne public_524780
/*FIXUP public_524797 : nop
        push offset public_5dc890 @0x524797*/
  FIXUP public_524797 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc890
        push 0x699
/*FIXUP push offset public_5dc47c @0x5247a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc47c
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x5247ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0x14
        pop esi
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax+8], 0
        pop ebx
        ret 8
        public_5247d8 : nop
        mov esi, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push edx
        push esi
        call public_54d920
        mov eax, esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x524740)
    }
}

#undef public_52476a
#undef public_524780
#undef public_524790
#undef public_524797
#undef public_5247d8
