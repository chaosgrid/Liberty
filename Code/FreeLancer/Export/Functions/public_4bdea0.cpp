#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_4b62b0);
CLANG_FORWARD_PROC_SYMBOL(public_4bd880);
CLANG_FORWARD_PROC_SYMBOL(public_4bdea0);
CLANG_FORWARD_PROC_SYMBOL(public_5b36b0);

#define public_4bdec8 _public_4bdec8
#define public_4bdf38 _public_4bdf38
#define public_4bdf45 _public_4bdf45
#define public_4bdf5b _public_4bdf5b
#define public_4bdf94 _public_4bdf94
#define public_4bdf9c _public_4bdf9c
#define public_4bdfc2 _public_4bdfc2
#define public_4bdfca _public_4bdfca
#define public_4bdfce _public_4bdfce

PROC_DECLARE(0x4bdea0, internal_4bdea0, public_4bdea0);
extern "C" NAKED register_t __cdecl internal_4bdea0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov byte ptr ds : [esi+0x164], 1
        call public_41dd90
        test al, al
        jne public_4bdec8
        mov al, byte ptr ds : [esi+0x6C]
        and al, 0xFD
        pop edi
        mov byte ptr ds : [esi+0x159], 0
        mov byte ptr ds : [esi+0x6C], al
        pop esi
        ret 4
        public_4bdec8 : nop
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        call public_4b62b0
/*FIXUP push offset public_5d5ffc @0x4bded2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5ffc
        call public_5b36b0
        fld dword ptr ds : [eax+0x14]
        fcomp qword ptr ds : [public_5c8b68]
        add esp, 8
        fnstsw ax
        test ah, 5
        jnp public_4bdfce
        mov cl, byte ptr ds : [esi+0x159]
        xor edx, edx
        cmp cl, dl
        je public_4bdf5b
        mov eax, dword ptr ds : [esi+0xF4]
        cmp eax, dword ptr ds : [edi]
        jne public_4bdf45
        mov al, byte ptr ds : [esi+0x154]
        cmp al, byte ptr ds : [edi+0x60]
        jne public_4bdf45
        cmp al, dl
        je public_4bdf38
        fld dword ptr ds : [esi+0x13C]
        fcomp dword ptr ds : [edi+0x48]
        fnstsw ax
        test ah, 0x44
        jp public_4bdf45
        fld dword ptr ds : [esi+0x140]
        fcomp dword ptr ds : [edi+0x4C]
        fnstsw ax
        test ah, 0x44
        jp public_4bdf45
        public_4bdf38 : nop
        mov al, byte ptr ds : [esi+0x6C]
        and al, 0xFD
        pop edi
        mov byte ptr ds : [esi+0x6C], al
        pop esi
        ret 4
        public_4bdf45 : nop
        cmp cl, dl
        je public_4bdf5b
        mov byte ptr ds : [esi+0x159], dl
        mov dword ptr ds : [esi+0x15C], edx
        mov dword ptr ds : [esi+0x160], edx
        public_4bdf5b : nop
        mov ecx, dword ptr ds : [esi+0xF4]
        cmp ecx, dword ptr ds : [edi]
        jne public_4bdf9c
        mov al, byte ptr ds : [esi+0x154]
        cmp al, byte ptr ds : [edi+0x60]
        jne public_4bdf9c
        cmp al, dl
        je public_4bdf94
        fld dword ptr ds : [esi+0x13C]
        fcomp dword ptr ds : [edi+0x48]
        fnstsw ax
        test ah, 0x44
        jp public_4bdf9c
        fld dword ptr ds : [esi+0x140]
        fcomp dword ptr ds : [edi+0x4C]
        fnstsw ax
        test ah, 0x44
        jp public_4bdf9c
        public_4bdf94 : nop
        cmp byte ptr ds : [esi+0x158], dl
        jne public_4bdfca
        public_4bdf9c : nop
        fld dword ptr ds : [esi+0x15C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        je public_4bdfc2
        fld dword ptr ds : [esi+0x160]
        fcomp dword ptr ds : [esi+0x168]
        fnstsw ax
        test ah, 1
        jne public_4bdfce
        public_4bdfc2 : nop
        mov ecx, esi
        push edi
        call public_4bd880
        public_4bdfca : nop
        or byte ptr ds : [esi+0x6C], 3
        public_4bdfce : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4bdea0)
    }
}

#undef public_4bdec8
#undef public_4bdf38
#undef public_4bdf45
#undef public_4bdf5b
#undef public_4bdf94
#undef public_4bdf9c
#undef public_4bdfc2
#undef public_4bdfca
#undef public_4bdfce
