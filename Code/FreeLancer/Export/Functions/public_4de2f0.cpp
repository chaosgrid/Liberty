#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c45d0);
CLANG_FORWARD_PROC_SYMBOL(public_4de2f0);

#define public_4de31b _public_4de31b
#define public_4de36d _public_4de36d

PROC_DECLARE(0x4de2f0, internal_4de2f0, public_4de2f0);
extern "C" NAKED register_t __cdecl internal_4de2f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_674a8c]
        sub esp, 0x40
        push esi
        push edi
        push eax
        mov esi, ecx
        call public_4c45d0
        add esp, 4
        xor ecx, ecx
        test eax, eax
        je public_4de31b
        mov ecx, dword ptr ds : [eax+0x14]
        cmp ecx, 0x3E7
        jle public_4de31b
        mov ecx, 0x3E7
        public_4de31b : nop
        mov edi, dword ptr ds : [public_5c70ec]
        push ecx
        lea ecx, ss:[esp+0xC]
/*FIXUP push offset public_5d0ec4 @0x4de326*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
        push ecx
        call edi
        mov ecx, dword ptr ds : [esi+0x5AC]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 0x10
        lea eax, ss:[esp+0xC]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [public_674a88]
        push ecx
        call public_4c45d0
        add esp, 4
        xor ecx, ecx
        test eax, eax
        je public_4de36d
        mov ecx, dword ptr ds : [eax+0x14]
        cmp ecx, 0x3E7
        jle public_4de36d
        mov ecx, 0x3E7
        public_4de36d : nop
        push ecx
        lea edx, ss:[esp+0xC]
/*FIXUP push offset public_5d0ec4 @0x4de372*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
        push edx
        call edi
        mov ecx, dword ptr ds : [esi+0x5B4]
        mov eax, dword ptr ds : [ecx]
        add esp, 0xC
        push 0x10
        lea edx, ss:[esp+0xC]
        push edx
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        pop edi
        pop esi
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x4de2f0)
    }
}

#undef public_4de31b
#undef public_4de36d
