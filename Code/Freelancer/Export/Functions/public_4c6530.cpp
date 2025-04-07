#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_4c6530);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);
CLANG_FORWARD_PROC_SYMBOL(public_5850f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd759);

#define public_4c6574 _public_4c6574
#define public_4c6598 _public_4c6598
#define public_4c65a9 _public_4c65a9
#define public_4c65ec _public_4c65ec
#define public_4c6602 _public_4c6602
#define public_4c6660 _public_4c6660
#define public_4c669d _public_4c669d
#define public_4c66f2 _public_4c66f2
#define public_4c66fa _public_4c66fa
#define public_4c670c _public_4c670c
#define public_4c670e _public_4c670e
#define public_4c6723 _public_4c6723
#define public_4c672d _public_4c672d
#define public_4c6759 _public_4c6759
#define public_4c676e _public_4c676e
#define public_4c6776 _public_4c6776
#define public_4c67a8 _public_4c67a8
#define public_4c67d6 _public_4c67d6
#define public_4c67da _public_4c67da
#define public_4c67de _public_4c67de
#define public_4c67e2 _public_4c67e2
#define public_4c67e6 _public_4c67e6
#define public_4c67e8 _public_4c67e8
#define public_4c67f0 _public_4c67f0
#define public_4c6802 _public_4c6802

