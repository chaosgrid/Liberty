#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea5f90);
CLANG_FORWARD_PROC_SYMBOL(public_6ea6830);
CLANG_FORWARD_PROC_SYMBOL(public_6ea6900);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6ea615f _public_6ea615f
#define public_6ea6198 _public_6ea6198
#define public_6ea61b7 _public_6ea61b7
#define public_6ea6209 _public_6ea6209
#define public_6ea627b _public_6ea627b

PROC_DECLARE(0x6ea6120, internal_6ea6120, public_6ea6120);
extern "C" NAKED register_t __cdecl internal_6ea6120()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 5
        push esi
        push edi
        mov esi, ecx
        jg public_6ea61b7
        je public_6ea6198
        test eax, eax
        je public_6ea615f
        cmp eax, 4
        jne public_6ea627b
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ds : [esi+0xC]
        jne public_6ea627b
        mov edx, dword ptr ds : [eax+4]
        push edx
        mov ecx, esi
        call public_6ea6830
        pop edi
        pop esi
        ret 8
        public_6ea615f : nop
        fld dword ptr ds : [esi+0x14]
        fcomp dword ptr ds : [public_6fb4260]
        fnstsw ax
        test ah, 0x44
        jnp public_6ea627b
        cmp dword ptr ds : [esi+0x10], 0x2A
        je public_6ea627b
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, dword ptr ds : [ecx]
        jne public_6ea627b
        mov ecx, esi
        call public_6ea5f90
        pop edi
        pop esi
        ret 8
        public_6ea6198 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        cmp edx, dword ptr ds : [esi+0xC]
        jne public_6ea627b
        mov eax, dword ptr ds : [eax+4]
        push eax
        mov ecx, esi
        call public_6ea6900
        pop edi
        pop esi
        ret 8
        public_6ea61b7 : nop
        cmp eax, 0x35
        je public_6ea6209
        cmp eax, 0x100B
        jne public_6ea627b
        fld dword ptr ds : [esi+0x14]
        fcomp dword ptr ds : [public_6fb4260]
        fnstsw ax
        test ah, 0x44
        jnp public_6ea627b
        cmp dword ptr ds : [esi+0x10], 0x2A
        je public_6ea627b
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, dword ptr ds : [esi+0xC]
        jne public_6ea627b
        test dword ptr ds : [eax], 0x3FFFFFFF
        jne public_6ea627b
        mov ecx, esi
        call public_6ea5f90
        pop edi
        pop esi
        ret 8
        public_6ea6209 : nop
        lea edi, ds:[esi+0xC]
        push edi
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ea627b
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, 0xF
        jl public_6ea627b
        cmp eax, 0x17
        jge public_6ea627b
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [edi]
        cmp edx, dword ptr ds : [eax]
        jne public_6ea627b
        mov al, byte ptr ds : [esi+0x18]
        test al, al
        jne public_6ea627b
        lea ecx, ss:[esp+0xC]
        mov byte ptr ds : [esi+0x18], 1
        push ecx
        or esi, 0xFFFFFFFF
        push edi
        mov dword ptr ss : [esp+0x14], esi
        call dword ptr ds : [public_6fb3618]
        lea edx, ss:[esp+0x18]
/*FIXUP push offset public_6fb4310 @0x6ea6252*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4310
        push edx
        mov dword ptr ss : [esp+0x20], esi
        call dword ptr ds : [public_6fb361c]
        mov eax, dword ptr ds : [public_6fb4254]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        call dword ptr ds : [public_6fb3620]
        add esp, 0x1C
        public_6ea627b : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ea6120)
    }
}

#undef public_6ea615f
#undef public_6ea6198
#undef public_6ea61b7
#undef public_6ea6209
#undef public_6ea627b
