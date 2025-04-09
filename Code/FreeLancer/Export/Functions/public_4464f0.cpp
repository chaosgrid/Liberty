#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411c50);
CLANG_FORWARD_PROC_SYMBOL(public_41c540);
CLANG_FORWARD_PROC_SYMBOL(public_446160);
CLANG_FORWARD_PROC_SYMBOL(public_446280);
CLANG_FORWARD_PROC_SYMBOL(public_4464f0);
CLANG_FORWARD_PROC_SYMBOL(public_4467e0);
CLANG_FORWARD_PROC_SYMBOL(public_5595a0);

#define public_446526 _public_446526
#define public_4465b4 _public_4465b4
#define public_4465d7 _public_4465d7
#define public_446618 _public_446618
#define public_446685 _public_446685
#define public_4466a4 _public_4466a4
#define public_4466f3 _public_4466f3
#define public_446720 _public_446720
#define public_446744 _public_446744
#define public_44676f _public_44676f
#define public_446777 _public_446777

PROC_DECLARE(0x4464f0, internal_4464f0, public_4464f0);
extern "C" NAKED register_t __cdecl internal_4464f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c7080]
        sub esp, 0x30
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x40]
        mov ebx, ecx
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        lea edx, ds:[edi+0x10]
        push edx
        lea ecx, ds:[ebx+0x38]
        call dword ptr ds : [public_5c6f9c]
        mov eax, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [ebx+0x34], eax
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        jne public_446526
        mov esi, dword ptr ds : [public_5c7078]
        public_446526 : nop
        mov eax, dword ptr ds : [edi+0x20]
        cmp eax, 6
        je public_446720
        cmp eax, 5
        je public_446720
        test eax, eax
        je public_446720
        cmp eax, 1
        jne public_4465d7
        push esi
        mov ecx, ebx
        call public_446280
        push eax
        call dword ptr ds : [public_5c61fc]
        add esp, 4
        test eax, eax
        je public_4465b4
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        mov ecx, dword ptr ds : [esi+0x10]
        cmp byte ptr ds : [ecx], 0
        setne dl
        mov byte ptr ds : [ebx+0x13], dl
        mov eax, dword ptr ds : [eax+0xC]
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ds:[ebx+0x20]
        push edx
        lea ecx, ds:[esi+0x20]
        push ecx
        mov ecx, dword ptr ds : [public_5c6dd8]
        push 0
        lea edx, ds:[ebx+0x4C]
        push edx
        mov edx, dword ptr ds : [ecx]
        push edx
        push eax
        call public_41c540
        mov dword ptr ds : [ebx+0x30], eax
        mov eax, dword ptr ss : [esp+0x5C]
        push eax
        push esi
        call public_5595a0
        add esp, 0x24
        jmp public_446744
        public_4465b4 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
        push esi
        push 0x69
