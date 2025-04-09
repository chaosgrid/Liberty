#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_4ae4b0);
CLANG_FORWARD_PROC_SYMBOL(public_4ae650);
CLANG_FORWARD_PROC_SYMBOL(public_4ae770);
CLANG_FORWARD_PROC_SYMBOL(public_4ae890);
CLANG_FORWARD_PROC_SYMBOL(public_4ae9a0);
CLANG_FORWARD_PROC_SYMBOL(public_4b2700);
CLANG_FORWARD_PROC_SYMBOL(public_564570);
CLANG_FORWARD_PROC_SYMBOL(public_5798b0);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4ab74a _public_4ab74a
#define public_4ab754 _public_4ab754
#define public_4ab79c _public_4ab79c
#define public_4ab7a9 _public_4ab7a9
#define public_4ab7ca _public_4ab7ca
#define public_4ab816 _public_4ab816
#define public_4ab87d _public_4ab87d
#define public_4ab8bd _public_4ab8bd
#define public_4ab938 _public_4ab938
#define public_4ab968 _public_4ab968
#define public_4ab9a5 _public_4ab9a5
#define public_4ab9b1 _public_4ab9b1
#define public_4ab9da _public_4ab9da
#define public_4aba00 _public_4aba00
#define public_4aba67 _public_4aba67
#define public_4abaa7 _public_4abaa7
#define public_4abae4 _public_4abae4
#define public_4abb00 _public_4abb00
#define public_4abb2b _public_4abb2b
#define public_4abb5b _public_4abb5b
#define public_4abb94 _public_4abb94
#define public_4abbd5 _public_4abbd5
#define public_4abbde _public_4abbde
#define public_4abbe7 _public_4abbe7
#define public_4abbf0 _public_4abbf0
#define public_4abbf9 _public_4abbf9
#define public_4abc00 _public_4abc00
#define public_4abc15 _public_4abc15
#define public_4abc2b _public_4abc2b
#define public_4abc94 _public_4abc94
#define public_4abca6 _public_4abca6
#define public_4abcaf _public_4abcaf
#define public_4abcb8 _public_4abcb8
#define public_4abcc1 _public_4abcc1
#define public_4abcca _public_4abcca
#define public_4abcd1 _public_4abcd1
#define public_4abcd7 _public_4abcd7
#define public_4abd10 _public_4abd10
#define public_4abd48 _public_4abd48
#define public_4abd7b _public_4abd7b

