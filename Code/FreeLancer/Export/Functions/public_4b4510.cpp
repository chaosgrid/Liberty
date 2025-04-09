#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b4510);
CLANG_FORWARD_PROC_SYMBOL(public_4c3f00);
CLANG_FORWARD_PROC_SYMBOL(public_4c4060);
CLANG_FORWARD_PROC_SYMBOL(public_4c4f70);
CLANG_FORWARD_PROC_SYMBOL(public_5835f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd0a9);

#define public_4b4551 _public_4b4551
#define public_4b4564 _public_4b4564
#define public_4b4573 _public_4b4573
#define public_4b4595 _public_4b4595
#define public_4b45cc _public_4b45cc
#define public_4b45d2 _public_4b45d2
#define public_4b45e2 _public_4b45e2
#define public_4b45fe _public_4b45fe
#define public_4b461b _public_4b461b
#define public_4b4630 _public_4b4630
#define public_4b464c _public_4b464c
#define public_4b4655 _public_4b4655

PROC_DECLARE(0x4b4510, internal_4b4510, public_4b4510);
extern "C" NAKED register_t __cdecl internal_4b4510()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bd0a9 @0x4b4518*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd0a9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push esi
        push edi
        call public_4c4f70
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x44
        jnp public_4b4551
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        public_4b4551 : nop
        call public_4c3f00
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_4b4573
        mov edx, 0x3F800000
        public_4b4564 : nop
        cmp dword ptr ds : [eax+0xC], edx
        jne public_4b4655
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_4b4564
        public_4b4573 : nop
        call public_4c4060
        push eax
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c6190]
        mov ecx, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [ecx]
        xor edi, edi
        cmp esi, ecx
        mov dword ptr ss : [esp+0x30], edi
        mov ebx, ecx
        je public_4b45d2
        public_4b4595 : nop
        fld dword ptr ds : [esi+0x18]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x44
        jnp public_4b45cc
        mov eax, dword ptr ds : [esi+0xC]
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x18], edi
        call public_5835f0
        add esp, 0xC
        cmp eax, 1
        jne public_4b461b
        mov ecx, dword ptr ss : [esp+0x20]
        public_4b45cc : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_4b4595
        public_4b45d2 : nop
        mov esi, dword ptr ds : [ecx]
        cmp esi, ecx
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        mov edi, ecx
        je public_4b45fe
        public_4b45e2 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6188]
        cmp esi, edi
        jne public_4b45e2
        mov ecx, dword ptr ss : [esp+0x20]
        public_4b45fe : nop
        push ecx
        call public_5b7e1d
        add esp, 4
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        public_4b461b : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        mov edi, eax
        je public_4b464c
        nop 
        public_4b4630 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6188]
        cmp esi, edi
        jne public_4b4630
        mov eax, dword ptr ss : [esp+0x20]
        public_4b464c : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4b4655 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x4b4510)
    }
}

#undef public_4b4551
#undef public_4b4564
#undef public_4b4573
#undef public_4b4595
#undef public_4b45cc
#undef public_4b45d2
#undef public_4b45e2
#undef public_4b45fe
#undef public_4b461b
#undef public_4b4630
#undef public_4b464c
#undef public_4b4655
