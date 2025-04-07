#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_459930);
CLANG_FORWARD_PROC_SYMBOL(public_4b6130);
CLANG_FORWARD_PROC_SYMBOL(public_5b36b0);

#define public_4b6161 _public_4b6161
#define public_4b61b9 _public_4b61b9
#define public_4b6237 _public_4b6237
#define public_4b6242 _public_4b6242
#define public_4b6256 _public_4b6256

PROC_DECLARE(0x4b6130, internal_4b6130, public_4b6130);
extern "C" NAKED register_t __cdecl internal_4b6130()
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
        je public_4b6256
        call public_41dd90
        test al, al
        jne public_4b6161
        mov al, byte ptr ds : [esi+0x6C]
        and al, 0xFD
        pop edi
        mov byte ptr ds : [esi+0x6C], al
        pop esi
        pop ebx
        add esp, 0xC
        ret 0xC
/*FIXUP public_4b6161 : nop
        push offset public_5d55e0 @0x4b6161*/
  FIXUP public_4b6161 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d55e0
        call public_5b36b0
        fld dword ptr ds : [eax+0x14]
        fcomp qword ptr ds : [public_5c8b68]
        add esp, 4
        fnstsw ax
        test ah, 5
        jnp public_4b6256
        mov bl, byte ptr ds : [esi+0x6C]
        mov eax, dword ptr ds : [esi+0xEC]
        or bl, 1
        mov byte ptr ds : [esi+0x6C], bl
        cmp eax, dword ptr ds : [edi]
        mov cl, bl
        jne public_4b61b9
        fld dword ptr ds : [esi+0x164]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4b61b9
        or cl, 2
        pop edi
        mov byte ptr ds : [esi+0x6C], cl
        pop esi
        pop ebx
        add esp, 0xC
        ret 0xC
        public_4b61b9 : nop
        mov edx, dword ptr ss : [esp+0x24]
        lea ebx, ds:[esi+0x16C]
        mov eax, ebx
        mov dword ptr ds : [eax], edx
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ss : [esp+0x10], 0x3EC51EB8
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x14], 0xBF800000
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [esp+0x20]
        or cl, 2
        mov dword ptr ds : [esi+0x164], eax
        mov byte ptr ds : [esi+0x6C], cl
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [esi+0xEC], ecx
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        mov dword ptr ds : [esi+0xF0], eax
        je public_4b6237
        mov edx, dword ptr ds : [public_6119f8]
        push edx
/*FIXUP push offset public_66fc60 @0x4b6215*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push eax
        mov eax, dword ptr ds : [public_67eca8]
        push eax
        call public_4347e0
        mov edx, dword ptr ds : [esi]
        add esp, 0x10
/*FIXUP push offset public_66fc60 @0x4b622b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        mov ecx, esi
        call dword ptr ds : [edx+0x70]
        jmp public_4b6242
        public_4b6237 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x70]
        public_4b6242 : nop
        mov edx, dword ptr ds : [esi]
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_459930
        add esp, 4
        public_4b6256 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x4b6130)
    }
}

#undef public_4b6161
#undef public_4b61b9
#undef public_4b6237
#undef public_4b6242
#undef public_4b6256
