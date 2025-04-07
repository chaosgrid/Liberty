#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c2610);

#define public_65c266e _public_65c266e
#define public_65c269b _public_65c269b
#define public_65c26e4 _public_65c26e4
#define public_65c272b _public_65c272b
#define public_65c276f _public_65c276f

PROC_DECLARE(0x65c2610, internal_65c2610, public_65c2610);
extern "C" NAKED register_t __cdecl internal_65c2610()
{
    __asm
    {
        sub esp, 0x54
        push ebx
        push esi
        xor esi, esi
        push edi
        mov ebx, ecx
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ss : [esp+0x10], esi
        call dword ptr ds : [public_65c70d8]
        mov edi, dword ptr ds : [public_65c70e0]
        mov dword ptr ds : [public_65ca1ac], eax
        lea eax, ss:[esp+0xC]
        push eax
/*FIXUP push offset public_65c75f0 @0x65c2638*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c75f0
        push 1
        push esi
/*FIXUP push offset public_65c7600 @0x65c2640*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7600
        mov dword ptr ds : [public_65ca1b0], esi
        mov dword ptr ds : [public_65ca1b4], esi
        mov dword ptr ds : [public_65ca1b8], esi
        mov dword ptr ds : [public_65ca1bc], esi
        call edi
        test eax, eax
        je public_65c266e
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x54
        ret 8
        public_65c266e : nop
        lea ecx, ss:[esp+0x10]
        push ecx
/*FIXUP push offset public_65c75f0 @0x65c2673*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c75f0
        push 1
        push esi
/*FIXUP push offset public_65c7600 @0x65c267b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7600
        call edi
        test eax, eax
        mov eax, dword ptr ss : [esp+0xC]
        je public_65c269b
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x54
        ret 8
        public_65c269b : nop
        mov edx, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_65c75a0 @0x65c26ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c75a0
        push eax
        call dword ptr ds : [ecx+0x34]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_65c75a0 @0x65c26bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c75a0
        push eax
        call dword ptr ds : [edx+0x34]
        cmp dword ptr ds : [public_65ca1c4], esi
        je public_65c26e4
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push 2
        push 4
/*FIXUP push offset public_65ca1c4 @0x65c26d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca1c4
/*FIXUP push offset public_65c7474 @0x65c26db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7474
        push eax
        call dword ptr ds : [ecx+0x48]
        public_65c26e4 : nop
        xor eax, eax
        mov ecx, 0x12
        lea edi, ss:[esp+0x18]
        rep stosd
        lea edx, ds:[ebx+0x68]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ss : [esp+0x68]
        cmp eax, esi
        mov dword ptr ss : [esp+0x34], ecx
        mov ecx, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [esp+0x18], 0x48
        mov dword ptr ss : [esp+0x3C], ecx
        je public_65c272b
        or dword ptr ss : [esp+0x1C], 0x80
        mov dword ptr ss : [esp+0x4C], eax
        public_65c272b : nop
        mov eax, dword ptr ds : [ebx+4]
        push esi
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push esi
        push esi
        push esi
        push esi
        push esi
        push ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x3C]
        push ecx
        mov dword ptr ss : [esp+0x3C], esi
        mov dword ptr ds : [ebx+0x7C], 0x15800E
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x1C]
        cmp eax, esi
        je public_65c276f
        cmp eax, 0x15800E
        je public_65c276f
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x54
        ret 8
        public_65c276f : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x54
        ret 8
        UNREACHABLE_TRAP(0x65c2610)
    }
}

#undef public_65c266e
#undef public_65c269b
#undef public_65c26e4
#undef public_65c272b
#undef public_65c276f