PROC_DECLARE(0x4c6530, internal_4c6530, public_4c6530);
extern "C" NAKED register_t __cdecl internal_4c6530()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bd759 @0x4c6538*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd759
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x40]
        test esi, esi
        push edi
        mov ebp, ecx
        je public_4c670c
        cmp dword ptr ss : [ebp], 0
        je public_4c670c
        mov edi, dword ptr ss : [esp+0x4C]
        test edi, edi
        mov byte ptr ss : [esp+0x44], 0
        jne public_4c6574
        mov edi, dword ptr ds : [esi+0x14]
        public_4c6574 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_4c6598
        push eax
        call dword ptr ds : [public_5c603c]
        add esp, 4
        test eax, eax
        je public_4c6598
        mov eax, dword ptr ds : [eax+0x5C]
        mov dword ptr ss : [esp+0x10], eax
        public_4c6598 : nop
        cmp edi, 1
        mov dword ptr ss : [esp+0x4C], edi
        jge public_4c65a9
        mov dword ptr ss : [esp+0x4C], 1
        public_4c65a9 : nop
        fild dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x10]
        call public_5b7ec0
        fld dword ptr ds : [public_5c7474]
        mov ebx, eax
        mov eax, dword ptr ss : [ebp+0x18]
        test eax, eax
        mov dword ptr ss : [esp+0x4C], 0
        je public_4c65ec
        push eax
        fstp st(0)
        call dword ptr ds : [public_5c61fc]
        mov ecx, dword ptr ds : [eax+0x100]
        mov dword ptr ss : [esp+0x50], ecx
        add esp, 4
        lea ecx, ss:[ebp+0x1C]
        call dword ptr ds : [public_5c6430]
        public_4c65ec : nop
        fld dword ptr ss : [esp+0x4C]
        fsub st, st(1)
        call public_5b7ec0
        fstp st(0)
        cmp ebx, eax
        jbe public_4c6602
        mov byte ptr ss : [esp+0x44], 1
        public_4c6602 : nop
        mov ebx, dword ptr ds : [esi+0x14]
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x50], ebx
        call dword ptr ds : [public_5c6428]
        mov ecx, esi
        call dword ptr ds : [public_5c60b4]
        test al, al
        mov edi, dword ptr ss : [esp+0x48]
        je public_4c669d
        mov edx, dword ptr ds : [public_5c6210]
        mov eax, dword ptr ds : [edi]
        cmp eax, dword ptr ds : [edx]
        jne public_4c669d
        mov al, byte ptr ss : [esp+0x44]
        test al, al
        mov ecx, esi
        je public_4c6660
        push ebx
        call dword ptr ds : [public_5c6428]
        mov al, byte ptr ss : [esp+0x50]
        test al, al
        je public_4c670c
        mov eax, dword ptr ds : [public_67339c]
        push 0
        push eax
        call public_489e80
        add esp, 8
        jmp public_4c670c
        public_4c6660 : nop
        push 0
        call dword ptr ds : [public_5c6390]
        mov eax, dword ptr ds : [esi+4]
        push eax
        lea edi, ss:[ebp+0x1C]
        call dword ptr ds : [public_5c63a0]
        add esp, 4
        mov ecx, edi
        push eax
        push esi
        call dword ptr ds : [public_5c6434]
        mov al, byte ptr ss : [esp+0x50]
        test al, al
        je public_4c6802
        push 0x10
        call public_5645c0
        add esp, 4
        jmp public_4c6802
        public_4c669d : nop
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c61b0]
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [ecx+0x4B8]
        push eax
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x40], 0
        call dword ptr ds : [public_5c61c8]
        mov edx, dword ptr ds : [public_5c6210]
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_4c672d
        mov al, byte ptr ss : [esp+0x44]
        test al, al
        mov ecx, esi
        je public_4c6723
        push ebx
        call dword ptr ds : [public_5c6428]
        mov al, byte ptr ss : [esp+0x50]
        test al, al
        je public_4c66fa
        mov eax, dword ptr ds : [public_67339c]
        push 0
        push eax
        public_4c66f2 : nop
        call public_489e80
        add esp, 8
        public_4c66fa : nop
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        call dword ptr ds : [public_5c61b4]
        public_4c670c : nop
        xor al, al
        public_4c670e : nop
        mov ecx, dword ptr ss : [esp+0x34]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 0x10
        public_4c6723 : nop
        call dword ptr ds : [public_5c6394]
        push 0
        jmp public_4c676e
        public_4c672d : nop
        push eax
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c61c4]
        cmp eax, 0xFFFFFFFF
        mov ecx, esi
        jne public_4c6759
        push ebx
        call dword ptr ds : [public_5c6428]
        mov al, byte ptr ss : [esp+0x50]
        test al, al
        je public_4c66fa
        mov ecx, dword ptr ds : [public_67339c]
        push 0
        push ecx
        jmp public_4c66f2
        public_4c6759 : nop
        push edi
        call dword ptr ds : [public_5c63a4]
        mov edx, dword ptr ds : [public_5c6210]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [edx]
        je public_4c6776
        push 1
        public_4c676e : nop
        mov ecx, esi
        call dword ptr ds : [public_5c6390]
        public_4c6776 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        lea edi, ss:[ebp+0x1C]
        call dword ptr ds : [public_5c63a0]
        add esp, 4
        mov ecx, edi
        push eax
        push esi
        call dword ptr ds : [public_5c6434]
        mov al, byte ptr ss : [esp+0x50]
        test al, al
        je public_4c67f0
        mov ecx, esi
        call dword ptr ds : [public_5c60b4]
        test al, al
        je public_4c67a8
        push 0x10
        jmp public_4c67e8
        public_4c67a8 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call dword ptr ds : [public_5c603c]
        add esp, 4
        test eax, eax
        je public_4c67f0
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        add eax, 0xFFFFFFFA
        cmp eax, 0x1B
        ja public_4c67f0