/*FIXUP push offset public_5cbc74 @0x4465bd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbc74
        mov eax, 0x100001
/*FIXUP push offset public_5cbc40 @0x4465c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbc40
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        jmp public_446744
        public_4465d7 : nop
        cmp eax, 2
        jne public_446618
        push esi
        mov ecx, ebx
        call public_446280
        push eax
        call dword ptr ds : [public_5c61f8]
        add esp, 4
        test eax, eax
        jne public_4466a4
        push esi
        push 0x69
/*FIXUP push offset public_5cbc74 @0x4465f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbc74
        mov eax, 0x100001
/*FIXUP push offset public_5cbc40 @0x446603*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbc40
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_446744
        public_446618 : nop
        cmp eax, 3
        jne public_446685
        push esi
        mov ecx, ebx
        call public_446280
        push eax
        call dword ptr ds : [public_5c61f4]
        add esp, 4
        test eax, eax
        je public_4465b4
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        mov ecx, dword ptr ds : [esi+0x10]
        cmp byte ptr ds : [ecx], 0
        setne dl
        mov byte ptr ds : [ebx+0x13], dl
        mov eax, dword ptr ds : [eax+0xC]
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ds:[ebx+0x20]
        push edx
        lea ecx, ds:[esi+0x20]
        push ecx
        mov ecx, dword ptr ds : [public_5c6dd8]
        push 0
        lea edx, ds:[ebx+0x4C]
        push edx
        mov edx, dword ptr ds : [ecx]
        push edx
        push eax
        call public_41c540
        mov dword ptr ds : [ebx+0x30], eax
        mov eax, dword ptr ss : [esp+0x5C]
        push eax
        push esi
        call public_5595a0
        add esp, 0x24
        jmp public_446744
        public_446685 : nop
        cmp eax, 4
        jne public_446744
        push esi
        mov ecx, ebx
        call public_446280
        push eax
        call dword ptr ds : [public_5c603c]
        add esp, 4
        test eax, eax
        je public_4466f3
        public_4466a4 : nop
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        mov edx, dword ptr ds : [esi+0x10]
        cmp byte ptr ds : [edx], 0
        setne cl
        mov byte ptr ds : [ebx+0x13], cl
        mov eax, dword ptr ds : [eax+0xC]
        lea edx, ss:[esp+0x40]
        push edx
        lea ecx, ds:[ebx+0x20]
        push ecx
        lea edx, ds:[esi+0x20]
        push edx
        mov edx, dword ptr ds : [public_5c6dd8]
        push 0
        lea ecx, ds:[ebx+0x4C]
        push ecx
        mov ecx, dword ptr ds : [edx]
        push ecx
        push eax
        call public_41c540
        mov edx, dword ptr ss : [esp+0x5C]
        push edx
        push esi
        mov dword ptr ds : [ebx+0x30], eax
        call public_5595a0
        add esp, 0x24
        jmp public_446744
        public_4466f3 : nop
        push 1
        push 0x10000
        lea ecx, ss:[esp+0x48]
        call public_411c50
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_5c6d18]
        push esi
        push 0x69
/*FIXUP push offset public_5cbc74 @0x44670e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbc74
/*FIXUP push offset public_5cbc40 @0x446713*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbc40
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        jmp public_446744
        public_446720 : nop
        push esi
        mov ecx, ebx
        call public_446280
        mov edx, dword ptr ds : [edi+0x20]
        push eax
        push edx
        call dword ptr ds : [public_5c61f0]
        mov ecx, eax
        call dword ptr ds : [public_5c61ec]
        push esi
        push eax
        mov ecx, ebx
        call public_446160
        public_446744 : nop
        cmp dword ptr ds : [edi+0x20], 1
        jne public_446777
        mov eax, dword ptr ds : [edi+0x5C]
        test eax, eax
        je public_446777
/*FIXUP push offset public_5cbd24 @0x446751*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbd24
        call dword ptr ds : [public_5c61a8]
        add esp, 4
        test al, al
        je public_446777
        mov eax, dword ptr ds : [edi+0x58]
        test eax, eax
        jne public_44676f
        mov eax, dword ptr ds : [public_5c7078]
        public_44676f : nop
        push eax
        mov ecx, ebx
        call public_4467e0
        public_446777 : nop
        mov edx, dword ptr ds : [edi+0x28]
        lea eax, ds:[edi+0x24]
        lea esi, ds:[eax+0xC]
        mov ecx, 9
        lea edi, ss:[esp+0xC]
        rep movsd
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x30], ecx
        mov ecx, dword ptr ds : [public_5c6d90]
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, dword ptr ds : [ebx+0x30]
        push ecx
        push eax
        call dword ptr ds : [edx+0x9C]
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ebx+0x30]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        pop edi
        pop esi
        pop ebx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x4464f0)
    }
}

#undef public_446526
#undef public_4465b4
#undef public_4465d7
#undef public_446618
#undef public_446685
#undef public_4466a4
#undef public_4466f3
#undef public_446720
#undef public_446744
#undef public_44676f
#undef public_446777