PROC_DECLARE(0x4ab6e0, internal_4ab6e0, public_4ab6e0);
extern "C" NAKED register_t __cdecl internal_4ab6e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0xA0
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call public_5a17b0
        call public_42d680
        fstp qword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+0x34C]
        mov eax, dword ptr ds : [esi+0x350]
        mov edx, dword ptr ds : [esi+0x354]
        mov dword ptr ss : [esp+0x5C], ecx
        mov cl, byte ptr ds : [esi+0x32D]
        mov dword ptr ss : [esp+0x58], eax
        mov eax, dword ptr ds : [esi+0x358]
        xor ebx, ebx
        cmp cl, bl
        mov dword ptr ss : [esp+0x60], edx
        mov dword ptr ss : [esp+0x64], eax
        jne public_4ab74a
        mov edx, dword ptr ds : [esi+0x35C]
        mov eax, dword ptr ds : [esi+0x360]
        mov dword ptr ss : [esp+0x68], edx
        mov dword ptr ss : [esp+0x6C], eax
        jmp public_4ab754
        public_4ab74a : nop
        mov edx, dword ptr ds : [esi+0x360]
        mov dword ptr ss : [esp+0x6C], edx
        public_4ab754 : nop
        cmp cl, bl
        mov eax, dword ptr ds : [esi+0x368]
        mov edx, dword ptr ds : [esi+0x364]
        mov dword ptr ss : [esp+0x70], eax
        mov eax, dword ptr ds : [esi+0x36C]
        mov dword ptr ss : [esp+0x74], edx
        mov edx, dword ptr ds : [esi+0x370]
        mov dword ptr ss : [esp+0x78], eax
        mov dword ptr ss : [esp+0x7C], edx
        jne public_4ab79c
        mov eax, dword ptr ds : [esi+0x374]
        mov edx, dword ptr ds : [esi+0x378]
        mov dword ptr ss : [esp+0x80], eax
        mov dword ptr ss : [esp+0x84], edx
        jmp public_4ab7a9
        public_4ab79c : nop
        mov eax, dword ptr ds : [esi+0x378]
        mov dword ptr ss : [esp+0x84], eax
        public_4ab7a9 : nop
        fld qword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_5cf100]
        fnstsw ax
        test ah, 0x41
        jne public_4ab7ca
        mov dword ptr ss : [esp+0x10], 0x9999999A
        mov dword ptr ss : [esp+0x14], 0x3FC99999
        public_4ab7ca : nop
        fld qword ptr ds : [esi+0x840]
        fcomp qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 5
        jp public_4ab9a5
        cmp cl, bl
        jne public_4ab9a5
        cmp byte ptr ds : [esi+0x8A2], bl
        jne public_4ab9b1
        fld qword ptr ss : [esp+0x10]
        mov ebp, 6
        fmul qword ptr ds : [public_5d3c48]
        mov dword ptr ss : [esp+0x28], ebp
        xor edi, edi
        fadd qword ptr ds : [esi+0x840]
        fstp qword ptr ds : [esi+0x840]
        public_4ab816 : nop
        fild dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+edi+0x58]
        fmul qword ptr ds : [public_5c7720]
        fst qword ptr ss : [esp+0x28]
        fadd qword ptr ds : [esi+0x840]
        fcom qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        jne public_4ab87d
        lea eax, ss:[esp+0x40]
        fstp st(0)
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x14]
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        lea eax, ss:[esp+0x34]
        jmp public_4ab8bd
        public_4ab87d : nop
        lea eax, ss:[esp+0x4C]
        fstp dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x14]
        fld qword ptr ss : [esp+0x28]
        fadd qword ptr ds : [esi+0x840]
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        lea eax, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+0x1C]
        public_4ab8bd : nop
        mov ecx, dword ptr ss : [esp+edi+0x70]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x14]
        dec ebp
        add edi, 4
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x28], ebp
        jg public_4ab816
        fld qword ptr ds : [esi+0x840]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        jne public_4ab938
        mov ecx, esi
        call public_4ae650
        mov ecx, esi
        call public_4ae650
        mov ecx, dword ptr ds : [esi+0x338]
        lea eax, ss:[esp+0x1C]
        mov byte ptr ds : [esi+0x8A0], bl
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x14]
        mov dword ptr ds : [esi+0x840], ebx
        mov dword ptr ds : [esi+0x844], 0x3FF00000
        jmp public_4ab968
        public_4ab938 : nop
        fld qword ptr ds : [esi+0x840]
        mov ecx, dword ptr ds : [esi+0x338]
        fmul qword ptr ds : [public_5d5080]
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x14]
        public_4ab968 : nop
        fld qword ptr ds : [esi+0x840]
        fcomp qword ptr ds : [public_5d5078]
        fnstsw ax
        test ah, 0x41
        jne public_4abb5b
        fld qword ptr ds : [esi+0x840]
        fcomp qword ptr ds : [public_5d5070]
        fnstsw ax
        test ah, 5
        jp public_4abb5b
        push 0x1B
        call public_564570
        add esp, 4
        jmp public_4abb5b
        public_4ab9a5 : nop
        cmp byte ptr ds : [esi+0x8A2], bl
        je public_4abb5b
        public_4ab9b1 : nop
        cmp cl, bl
        jne public_4abb5b
        fld qword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_5d4c88]
        fnstsw ax
        test ah, 0x41
        jne public_4ab9da
        mov dword ptr ss : [esp+0x10], 0xEB851EB8
        mov dword ptr ss : [esp+0x14], 0x3F9EB851
        public_4ab9da : nop
        fld qword ptr ss : [esp+0x10]
        mov ebp, 6
        fmul qword ptr ds : [public_5d3c48]
        mov dword ptr ss : [esp+0x28], ebp
        xor edi, edi
        fsubr qword ptr ds : [esi+0x840]
        fstp qword ptr ds : [esi+0x840]
        nop 
        lea esp, ss:[esp]
        public_4aba00 : nop
        fild dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+edi+0x58]
        fmul qword ptr ds : [public_5c7720]
        fst qword ptr ss : [esp+0x28]
        fadd qword ptr ds : [esi+0x840]
        fcom qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        jne public_4aba67
        lea eax, ss:[esp+0x1C]
        fstp st(0)
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x14]
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        lea eax, ss:[esp+0x4C]
        jmp public_4abaa7
        public_4aba67 : nop
        lea eax, ss:[esp+0x34]
        fstp dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x14]
        fld qword ptr ss : [esp+0x28]
        fadd qword ptr ds : [esi+0x840]
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        lea eax, ss:[esp+0x40]
        fstp dword ptr ss : [esp+0x40]
        public_4abaa7 : nop
        mov ecx, dword ptr ss : [esp+edi+0x70]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x14]
        dec ebp
        add edi, 4
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x28], ebp
        jg public_4aba00
        fld qword ptr ds : [esi+0x840]
        fadd qword ptr ds : [public_5d5068]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        jne public_4abae4
        push 0x1B
        call public_564570
        add esp, 4
        public_4abae4 : nop
        fld qword ptr ds : [esi+0x840]
        fcomp qword ptr ds : [public_5d5060]
        fnstsw ax
        test ah, 5
        jp public_4abb2b
        xor eax, eax
        mov dl, 0xFC
        nop 
        lea esp, ss:[esp]
        public_4abb00 : nop
        mov ecx, dword ptr ss : [esp+eax+0x58]
        and byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ss : [esp+eax+0x70]
        and byte ptr ds : [ecx+0x6C], dl
        add eax, 4
        cmp eax, 0x18
        jl public_4abb00
        mov byte ptr ds : [esi+0x32C], 1
        mov byte ptr ds : [public_67dcc8], bl
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_4abb2b : nop
        fld qword ptr ds : [esi+0x840]
        mov ecx, dword ptr ds : [esi+0x338]
        fmul qword ptr ds : [public_5d5080]
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x14]
        public_4abb5b : nop
        cmp byte ptr ds : [esi+0x32D], bl
        jne public_4abc94
        cmp byte ptr ds : [esi+0x8A0], bl
        je public_4abcd7
        fld qword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_5d4c88]
        fnstsw ax
        test ah, 0x41
        jne public_4abb94
        mov dword ptr ss : [esp+0x10], 0xEB851EB8
        mov dword ptr ss : [esp+0x14], 0x3F9EB851
        public_4abb94 : nop
        fld qword ptr ss : [esp+0x10]
        fmul qword ptr ds : [esi+0x898]
        fadd qword ptr ds : [esi+0x890]
        fst qword ptr ds : [esi+0x890]
        fcomp qword ptr ds : [public_5d5058]
        fnstsw ax
        test ah, 1
        jne public_4abc15
        mov eax, dword ptr ds : [esi+0x7F4]
        cmp eax, 4
        mov dword ptr ds : [esi+0x890], ebx
        mov dword ptr ds : [esi+0x894], ebx
        ja public_4abc00
