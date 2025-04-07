#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41e47);
CLANG_FORWARD_PROC_SYMBOL(public_6d4404f);
CLANG_FORWARD_PROC_SYMBOL(public_6d48515);
CLANG_FORWARD_PROC_SYMBOL(public_6d48538);
CLANG_FORWARD_PROC_SYMBOL(public_6d48e08);
CLANG_FORWARD_PROC_SYMBOL(public_6d48e94);

#define public_6d48eb3 _public_6d48eb3
#define public_6d48ec6 _public_6d48ec6
#define public_6d48f30 _public_6d48f30
#define public_6d48f3d _public_6d48f3d
#define public_6d48f63 _public_6d48f63
#define public_6d48f79 _public_6d48f79
#define public_6d48f86 _public_6d48f86
#define public_6d48f93 _public_6d48f93
#define public_6d48fa2 _public_6d48fa2
#define public_6d48fa7 _public_6d48fa7
#define public_6d48fb4 _public_6d48fb4
#define public_6d48fc7 _public_6d48fc7
#define public_6d48fda _public_6d48fda
#define public_6d48fed _public_6d48fed
#define public_6d49033 _public_6d49033
#define public_6d4903c _public_6d4903c
#define public_6d49045 _public_6d49045
#define public_6d4904c _public_6d4904c

PROC_DECLARE(0x6d48e94, internal_6d48e94, public_6d48e94);
extern "C" NAKED register_t __cdecl internal_6d48e94()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [esi+0x58], 0
        push edi
        je public_6d48eb3
/*FIXUP push offset public_6d61740 @0x6d48ea6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d61740
        push esi
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d48eb3 : nop
        cmp dword ptr ss : [ebp+0x10], 0xD
        je public_6d48ec6
/*FIXUP push offset public_6d6172c @0x6d48eb9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6172c
        push esi
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d48ec6 : nop
        or dword ptr ds : [esi+0x58], 1
        push 0xD
        lea eax, ss:[ebp-0x1C]
        push eax
        push esi
        call public_6d48538
        push 0
        push esi
        call public_6d48e08
        lea eax, ss:[ebp-0x1C]
        push eax
        call public_6d48515
        mov edi, eax
        lea eax, ss:[ebp-0x18]
        push eax
        call public_6d48515
        movzx ebx, byte ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp+8], eax
        movzx eax, byte ptr ss : [ebp-0x13]
        mov dword ptr ss : [ebp+0x10], eax
        movzx eax, byte ptr ss : [ebp-0x12]
        mov dword ptr ss : [ebp-0xC], eax
        movzx eax, byte ptr ss : [ebp-0x11]
        mov dword ptr ss : [ebp-8], eax
        movzx eax, byte ptr ss : [ebp-0x10]
        add esp, 0x1C
        test edi, edi
        mov dword ptr ss : [ebp-4], eax
        je public_6d48f30
        mov eax, 0x7FFFFFFF
        cmp edi, eax
        ja public_6d48f30
        cmp dword ptr ss : [ebp+8], 0
        je public_6d48f30
        cmp dword ptr ss : [ebp+8], eax
        jbe public_6d48f3d
/*FIXUP public_6d48f30 : nop
        push offset public_6d61710 @0x6d48f30*/
  FIXUP public_6d48f30 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d61710
        push esi
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d48f3d : nop
        cmp ebx, 1
        je public_6d48f63
        cmp ebx, 2
        je public_6d48f63
        cmp ebx, 4
        je public_6d48f63
        cmp ebx, 8
        je public_6d48f63
        cmp ebx, 0x10
        je public_6d48f63
/*FIXUP push offset public_6d616f4 @0x6d48f56*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d616f4
        push esi
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d48f63 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        jl public_6d48f79
        cmp eax, 1
        je public_6d48f79
        cmp eax, 5
        je public_6d48f79
        cmp eax, 6
        jle public_6d48f86
/*FIXUP public_6d48f79 : nop
        push offset public_6d616d8 @0x6d48f79*/
  FIXUP public_6d48f79 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d616d8
        push esi
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d48f86 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        cmp eax, 3
        jne public_6d48f93
        cmp ebx, 8
        jg public_6d48fa7
        public_6d48f93 : nop
        cmp eax, 2
        je public_6d48fa2
        cmp eax, 4
        je public_6d48fa2
        cmp eax, 6
        jne public_6d48fb4
        public_6d48fa2 : nop
        cmp ebx, 8
        jge public_6d48fb4
/*FIXUP public_6d48fa7 : nop
        push offset public_6d616a4 @0x6d48fa7*/
  FIXUP public_6d48fa7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d616a4
        push esi
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d48fb4 : nop
        cmp dword ptr ss : [ebp-4], 2
        jl public_6d48fc7
/*FIXUP push offset public_6d61680 @0x6d48fba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d61680
        push esi
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d48fc7 : nop
        cmp dword ptr ss : [ebp-0xC], 0
        je public_6d48fda
/*FIXUP push offset public_6d6165c @0x6d48fcd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6165c
        push esi
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d48fda : nop
        cmp dword ptr ss : [ebp-8], 0
        je public_6d48fed
/*FIXUP push offset public_6d6163c @0x6d48fe0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6163c
        push esi
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d48fed : nop
        mov al, byte ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+8]
        mov byte ptr ds : [esi+0x113], al
        movzx eax, cl
        sub eax, 0
        mov dword ptr ds : [esi+0xB8], edi
        mov dword ptr ds : [esi+0xBC], edx
        mov byte ptr ds : [esi+0x117], bl
        mov byte ptr ds : [esi+0x116], cl
        je public_6d49045
        dec eax
        dec eax
        je public_6d4903c
        dec eax
        je public_6d49045
        dec eax
        je public_6d49033
        dec eax
        dec eax
        jne public_6d4904c
        mov byte ptr ds : [esi+0x11A], 4
        jmp public_6d4904c
        public_6d49033 : nop
        mov byte ptr ds : [esi+0x11A], 2
        jmp public_6d4904c
        public_6d4903c : nop
        mov byte ptr ds : [esi+0x11A], 3
        jmp public_6d4904c
        public_6d49045 : nop
        mov byte ptr ds : [esi+0x11A], 1
        public_6d4904c : nop
        mov al, byte ptr ds : [esi+0x11A]
        push dword ptr ss : [ebp-8]
        imul bl
        push dword ptr ss : [ebp-0xC]
        mov byte ptr ds : [esi+0x119], al
        push dword ptr ss : [ebp-4]
        movzx eax, al
        imul eax, edi
        push ecx
        push ebx
        push edx
        push edi
        push dword ptr ss : [ebp+0xC]
        add eax, 7
        shr eax, 3
        push esi
        mov dword ptr ds : [esi+0xC8], eax
        call public_6d4404f
        add esp, 0x24
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d48e94)
    }
}

#undef public_6d48eb3
#undef public_6d48ec6
#undef public_6d48f30
#undef public_6d48f3d
#undef public_6d48f63
#undef public_6d48f79
#undef public_6d48f86
#undef public_6d48f93
#undef public_6d48fa2
#undef public_6d48fa7
#undef public_6d48fb4
#undef public_6d48fc7
#undef public_6d48fda
#undef public_6d48fed
#undef public_6d49033
#undef public_6d4903c
#undef public_6d49045
#undef public_6d4904c
