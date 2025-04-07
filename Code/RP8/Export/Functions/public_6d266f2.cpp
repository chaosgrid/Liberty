#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d22810);
CLANG_FORWARD_PROC_SYMBOL(public_6d22ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6d22f4d);
CLANG_FORWARD_PROC_SYMBOL(public_6d22f85);
CLANG_FORWARD_PROC_SYMBOL(public_6d23639);
CLANG_FORWARD_PROC_SYMBOL(public_6d23d9b);
CLANG_FORWARD_PROC_SYMBOL(public_6d266f2);
CLANG_FORWARD_PROC_SYMBOL(public_6d27198);
CLANG_FORWARD_PROC_SYMBOL(public_6d28c70);
CLANG_FORWARD_PROC_SYMBOL(public_6d29d90);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b260);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);

#define public_6d26702 _public_6d26702
#define public_6d26782 _public_6d26782
#define public_6d26794 _public_6d26794
#define public_6d26796 _public_6d26796
#define public_6d267af _public_6d267af
#define public_6d267cf _public_6d267cf
#define public_6d267ed _public_6d267ed
#define public_6d26854 _public_6d26854
#define public_6d2685e _public_6d2685e
#define public_6d268ab _public_6d268ab
#define public_6d268b4 _public_6d268b4
#define public_6d268c8 _public_6d268c8
#define public_6d26925 _public_6d26925
#define public_6d26930 _public_6d26930
#define public_6d2693a _public_6d2693a
#define public_6d2694d _public_6d2694d
#define public_6d2694f _public_6d2694f
#define public_6d26969 _public_6d26969
#define public_6d26989 _public_6d26989
#define public_6d269a8 _public_6d269a8
#define public_6d269c5 _public_6d269c5
#define public_6d26a31 _public_6d26a31
#define public_6d26a33 _public_6d26a33
#define public_6d26a4d _public_6d26a4d
#define public_6d26a6d _public_6d26a6d
#define public_6d26a8c _public_6d26a8c
#define public_6d26aa3 _public_6d26aa3
#define public_6d26ab7 _public_6d26ab7
#define public_6d26ab9 _public_6d26ab9
#define public_6d26ae8 _public_6d26ae8
#define public_6d26aea _public_6d26aea
#define public_6d26b0d _public_6d26b0d
#define public_6d26b0f _public_6d26b0f

PROC_DECLARE(0x6d266f2, internal_6d266f2, public_6d266f2);
extern "C" NAKED register_t __cdecl internal_6d266f2()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x98
        push edi
        mov dword ptr ss : [ebp-0x84], ecx
