#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_459930);
CLANG_FORWARD_PROC_SYMBOL(public_4b5fd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b0880);
CLANG_FORWARD_PROC_SYMBOL(public_5b36b0);

#define public_4b6001 _public_4b6001
#define public_4b6059 _public_4b6059
#define public_4b609a _public_4b609a
#define public_4b60ba _public_4b60ba
#define public_4b6107 _public_4b6107
#define public_4b6112 _public_4b6112
#define public_4b6126 _public_4b6126

PROC_DECLARE(0x4b5fd0, internal_4b5fd0, public_4b5fd0);
extern "C" NAKED register_t __cdecl internal_4b5fd0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        mov esi, ecx
        je public_4b6126
        call public_41dd90
        test al, al
        jne public_4b6001
        mov al, byte ptr ds : [esi+0x6C]
        and al, 0xFD
        pop edi
        mov byte ptr ds : [esi+0x6C], al
        pop esi
        pop ebx
        add esp, 0xC
        ret 8
/*FIXUP public_4b6001 : nop
        push offset public_5d55e0 @0x4b6001*/
  FIXUP public_4b6001 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d55e0
        call public_5b36b0
        fld dword ptr ds : [eax+0x14]
        fcomp qword ptr ds : [public_5c8b68]
        add esp, 4
        fnstsw ax
        test ah, 5
        jnp public_4b6126
        mov bl, byte ptr ds : [esi+0x6C]
        mov eax, dword ptr ds : [esi+0xEC]
        or bl, 1
        mov byte ptr ds : [esi+0x6C], bl
        cmp eax, dword ptr ds : [edi]
        mov cl, bl
        jne public_4b6059
        fld dword ptr ds : [esi+0x164]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4b6059
        or cl, 2
        pop edi
        mov byte ptr ds : [esi+0x6C], cl
        pop esi
        pop ebx
        add esp, 0xC
        ret 8
        public_4b6059 : nop
        call public_5b0880
        test al, al
        lea ebx, ds:[esi+0x16C]
        mov dword ptr ss : [esp+0x14], 0xBF800000
        mov dword ptr ss : [esp+0x10], 0x3EC51EB8
        je public_4b609a
        fld dword ptr ds : [esi+0x188]
        mov eax, dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, ebx
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        jmp public_4b60ba
        public_4b609a : nop
        fld dword ptr ds : [esi+0x184]
        mov edx, dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, ebx
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        public_4b60ba : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0x164], edx
        or byte ptr ds : [esi+0x6C], 2
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi+0xEC], eax
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        mov dword ptr ds : [esi+0xF0], eax
        je public_4b6107
        mov ecx, dword ptr ds : [public_6119f8]
        mov edx, dword ptr ds : [public_67eca8]
        push ecx
/*FIXUP push offset public_66fc60 @0x4b60ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push eax
        push edx
        call public_4347e0
        mov eax, dword ptr ds : [esi]
        add esp, 0x10
/*FIXUP push offset public_66fc60 @0x4b60fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        mov ecx, esi
        call dword ptr ds : [eax+0x70]
        jmp public_4b6112
        public_4b6107 : nop
        mov eax, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x70]
        public_4b6112 : nop
        mov edx, dword ptr ds : [esi]
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_459930
        add esp, 4
        public_4b6126 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x4b5fd0)
    }
}

#undef public_4b6001
#undef public_4b6059
#undef public_4b609a
#undef public_4b60ba
#undef public_4b6107
#undef public_4b6112
#undef public_4b6126
