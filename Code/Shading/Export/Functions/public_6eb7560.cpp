#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3b90);
CLANG_FORWARD_PROC_SYMBOL(public_6eb59a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb59f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7120);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7180);
CLANG_FORWARD_PROC_SYMBOL(public_6eb71b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb71f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7910);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7950);

#define public_6eb760b _public_6eb760b
#define public_6eb76b0 _public_6eb76b0
#define public_6eb76d0 _public_6eb76d0
#define public_6eb771e _public_6eb771e
#define public_6eb7785 _public_6eb7785
#define public_6eb77b0 _public_6eb77b0

PROC_DECLARE(0x6eb7560, internal_6eb7560, public_6eb7560);
extern "C" NAKED register_t __cdecl internal_6eb7560()
{
    __asm
    {
        sub esp, 0x70
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x80]
        mov eax, dword ptr ds : [esi+0x74]
        mov ebx, 1
        cmp eax, ebx
        mov eax, dword ptr ds : [esi+4]
        push edi
        jne public_6eb77b0
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
        mov eax, dword ptr ds : [esi+0x74]
        lea edx, ds:[esi+0x20]
        cmp eax, ebx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        jne public_6eb760b
        call dword ptr ds : [ecx+0xAC]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x18]
        push 0
        push eax
        call public_6eb7120
        mov ecx, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed18dc @0x6eb75d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed18dc
        push 0
        push ecx
        call public_6eb71b0
        mov edx, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed194c @0x6eb75e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed194c
        push ebx
        push edx
        call public_6eb71b0
        mov eax, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed188c @0x6eb75f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed188c
        push eax
        call public_6eb7180
        add esp, 0x20
        jmp public_6eb76d0
        public_6eb760b : nop
        call dword ptr ds : [ecx+0xAC]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x18]
        push 0
        push eax
        call public_6eb7120
        mov ecx, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed18dc @0x6eb7622*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed18dc
        push 0
        push ecx
        call public_6eb71b0
        mov cl, byte ptr ds : [esi+0x79]
        add esp, 0xC
        test cl, cl
        mov eax, ebx
        je public_6eb76b0
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x18]
        push ebx
        push edx
        add ecx, 0x2C
        call public_6eb7120
        mov eax, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed1914 @0x6eb764e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1914
        push ebx
        push eax
        call public_6eb71b0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        push 0
        push 0xB
        push ebx
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 2
        push 0x18
        push ebx
        push eax
        call dword ptr ds : [edx+0xF8]
        xor eax, eax
        mov ecx, 0x10
        lea edi, ss:[esp+0x40]
        rep stosd
        mov eax, dword ptr ds : [esi+0x68]
        mov ecx, eax
        mov dword ptr ss : [esp+0x54], ecx
        lea ecx, ss:[esp+0x40]
        push ecx
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [edx+0x100]
        mov eax, 2
        public_6eb76b0 : nop
        mov edx, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed194c @0x6eb76b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed194c
        push eax
        push edx
        call public_6eb71b0
        mov eax, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed188c @0x6eb76c2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed188c
        push eax
        call public_6eb7180
        add esp, 0x14
        public_6eb76d0 : nop
        mov eax, dword ptr ss : [esp+0xA0]
        test ah, 1
        mov edi, dword ptr ss : [esp+0x9C]
        mov ebx, dword ptr ss : [esp+0x94]
        mov ebp, dword ptr ss : [esp+0x88]
        je public_6eb771e
        mov edx, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [edx+4]
        add edx, dword ptr ss : [esp+0x98]
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push edi
        push edx
        mov edx, dword ptr ss : [esp+0x98]
        push ebx
        push edx
        mov edx, dword ptr ss : [esp+0x9C]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jge public_6eb7785
        public_6eb771e : nop
        mov eax, dword ptr ss : [esp+0xA0]
        mov ecx, dword ptr ss : [esp+0x98]
        mov edx, dword ptr ss : [esp+0x90]
        push eax
        mov eax, dword ptr ss : [esp+0x90]
        push edi
        push ecx
        push ebx
        push edx
        push eax
        push ebp
        mov ecx, esi
        call public_6eb59a0
        test eax, eax
        jge public_6eb7785
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6eb7785
        test ebx, ebx
        jbe public_6eb7785
        test edi, edi
        jbe public_6eb7785
        mov ecx, dword ptr ss : [esp+0xA0]
        mov edx, dword ptr ss : [esp+0x98]
        mov eax, dword ptr ss : [esp+0x90]
        push ecx
        mov ecx, dword ptr ss : [esp+0x90]
        push edi
        push edx
        push ebx
        push eax
        push ecx
        push ebp
        mov ecx, esi
        call public_6eb59f0
        public_6eb7785 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [edx+0xF0]
        mov edx, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [edx+0x24]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x70
        ret 0x20
        public_6eb77b0 : nop
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
        push ebx
        push ecx
        push eax
        call dword ptr ds : [edx+0xF0]
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
        push 0xFE
        push ecx
        push eax
        call dword ptr ds : [edx+0xF0]
        mov edx, dword ptr ds : [esi+4]
        push 2
        push 0x19
        push edx
        lea ecx, ss:[esp+0x40]
        call public_6eb7910
        push 0
        mov ecx, esi
        call public_6eb71f0
        mov edi, dword ptr ss : [esp+0xA0]
        mov ebx, dword ptr ss : [esp+0x9C]
        mov ebp, dword ptr ss : [esp+0x98]
        mov eax, dword ptr ss : [esp+0x94]
        mov ecx, dword ptr ss : [esp+0x90]
        mov edx, dword ptr ss : [esp+0x8C]
        push edi
        push ebx
        push ebp
        push eax
        mov eax, dword ptr ss : [esp+0x98]
        push ecx
        push edx
        push eax
        push esi
        call public_6eb3b90
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x18
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 5
        push 0x19
        push eax
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ds : [esi+4]
        push 4
        push 0x17
        push eax
        lea ecx, ss:[esp+0x34]
        call public_6eb7910
        push 1
        mov ecx, esi
        call public_6eb71f0
        mov ecx, dword ptr ss : [esp+0x94]
        push edi
        push ebx
        push ebp
        mov edx, dword ptr ss : [esp+0x9C]
        mov eax, dword ptr ss : [esp+0x98]
        push ecx
        mov ecx, dword ptr ss : [esp+0x98]
        push edx
        push eax
        push ecx
        push esi
        call public_6eb3b90
        lea ecx, ss:[esp+0x28]
        call public_6eb7950
        lea ecx, ss:[esp+0x34]
        call public_6eb7950
        lea ecx, ss:[esp+0x10]
        call public_6eb7950
        lea ecx, ss:[esp+0x1C]
        call public_6eb7950
        mov edx, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [edx+0x24]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x70
        ret 0x20
        UNREACHABLE_TRAP(0x6eb7560)
    }
}

#undef public_6eb760b
#undef public_6eb76b0
#undef public_6eb76d0
#undef public_6eb771e
#undef public_6eb7785
#undef public_6eb77b0
