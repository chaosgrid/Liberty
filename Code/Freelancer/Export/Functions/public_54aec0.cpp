#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_41dde0);
CLANG_FORWARD_PROC_SYMBOL(public_4284f0);
CLANG_FORWARD_PROC_SYMBOL(public_42ad30);
CLANG_FORWARD_PROC_SYMBOL(public_4348b0);
CLANG_FORWARD_PROC_SYMBOL(public_435630);
CLANG_FORWARD_PROC_SYMBOL(public_45a140);
CLANG_FORWARD_PROC_SYMBOL(public_4c77a0);
CLANG_FORWARD_PROC_SYMBOL(public_4f73c0);
CLANG_FORWARD_PROC_SYMBOL(public_4fe180);
CLANG_FORWARD_PROC_SYMBOL(public_502aa0);
CLANG_FORWARD_PROC_SYMBOL(public_511010);
CLANG_FORWARD_PROC_SYMBOL(public_518410);
CLANG_FORWARD_PROC_SYMBOL(public_51fbc0);
CLANG_FORWARD_PROC_SYMBOL(public_52a690);
CLANG_FORWARD_PROC_SYMBOL(public_537ab0);
CLANG_FORWARD_PROC_SYMBOL(public_5382f0);
CLANG_FORWARD_PROC_SYMBOL(public_538520);
CLANG_FORWARD_PROC_SYMBOL(public_538ab0);
CLANG_FORWARD_PROC_SYMBOL(public_549bc0);
CLANG_FORWARD_PROC_SYMBOL(public_554ab0);
CLANG_FORWARD_PROC_SYMBOL(public_576190);
CLANG_FORWARD_PROC_SYMBOL(public_577590);

#define public_54af3c _public_54af3c
#define public_54af8c _public_54af8c

PROC_DECLARE(0x54aec0, internal_54aec0, public_54aec0);
extern "C" NAKED register_t __cdecl internal_54aec0()
{
    __asm
    {
        push ebx
        push esi
        push edi
/*FIXUP push offset public_5e0808 @0x54aec3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0808
        mov esi, ecx
        call public_577590
        add esp, 4
        lea ecx, ds:[esi+4]
        call public_576190
        mov ecx, offset public_667e50
        call public_4348b0
        call public_435630
        xor ebx, ebx
        push ebx
        push ebx
        mov ecx, esi
        call public_549bc0
        lea ecx, ds:[esi+0xC]
        call public_518410
        lea ecx, ds:[esi+0x1B0]
        call public_401e90
        lea ecx, ds:[esi+0x3C8]
        call public_401e90
        lea ecx, ds:[esi+0x500]
        call public_401e90
        call public_4c77a0
        cmp byte ptr ds : [esi+0xBAA], bl
        mov byte ptr ds : [esi+0xBA9], bl
        mov byte ptr ds : [esi+0xBA8], bl
        je public_54af3c
        mov byte ptr ds : [esi+0xBAA], bl
        public_54af3c : nop
        mov byte ptr ds : [public_67dcc8], bl
        mov byte ptr ds : [esi+0xBAB], bl
        mov eax, dword ptr ds : [public_679744]
        cmp eax, ebx
        je public_54af8c
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_54af8c
        add eax, 0xC
        cmp eax, ebx
        je public_54af8c
        mov edi, dword ptr ds : [eax+4]
        cmp edi, ebx
        je public_54af8c
        mov eax, dword ptr ds : [edi+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_54af8c
        push 7
        mov ecx, edi
        call dword ptr ds : [public_5c6648]
        test al, al
        je public_54af8c
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_5c6a54]
        public_54af8c : nop
        push ebx
        mov byte ptr ds : [esi+8], bl
        call public_554ab0
        push 1
/*FIXUP push offset public_5c95fc @0x54af97*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c95fc
        call public_41dde0
        call dword ptr ds : [public_5c6b40]
        call public_51fbc0
        call public_52a690
        call public_502aa0
        call public_511010
        call public_4fe180
        call public_4f73c0
        call public_5382f0
        call public_538520
        call public_537ab0
        call public_538ab0
        call public_4284f0
        push 1
        call public_42ad30
        add esp, 0x10
        call dword ptr ds : [public_5c6b44]
        pop edi
        pop esi
        pop ebx
        jmp public_45a140
        UNREACHABLE_TRAP(0x54aec0)
    }
}

#undef public_54af3c
#undef public_54af8c
