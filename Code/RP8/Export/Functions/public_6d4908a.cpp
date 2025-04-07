#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41e47);
CLANG_FORWARD_PROC_SYMBOL(public_6d41e65);
CLANG_FORWARD_PROC_SYMBOL(public_6d440f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d4425e);
CLANG_FORWARD_PROC_SYMBOL(public_6d48538);
CLANG_FORWARD_PROC_SYMBOL(public_6d48e08);
CLANG_FORWARD_PROC_SYMBOL(public_6d4908a);

#define public_6d490a1 _public_6d490a1
#define public_6d490ad _public_6d490ad
#define public_6d490b6 _public_6d490b6
#define public_6d490be _public_6d490be
#define public_6d490de _public_6d490de
#define public_6d490f4 _public_6d490f4
#define public_6d490fb _public_6d490fb
#define public_6d49124 _public_6d49124
#define public_6d4914c _public_6d4914c
#define public_6d491af _public_6d491af
#define public_6d491b1 _public_6d491b1

PROC_DECLARE(0x6d4908a, internal_6d4908a, public_6d4908a);
extern "C" NAKED register_t __cdecl internal_6d4908a()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [esi+0x58]
        test al, 1
        jne public_6d490a1
/*FIXUP push offset public_6d617c4 @0x6d4909a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d617c4
        jmp public_6d490b6
        public_6d490a1 : nop
        test al, 4
        je public_6d490ad
/*FIXUP push offset public_6d617ac @0x6d490a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d617ac
        push esi
        jmp public_6d490de
        public_6d490ad : nop
        test al, 2
        je public_6d490be
/*FIXUP push offset public_6d61794 @0x6d490b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d61794
        public_6d490b6 : nop
        push esi
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d490be : nop
        mov eax, dword ptr ss : [ebp+0x10]
        push 3
        xor edx, edx
        pop ecx
        div ecx
        or dword ptr ds : [esi+0x58], 2
        test edx, edx
        je public_6d490fb
        cmp byte ptr ds : [esi+0x116], cl
/*FIXUP push offset public_6d6177c @0x6d490d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6177c
        push esi
        je public_6d490f4
        public_6d490de : nop
        call public_6d41e65
        push dword ptr ss : [ebp+0x10]
        push esi
        call public_6d48e08
        add esp, 0x10
        jmp public_6d491b1
        public_6d490f4 : nop
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d490fb : nop
        mov eax, dword ptr ss : [ebp+0x10]
        push ebx
        push edi
        push 3
        pop ecx
        cdq 
        idiv ecx
        push ecx
        mov ebx, eax
        push ebx
        push esi
        call public_6d4425e
        or byte ptr ds : [esi+0x5D], 0x10
        add esp, 0xC
        test ebx, ebx
        mov dword ptr ss : [ebp-8], eax
        jle public_6d4914c
        lea edi, ds:[eax+2]
        mov dword ptr ss : [ebp-4], ebx
        public_6d49124 : nop
        push 3
        lea eax, ss:[ebp+8]
        push eax
        push esi
        call public_6d48538
        mov al, byte ptr ss : [ebp+8]
        mov byte ptr ds : [edi-2], al
        mov al, byte ptr ss : [ebp+9]
        mov byte ptr ds : [edi-1], al
        mov al, byte ptr ss : [ebp+0xA]
        mov byte ptr ds : [edi], al
        add esp, 0xC
        add edi, 3
        dec dword ptr ss : [ebp-4]
        jne public_6d49124
        public_6d4914c : nop
        push 0
        push esi
        call public_6d48e08
        mov eax, dword ptr ss : [ebp-8]
        mov edi, dword ptr ss : [ebp+0xC]
        push ebx
        push eax
        push edi
        push esi
        mov dword ptr ds : [esi+0x104], eax
        mov word ptr ds : [esi+0x108], bx
        call public_6d440f0
        add esp, 0x18
        cmp byte ptr ds : [esi+0x116], 3
        jne public_6d491af
        test edi, edi
        je public_6d491af
        test byte ptr ds : [edi+8], 0x10
        je public_6d491af
        lea edi, ds:[esi+0x10A]
        mov ax, word ptr ds : [edi]
        cmp ax, word ptr ds : [esi+0x108]
        jbe public_6d491af
/*FIXUP push offset public_6d61754 @0x6d49198*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d61754
        push esi
        call public_6d41e65
        mov ax, word ptr ds : [esi+0x108]
        pop ecx
        pop ecx
        mov word ptr ds : [edi], ax
        public_6d491af : nop
        pop edi
        pop ebx
        public_6d491b1 : nop
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4908a)
    }
}

#undef public_6d490a1
#undef public_6d490ad
#undef public_6d490b6
#undef public_6d490be
#undef public_6d490de
#undef public_6d490f4
#undef public_6d490fb
#undef public_6d49124
#undef public_6d4914c
#undef public_6d491af
#undef public_6d491b1