/*FIXUP public_6d26702 : nop
        push offset public_6d5e74c @0x6d26702*/
  FIXUP public_6d26702 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5e74c
        mov ecx, dword ptr ss : [ebp-0x84]
        call public_6d23d9b
        movzx eax, al
        test eax, eax
        je public_6d26ab9
        mov ecx, dword ptr ss : [ebp-0x84]
        mov edx, dword ptr ds : [ecx+8]
        add edx, 0xB
        mov eax, dword ptr ss : [ebp-0x84]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ss : [ebp-0x84]
        call public_6d22f4d
        mov ecx, dword ptr ss : [ebp-0x84]
        mov edx, dword ptr ds : [ecx+8]
        movsx eax, byte ptr ds : [edx]
        cmp eax, 0x3D
        jne public_6d26aa3
        mov ecx, dword ptr ss : [ebp-0x84]
        mov edx, dword ptr ds : [ecx+8]
        add edx, 1
        mov eax, dword ptr ss : [ebp-0x84]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ss : [ebp-0x84]
        call public_6d23639
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0
        jne public_6d26782
        xor al, al
        jmp public_6d26b0f
        public_6d26782 : nop
        mov cl, byte ptr ss : [ebp-0x19]
        mov byte ptr ss : [ebp-0x18], cl
        xor edx, edx
        test edx, edx
        je public_6d26794
        cmp dword ptr ss : [ebp-0x14], 0
        jne public_6d26796
        public_6d26794 : nop
        jmp public_6d267ed
        public_6d26796 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        movzx ecx, byte ptr ds : [eax-1]
        test ecx, ecx
        je public_6d267af
        mov edx, dword ptr ss : [ebp-0x14]
        movzx eax, byte ptr ds : [edx-1]
        cmp eax, 0xFF
        jne public_6d267cf
        public_6d267af : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        add ecx, 2
        mov dword ptr ss : [ebp-0x34], ecx
        mov edx, dword ptr ss : [ebp-0x14]
        sub edx, 1
        mov dword ptr ss : [ebp-0x30], edx
        mov eax, dword ptr ss : [ebp-0x30]
        push eax
        call public_6d2f249
        add esp, 4
        jmp public_6d267ed
        public_6d267cf : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        sub ecx, 1
        mov dword ptr ss : [ebp-0x88], ecx
        mov edx, dword ptr ss : [ebp-0x88]
        mov al, byte ptr ds : [edx]
        sub al, 1
        mov ecx, dword ptr ss : [ebp-0x88]
        mov byte ptr ds : [ecx], al
        public_6d267ed : nop
        mov dword ptr ss : [ebp-0x14], 0
        mov dword ptr ss : [ebp-0x10], 0
        mov dword ptr ss : [ebp-0xC], 0
        mov edi, dword ptr ss : [ebp-4]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        add ecx, 0xFFFFFFFF
        push ecx
        mov edx, dword ptr ss : [ebp-4]
        push edx
        lea ecx, ss:[ebp-0x18]
        call dword ptr ds : [public_6d5e078]
        mov ecx, dword ptr ss : [ebp-0x84]
        call public_6d22ed0
        push 0x14
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0x20], eax
        cmp dword ptr ss : [ebp-0x20], 0
        je public_6d26854
        mov eax, dword ptr ss : [ebp-0x84]
        push eax
        mov ecx, dword ptr ss : [ebp-0x20]
        call public_6d22810
        mov dword ptr ss : [ebp-0x8C], eax
        jmp public_6d2685e
        public_6d26854 : nop
        mov dword ptr ss : [ebp-0x8C], 0
        public_6d2685e : nop
        mov ecx, dword ptr ss : [ebp-0x8C]
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp-8]
        push edx
        mov ecx, dword ptr ss : [ebp-0x84]
        call public_6d27198
        movzx eax, al
        test eax, eax
        jne public_6d269c5
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x28], ecx
        mov edx, dword ptr ss : [ebp-0x28]
        mov dword ptr ss : [ebp-0x24], edx
        cmp dword ptr ss : [ebp-0x24], 0
        je public_6d26930
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x3C], ecx
        mov edx, dword ptr ss : [ebp-0x24]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x38], eax
        jmp public_6d268b4
        public_6d268ab : nop
        mov ecx, dword ptr ss : [ebp-0x38]
        add ecx, 0x20
        mov dword ptr ss : [ebp-0x38], ecx
        public_6d268b4 : nop
        mov edx, dword ptr ss : [ebp-0x38]
        cmp edx, dword ptr ss : [ebp-0x3C]
        je public_6d268c8
        push 0
        mov ecx, dword ptr ss : [ebp-0x38]
        call public_6d2b260
        jmp public_6d268ab
        public_6d268c8 : nop
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ss : [ebp-0x24]
        mov edx, dword ptr ds : [eax+0xC]
        sub edx, dword ptr ds : [ecx+4]
        sar edx, 5
        mov dword ptr ss : [ebp-0x44], edx
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x40], ecx
        mov edx, dword ptr ss : [ebp-0x40]
        push edx
        call public_6d2f249
        add esp, 4
        mov eax, dword ptr ss : [ebp-0x24]
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ss : [ebp-0x24]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-0x24]
        mov dword ptr ds : [edx+0xC], 0
        mov eax, 1
        and eax, 1
        test eax, eax
        je public_6d26925
        mov ecx, dword ptr ss : [ebp-0x24]
        push ecx
        call public_6d2f249
        add esp, 4
        public_6d26925 : nop
        mov edx, dword ptr ss : [ebp-0x24]
        mov dword ptr ss : [ebp-0x90], edx
        jmp public_6d2693a
        public_6d26930 : nop
        mov dword ptr ss : [ebp-0x90], 0
        public_6d2693a : nop
        mov byte ptr ss : [ebp-0x29], 0
        mov eax, 1
        test eax, eax
        je public_6d2694d
        cmp dword ptr ss : [ebp-0x14], 0
        jne public_6d2694f
        public_6d2694d : nop
        jmp public_6d269a8
        public_6d2694f : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        movzx edx, byte ptr ds : [ecx-1]
        test edx, edx
        je public_6d26969
        mov eax, dword ptr ss : [ebp-0x14]
        movzx ecx, byte ptr ds : [eax-1]
        cmp ecx, 0xFF
        jne public_6d26989
        public_6d26969 : nop
        mov edx, dword ptr ss : [ebp-0xC]
        add edx, 2
        mov dword ptr ss : [ebp-0x4C], edx
        mov eax, dword ptr ss : [ebp-0x14]
        sub eax, 1
        mov dword ptr ss : [ebp-0x48], eax
        mov ecx, dword ptr ss : [ebp-0x48]
        push ecx
        call public_6d2f249
        add esp, 4
        jmp public_6d269a8
        public_6d26989 : nop
        mov edx, dword ptr ss : [ebp-0x14]
        sub edx, 1
        mov dword ptr ss : [ebp-0x94], edx
        mov eax, dword ptr ss : [ebp-0x94]
        mov cl, byte ptr ds : [eax]
        sub cl, 1
        mov edx, dword ptr ss : [ebp-0x94]
        mov byte ptr ds : [edx], cl
        public_6d269a8 : nop
        mov dword ptr ss : [ebp-0x14], 0
        mov dword ptr ss : [ebp-0x10], 0
        mov dword ptr ss : [ebp-0xC], 0
        mov al, byte ptr ss : [ebp-0x29]
        jmp public_6d26b0f
        public_6d269c5 : nop
        mov dword ptr ss : [ebp-0x68], 0
        lea eax, ss:[ebp-0x18]
        push eax
        lea ecx, ss:[ebp-0x64]
        call dword ptr ds : [public_6d5e08c]
        mov ecx, dword ptr ss : [ebp-0x68]
        mov dword ptr ss : [ebp-0x54], ecx
        lea edx, ss:[ebp-0x64]
        push edx
        lea eax, ss:[ebp-0x78]
        push eax
        mov ecx, dword ptr ss : [ebp-0x84]
        add ecx, 0x55C
        call public_6d28c70
        lea ecx, ss:[ebp-0x74]
        push ecx
        lea edx, ss:[ebp-0x78]
        push edx
        lea ecx, ss:[ebp-0x70]
        call public_6d29d90
        mov eax, dword ptr ss : [ebp-0x70]
        mov dword ptr ss : [ebp-0x50], eax
        push 1
        lea ecx, ss:[ebp-0x64]
        call dword ptr ds : [public_6d5e0a4]
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ecx+0x1C], edx
        mov eax, 1
        test eax, eax
        je public_6d26a31
        cmp dword ptr ss : [ebp-0x14], 0
        jne public_6d26a33
        public_6d26a31 : nop
        jmp public_6d26a8c
        public_6d26a33 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        movzx edx, byte ptr ds : [ecx-1]
        test edx, edx
        je public_6d26a4d
        mov eax, dword ptr ss : [ebp-0x14]
        movzx ecx, byte ptr ds : [eax-1]
        cmp ecx, 0xFF
        jne public_6d26a6d
        public_6d26a4d : nop
        mov edx, dword ptr ss : [ebp-0xC]
        add edx, 2
        mov dword ptr ss : [ebp-0x80], edx
        mov eax, dword ptr ss : [ebp-0x14]
        sub eax, 1
        mov dword ptr ss : [ebp-0x7C], eax
        mov ecx, dword ptr ss : [ebp-0x7C]
        push ecx
        call public_6d2f249
        add esp, 4
        jmp public_6d26a8c
        public_6d26a6d : nop
        mov edx, dword ptr ss : [ebp-0x14]
        sub edx, 1
        mov dword ptr ss : [ebp-0x98], edx
        mov eax, dword ptr ss : [ebp-0x98]
        mov cl, byte ptr ds : [eax]
        sub cl, 1
        mov edx, dword ptr ss : [ebp-0x98]
        mov byte ptr ds : [edx], cl
        public_6d26a8c : nop
        mov dword ptr ss : [ebp-0x14], 0
        mov dword ptr ss : [ebp-0x10], 0
        mov dword ptr ss : [ebp-0xC], 0
        jmp public_6d26ab7
