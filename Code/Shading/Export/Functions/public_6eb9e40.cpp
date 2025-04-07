#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3b90);
CLANG_FORWARD_PROC_SYMBOL(public_6eb59a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb59f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7120);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7180);
CLANG_FORWARD_PROC_SYMBOL(public_6eb71b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7910);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7950);
CLANG_FORWARD_PROC_SYMBOL(public_6eb9b10);

#define public_6eb9f41 _public_6eb9f41
#define public_6eb9faf _public_6eb9faf
#define public_6eba016 _public_6eba016
#define public_6eba041 _public_6eba041

PROC_DECLARE(0x6eb9e40, internal_6eb9e40, public_6eb9e40);
extern "C" NAKED register_t __cdecl internal_6eb9e40()
{
    __asm
    {
        sub esp, 0x7C
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x8C]
        cmp dword ptr ds : [esi+0x78], 1
        mov eax, dword ptr ds : [esi+4]
        push edi
        jne public_6eba041
        lea edx, ss:[esp+0x18]
        push edx
        push 0xF
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], 0xF
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0xAC]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x18]
        push 0
        push eax
        call public_6eb7120
        mov ecx, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed1ecc @0x6eb9eac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1ecc
        push 0
        push ecx
        call public_6eb71b0
        mov cl, byte ptr ds : [esi+0x7D]
        add esp, 0xC
        test cl, cl
        mov eax, 1
        je public_6eb9f41
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x18]
        push eax
        push edx
        add ecx, 0x2C
        call public_6eb7120
        mov eax, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed1f04 @0x6eb9edb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1f04
        push 1
        push eax
        call public_6eb71b0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        push 0
        push 0xB
        push 1
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 2
        push 0x18
        push 1
        push eax
        call dword ptr ds : [edx+0xF8]
        xor eax, eax
        mov ecx, 0x10
        lea edi, ss:[esp+0x4C]
        rep stosd
        mov eax, dword ptr ds : [esi+0x68]
        mov ecx, eax
        mov dword ptr ss : [esp+0x60], ecx
        lea ecx, ss:[esp+0x4C]
        push ecx
        mov dword ptr ss : [esp+0x50], eax
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 1
        push eax
        call dword ptr ds : [edx+0x100]
        mov eax, 2
        public_6eb9f41 : nop
        mov edx, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed1f74 @0x6eb9f44*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1f74
        push eax
        push edx
        call public_6eb71b0
        mov eax, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed1e7c @0x6eb9f53*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1e7c
        push eax
        call public_6eb7180
        mov eax, dword ptr ss : [esp+0xC0]
        mov edi, dword ptr ss : [esp+0xBC]
        mov ebx, dword ptr ss : [esp+0xB4]
        mov ebp, dword ptr ss : [esp+0xA8]
        add esp, 0x14
        test ah, 1
        je public_6eb9faf
        mov edx, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [edx+4]
        add edx, dword ptr ss : [esp+0xA4]
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push edi
        push edx
        mov edx, dword ptr ss : [esp+0xA4]
        push ebx
        push edx
        mov edx, dword ptr ss : [esp+0xA8]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jge public_6eba016
        public_6eb9faf : nop
        mov eax, dword ptr ss : [esp+0xAC]
        mov ecx, dword ptr ss : [esp+0xA4]
        mov edx, dword ptr ss : [esp+0x9C]
        push eax
        mov eax, dword ptr ss : [esp+0x9C]
        push edi
        push ecx
        push ebx
        push edx
        push eax
        push ebp
        mov ecx, esi
        call public_6eb59a0
        test eax, eax
        jge public_6eba016
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6eba016
        test ebx, ebx
        jbe public_6eba016
        test edi, edi
        jbe public_6eba016
        mov ecx, dword ptr ss : [esp+0xAC]
        mov edx, dword ptr ss : [esp+0xA4]
        mov eax, dword ptr ss : [esp+0x9C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x9C]
        push edi
        push edx
        push ebx
        push eax
        push ecx
        push ebp
        mov ecx, esi
        call public_6eb59f0
        public_6eba016 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [eax+0x24]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x7C
        ret 0x20
        public_6eba041 : nop
        lea ecx, ss:[esp+0x24]
        push ecx
        push 0xF
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], 0xF
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0xF4]
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax]
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0xF0]
        push 0
        mov ecx, esi
        call public_6eb9b10
        mov edi, dword ptr ss : [esp+0xAC]
        mov ebx, dword ptr ss : [esp+0xA8]
        mov ebp, dword ptr ss : [esp+0xA4]
        mov edx, dword ptr ss : [esp+0xA0]
        mov eax, dword ptr ss : [esp+0x9C]
        mov ecx, dword ptr ss : [esp+0x98]
        push edi
        push ebx
        push ebp
        push edx
        mov edx, dword ptr ss : [esp+0xA4]
        push eax
        push ecx
        push edx
        push esi
        call public_6eb3b90
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0xF
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x18]
        push ecx
        push 0x18
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], 0x18
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0xF4]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push 1
        push ecx
        push eax
        call dword ptr ds : [edx+0xF0]
        mov edx, dword ptr ds : [esi+4]
        push 5
        push 0x19
        push edx
        lea ecx, ss:[esp+0x4C]
        call public_6eb7910
        mov eax, dword ptr ds : [esi+4]
        push 4
        push 0x17
        push eax
        lea ecx, ss:[esp+0x40]
        call public_6eb7910
        mov ecx, dword ptr ds : [esi+4]
        push 0
        push 0xE
        push ecx
        lea ecx, ss:[esp+0x34]
        call public_6eb7910
        push 1
        mov ecx, esi
        call public_6eb9b10
        mov edx, dword ptr ss : [esp+0xA0]
        push edi
        push ebx
        push ebp
        mov eax, dword ptr ss : [esp+0xA8]
        mov ecx, dword ptr ss : [esp+0xA4]
        push edx
        mov edx, dword ptr ss : [esp+0xA4]
        push eax
        push ecx
        push edx
        push esi
        call public_6eb3b90
        lea ecx, ss:[esp+0x28]
        call public_6eb7950
        lea ecx, ss:[esp+0x34]
        call public_6eb7950
        lea ecx, ss:[esp+0x40]
        call public_6eb7950
        lea ecx, ss:[esp+0x10]
        call public_6eb7950
        lea ecx, ss:[esp+0x1C]
        call public_6eb7950
        mov eax, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [eax+0x24]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x7C
        ret 0x20
        UNREACHABLE_TRAP(0x6eb9e40)
    }
}

#undef public_6eb9f41
#undef public_6eb9faf
#undef public_6eba016
#undef public_6eba041