/*FIXUP jmp dword ptr ds : [eax*4+public_4abd84] @0x4abbce*/
  JMPTB cmp eax, 0
  JMPTB je public_4abbd5
  JMPTB cmp eax, 1
  JMPTB je public_4abbde
  JMPTB cmp eax, 2
  JMPTB je public_4abbe7
  JMPTB cmp eax, 3
  JMPTB je public_4abbf0
  JMPTB cmp eax, 4
  JMPTB je public_4abbf9
  JMPTB int 3
        public_4abbd5 : nop
        mov ecx, esi
        call public_4ae4b0
        jmp public_4abc00
        public_4abbde : nop
        mov ecx, esi
        call public_4ae650
        jmp public_4abc00
        public_4abbe7 : nop
        mov ecx, esi
        call public_4ae770
        jmp public_4abc00
        public_4abbf0 : nop
        mov ecx, esi
        call public_4ae890
        jmp public_4abc00
        public_4abbf9 : nop
        mov ecx, esi
        call public_4ae9a0
        public_4abc00 : nop
        cmp byte ptr ds : [esi+0x8A1], bl
        sete cl
        mov byte ptr ds : [esi+0x8A1], cl
        mov byte ptr ds : [esi+0x8A0], bl
        public_4abc15 : nop
        mov al, byte ptr ds : [esi+0x8A1]
        fld qword ptr ds : [esi+0x890]
        cmp al, bl
        je public_4abc2b
        fadd qword ptr ds : [public_5d5058]
        public_4abc2b : nop
        lea edx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+0x1C]
        push edx
        lea eax, ss:[esp+0x74]
        push eax
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        call dword ptr ds : [public_5c63fc]
        mov ecx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        add esp, 8
        lea ecx, ss:[esp+0x70]
        push ecx
        mov ecx, dword ptr ds : [esi+0x338]
        mov ecx, dword ptr ds : [ecx+0x84]
        push ecx
        push eax
        call dword ptr ds : [edx+0x94]
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi+0x338]
        mov edx, dword ptr ds : [edx+0x84]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        jmp public_4abcd7
        public_4abc94 : nop
        mov eax, dword ptr ds : [esi+0x7F4]
        cmp eax, 4
        ja public_4abcd1