/*FIXUP public_6d26aa3 : nop
        push offset public_6d6bf98 @0x6d26aa3*/
  FIXUP public_6d26aa3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6bf98
        mov ecx, dword ptr ss : [ebp-0x84]
        call public_6d22f85
        xor al, al
        jmp public_6d26b0f
        public_6d26ab7 : nop
        jmp public_6d26aea
/*FIXUP public_6d26ab9 : nop
        push offset public_6d5e738 @0x6d26ab9*/
  FIXUP public_6d26ab9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5e738
        mov ecx, dword ptr ss : [ebp-0x84]
        call public_6d23d9b
        movzx eax, al
        test eax, eax
        jne public_6d26ae8
/*FIXUP push offset public_6d5e740 @0x6d26ad0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5e740
        mov ecx, dword ptr ss : [ebp-0x84]
        call public_6d23d9b
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d26aea
        public_6d26ae8 : nop
        jmp public_6d26b0d
        public_6d26aea : nop
        mov ecx, dword ptr ss : [ebp-0x84]
        call public_6d22ed0
        mov edx, dword ptr ss : [ebp-0x84]
        mov eax, dword ptr ss : [ebp-0x84]
        mov ecx, dword ptr ds : [edx+8]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6d26702
        public_6d26b0d : nop
        mov al, 1
        public_6d26b0f : nop
        pop edi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d266f2)
    }
}

#undef public_6d26702
#undef public_6d26782
#undef public_6d26794
#undef public_6d26796
#undef public_6d267af
#undef public_6d267cf
#undef public_6d267ed
#undef public_6d26854
#undef public_6d2685e
#undef public_6d268ab
#undef public_6d268b4
#undef public_6d268c8
#undef public_6d26925
#undef public_6d26930
#undef public_6d2693a
#undef public_6d2694d
#undef public_6d2694f
#undef public_6d26969
#undef public_6d26989
#undef public_6d269a8
#undef public_6d269c5
#undef public_6d26a31
#undef public_6d26a33
#undef public_6d26a4d
#undef public_6d26a6d
#undef public_6d26a8c
#undef public_6d26aa3
#undef public_6d26ab7
#undef public_6d26ab9
#undef public_6d26ae8
#undef public_6d26aea
#undef public_6d26b0d
#undef public_6d26b0f
