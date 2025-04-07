#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41e47);
CLANG_FORWARD_PROC_SYMBOL(public_6d41e65);
CLANG_FORWARD_PROC_SYMBOL(public_6d44168);
CLANG_FORWARD_PROC_SYMBOL(public_6d48472);
CLANG_FORWARD_PROC_SYMBOL(public_6d48538);
CLANG_FORWARD_PROC_SYMBOL(public_6d48e08);
CLANG_FORWARD_PROC_SYMBOL(public_6d493f8);

#define public_6d49419 _public_6d49419
#define public_6d4943e _public_6d4943e
#define public_6d49453 _public_6d49453
#define public_6d4945e _public_6d4945e
#define public_6d4946d _public_6d4946d
#define public_6d49484 _public_6d49484
#define public_6d494a0 _public_6d494a0
#define public_6d494c8 _public_6d494c8
#define public_6d49525 _public_6d49525
#define public_6d4952f _public_6d4952f
#define public_6d49536 _public_6d49536
#define public_6d4955b _public_6d4955b
#define public_6d49564 _public_6d49564
#define public_6d49593 _public_6d49593
#define public_6d49598 _public_6d49598
#define public_6d495a1 _public_6d495a1
#define public_6d495aa _public_6d495aa
#define public_6d495ab _public_6d495ab

PROC_DECLARE(0x6d493f8, internal_6d493f8, public_6d493f8);
extern "C" NAKED register_t __cdecl internal_6d493f8()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [esi+0x58]
        test al, 1
        jne public_6d49453
/*FIXUP push offset public_6d61a1c @0x6d4940c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d61a1c
        push esi
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d49419 : nop
        mov al, byte ptr ds : [esi+0x116]
        cmp al, 3
        push edi
        jne public_6d494c8
        test byte ptr ds : [esi+0x58], 2
        mov edi, dword ptr ss : [ebp+0x10]
        jne public_6d49484
/*FIXUP push offset public_6d61a00 @0x6d49431*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d61a00
        push esi
        call public_6d41e65
        pop ecx
        pop ecx
        public_6d4943e : nop
        test edi, edi
        jne public_6d494a0
/*FIXUP push offset public_6d619e8 @0x6d49442*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d619e8
        push esi
        call public_6d41e65
        push edi
        jmp public_6d495a1
        public_6d49453 : nop
        test al, 4
        je public_6d4945e
/*FIXUP push offset public_6d619d0 @0x6d49457*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d619d0
        jmp public_6d4946d
        public_6d4945e : nop
        test ebx, ebx
        je public_6d49419
        test byte ptr ds : [ebx+8], 0x10
        je public_6d49419
/*FIXUP push offset public_6d619b8 @0x6d49468*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d619b8
        public_6d4946d : nop
        push esi
        call public_6d41e65
        push dword ptr ss : [ebp+0x10]
        push esi
        call public_6d48e08
        add esp, 0x10
        jmp public_6d495ab
        public_6d49484 : nop
        movzx eax, word ptr ds : [esi+0x108]
        cmp edi, eax
        jbe public_6d4943e
/*FIXUP push offset public_6d6199c @0x6d4948f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6199c
        push esi
        call public_6d41e65
        push edi
        jmp public_6d495a1
        public_6d494a0 : nop
        push edi
        push esi
        call public_6d48472
        or byte ptr ds : [esi+0x5D], 0x20
        push edi
        push eax
        push esi
        mov dword ptr ds : [esi+0x15C], eax
        call public_6d48538
        add esp, 0x14
        mov word ptr ds : [esi+0x10A], di
        jmp public_6d49564
        public_6d494c8 : nop
        cmp al, 2
        jne public_6d49525
        cmp dword ptr ss : [ebp+0x10], 6
        jne public_6d4952f
        push 6
        lea eax, ss:[ebp-8]
        push eax
        push esi
        call public_6d48538
        movzx cx, byte ptr ss : [ebp-7]
        movzx ax, byte ptr ss : [ebp-8]
        add esp, 0xC
        shl eax, 8
        add eax, ecx
        movzx cx, byte ptr ss : [ebp-5]
        mov word ptr ds : [esi+0x162], ax
        movzx ax, byte ptr ss : [ebp-6]
        shl eax, 8
        add eax, ecx
        movzx cx, byte ptr ss : [ebp-3]
        mov word ptr ds : [esi+0x164], ax
        movzx ax, byte ptr ss : [ebp-4]
        shl eax, 8
        add eax, ecx
        mov word ptr ds : [esi+0x166], ax
        jmp public_6d4955b
        public_6d49525 : nop
        test al, al
        jne public_6d49593
        cmp dword ptr ss : [ebp+0x10], 2
        je public_6d49536
/*FIXUP public_6d4952f : nop
        push offset public_6d6199c @0x6d4952f*/
  FIXUP public_6d4952f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6199c
        jmp public_6d49598
        public_6d49536 : nop
        push 2
        lea eax, ss:[ebp-8]
        push eax
        push esi
        call public_6d48538
        movzx ax, byte ptr ss : [ebp-8]
        movzx cx, byte ptr ss : [ebp-7]
        add esp, 0xC
        shl eax, 8
        add eax, ecx
        mov word ptr ds : [esi+0x168], ax
        public_6d4955b : nop
        mov word ptr ds : [esi+0x10A], 1
        public_6d49564 : nop
        push 0
        push esi
        call public_6d48e08
        test eax, eax
        pop ecx
        pop ecx
        jne public_6d495aa
        lea eax, ds:[esi+0x160]
        push eax
        movzx eax, word ptr ds : [esi+0x10A]
        push eax
        push dword ptr ds : [esi+0x15C]
        push ebx
        push esi
        call public_6d44168
        add esp, 0x14
        jmp public_6d495aa
/*FIXUP public_6d49593 : nop
        push offset public_6d61970 @0x6d49593*/
  FIXUP public_6d49593 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d61970
        public_6d49598 : nop
        push esi
        call public_6d41e65
        push dword ptr ss : [ebp+0x10]
        public_6d495a1 : nop
        push esi
        call public_6d48e08
        add esp, 0x10
        public_6d495aa : nop
        pop edi
        public_6d495ab : nop
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d493f8)
    }
}

#undef public_6d49419
#undef public_6d4943e
#undef public_6d49453
#undef public_6d4945e
#undef public_6d4946d
#undef public_6d49484
#undef public_6d494a0
#undef public_6d494c8
#undef public_6d49525
#undef public_6d4952f
#undef public_6d49536
#undef public_6d4955b
#undef public_6d49564
#undef public_6d49593
#undef public_6d49598
#undef public_6d495a1
#undef public_6d495aa
#undef public_6d495ab