/*FIXUP movzx eax, byte ptr ds : [eax+public_4c6838] @0x4c67c8*/
/*FIXUP jmp dword ptr ds : [eax*4+public_4c6820] @0x4c67cf*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000b789
  JMPTB mov eax, 0
  JMPTB public_4c0000000000b789 : nop
        je public_4c67de
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000b785
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b785 : nop
        je public_4c67f0
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000b781
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b781 : nop
        je public_4c67f0
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000b77d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b77d : nop
        je public_4c67f0
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000b779
  JMPTB mov eax, 0
  JMPTB public_4c0000000000b779 : nop
        je public_4c67de
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000b775
  JMPTB mov eax, 1
  JMPTB public_4c0000000000b775 : nop
        je public_4c67e6
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000b771
  JMPTB mov eax, 2
  JMPTB public_4c0000000000b771 : nop
        je public_4c67e2
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000b76d
  JMPTB mov eax, 1
  JMPTB public_4c0000000000b76d : nop
        je public_4c67e6
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000b769
  JMPTB mov eax, 1
  JMPTB public_4c0000000000b769 : nop
        je public_4c67e6
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000b765
  JMPTB mov eax, 2
  JMPTB public_4c0000000000b765 : nop
        je public_4c67e2
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000b761
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b761 : nop
        je public_4c67f0
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000b75d
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b75d : nop
        je public_4c67da
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000b759
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b759 : nop
        je public_4c67d6
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c0000000000b755
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b755 : nop
        je public_4c67da
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c0000000000b751
  JMPTB mov eax, 0
  JMPTB public_4c0000000000b751 : nop
        je public_4c67de
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c0000000000b74d
  JMPTB mov eax, 0
  JMPTB public_4c0000000000b74d : nop
        je public_4c67de
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c0000000000b749
  JMPTB mov eax, 0
  JMPTB public_4c0000000000b749 : nop
        je public_4c67de
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c0000000000b745
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b745 : nop
        je public_4c67f0
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c0000000000b741
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b741 : nop
        je public_4c67f0
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c0000000000b73d
  JMPTB mov eax, 0
  JMPTB public_4c0000000000b73d : nop
        je public_4c67de
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c0000000000b739
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b739 : nop
        je public_4c67f0
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c0000000000b735
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b735 : nop
        je public_4c67f0
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c0000000000b731
  JMPTB mov eax, 0
  JMPTB public_4c0000000000b731 : nop
        je public_4c67de
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c0000000000b72d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b72d : nop
        je public_4c67f0
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c0000000000b729
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b729 : nop
        je public_4c67d6
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c0000000000b725
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b725 : nop
        je public_4c67d6
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c0000000000b721
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b721 : nop
        je public_4c67d6
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c0000000000b71d
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b71d : nop
        je public_4c67da
  JMPTB int 3
        public_4c67d6 : nop
        push 0x14
        jmp public_4c67e8
        public_4c67da : nop
        push 0x12
        jmp public_4c67e8
        public_4c67de : nop
        push 0x16
        jmp public_4c67e8
        public_4c67e2 : nop
        push 0x13
        jmp public_4c67e8
        public_4c67e6 : nop
        push 0x15
        public_4c67e8 : nop
        call public_5645c0
        add esp, 4
        public_4c67f0 : nop
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        call dword ptr ds : [public_5c61b4]
        public_4c6802 : nop
        mov ecx, dword ptr ss : [ebp]
        push edi
        call public_5850f0
        mov ecx, dword ptr ss : [esp+0x4C]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_5c6428]
        mov al, 1
        jmp public_4c670e
        UNREACHABLE_TRAP(0x4c6530)
        ASM_EXPORT_ENTRY_SINGLE(0x4c67f0, public_4c67f0)
    }
}

#undef public_4c6574
#undef public_4c6598
#undef public_4c65a9
#undef public_4c65ec
#undef public_4c6602
#undef public_4c6660
#undef public_4c669d
#undef public_4c66f2
#undef public_4c66fa
#undef public_4c670c
#undef public_4c670e
#undef public_4c6723
#undef public_4c672d
#undef public_4c6759
#undef public_4c676e
#undef public_4c6776
#undef public_4c67a8
#undef public_4c67d6
#undef public_4c67da
#undef public_4c67de
#undef public_4c67e2
#undef public_4c67e6
#undef public_4c67e8
#undef public_4c67f0
#undef public_4c6802

#pragma init_seg(compiler)
extern "C" void const* const public_4c67f0 = __AsmFindLabelExport(&internal_4c6530, 0x4c67f0);