/*FIXUP jmp dword ptr ds : [eax*4+public_4abd98] @0x4abc9f*/
  JMPTB cmp eax, 0
  JMPTB je public_4abca6
  JMPTB cmp eax, 1
  JMPTB je public_4abcaf
  JMPTB cmp eax, 2
  JMPTB je public_4abcb8
  JMPTB cmp eax, 3
  JMPTB je public_4abcc1
  JMPTB cmp eax, 4
  JMPTB je public_4abcca
  JMPTB int 3
        public_4abca6 : nop
        mov ecx, esi
        call public_4ae4b0
        jmp public_4abcd1
        public_4abcaf : nop
        mov ecx, esi
        call public_4ae650
        jmp public_4abcd1
        public_4abcb8 : nop
        mov ecx, esi
        call public_4ae770
        jmp public_4abcd1
        public_4abcc1 : nop
        mov ecx, esi
        call public_4ae890
        jmp public_4abcd1
        public_4abcca : nop
        mov ecx, esi
        call public_4ae9a0
        public_4abcd1 : nop
        mov byte ptr ds : [esi+0x8A0], bl
        public_4abcd7 : nop
        cmp dword ptr ds : [esi+0x7F4], 4
        jne public_4abd10
        cmp byte ptr ds : [esi+0x8A0], bl
        jne public_4abd10
        fld qword ptr ss : [esp+0x10]
        fmul qword ptr ds : [esi+0x8B0]
        fadd qword ptr ds : [esi+0x8A8]
        fst qword ptr ds : [esi+0x8A8]
        call public_5b7ec0
        mov ecx, dword ptr ds : [esi+0x7F0]
        push eax
        push ebx
        call public_5798b0
        public_4abd10 : nop
        cmp byte ptr ds : [esi+0x84D], bl
        je public_4abd7b
        fld qword ptr ds : [esi+0x8C0]
        fsub qword ptr ss : [esp+0x10]
        fst qword ptr ss : [esp+0x10]
        fst qword ptr ds : [esi+0x8C0]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        jp public_4abd48
        mov ecx, esi
        call public_4b2700
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_4abd48 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        lea edx, ss:[esp+0x78]
/*FIXUP push offset public_5d5048 @0x4abd56*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5048
        push edx
        call dword ptr ds : [public_5c70ec]
        mov ecx, dword ptr ds : [esi+0x4F0]
        mov eax, dword ptr ds : [ecx]
        add esp, 0x10
        push ebx
        lea edx, ss:[esp+0x74]
        push edx
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        public_4abd7b : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x4ab6e0)
        ASM_EXPORT_ENTRY_FIRST(0x4abbf9, public_4abbf9)
        ASM_EXPORT_ENTRY_LAST(0x4abcca, public_4abcca)
    }
}

#undef public_4ab74a
#undef public_4ab754
#undef public_4ab79c
#undef public_4ab7a9
#undef public_4ab7ca
#undef public_4ab816
#undef public_4ab87d
#undef public_4ab8bd
#undef public_4ab938
#undef public_4ab968
#undef public_4ab9a5
#undef public_4ab9b1
#undef public_4ab9da
#undef public_4aba00
#undef public_4aba67
#undef public_4abaa7
#undef public_4abae4
#undef public_4abb00
#undef public_4abb2b
#undef public_4abb5b
#undef public_4abb94
#undef public_4abbd5
#undef public_4abbde
#undef public_4abbe7
#undef public_4abbf0
#undef public_4abbf9
#undef public_4abc00
#undef public_4abc15
#undef public_4abc2b
#undef public_4abc94
#undef public_4abca6
#undef public_4abcaf
#undef public_4abcb8
#undef public_4abcc1
#undef public_4abcca
#undef public_4abcd1
#undef public_4abcd7
#undef public_4abd10
#undef public_4abd48
#undef public_4abd7b

#pragma init_seg(compiler)
extern "C" void const* const public_4abbf9 = __AsmFindLabelExport(&internal_4ab6e0, 0x4abbf9);
extern "C" void const* const public_4abcca = __AsmFindLabelExport(&internal_4ab6e0, 0x4abcca);
