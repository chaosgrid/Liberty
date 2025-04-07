#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f00870);
CLANG_FORWARD_PROC_SYMBOL(public_6f00b10);
CLANG_FORWARD_PROC_SYMBOL(public_6f01600);
CLANG_FORWARD_PROC_SYMBOL(public_6f019c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f01a30);
CLANG_FORWARD_PROC_SYMBOL(public_6f01ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f020c0);

#define public_6f01619 _public_6f01619
#define public_6f0163a _public_6f0163a
#define public_6f01667 _public_6f01667
#define public_6f016ce _public_6f016ce
#define public_6f016d0 _public_6f016d0
#define public_6f016eb _public_6f016eb
#define public_6f016ed _public_6f016ed
#define public_6f01719 _public_6f01719
#define public_6f01743 _public_6f01743
#define public_6f01745 _public_6f01745
#define public_6f01773 _public_6f01773
#define public_6f0177b _public_6f0177b
#define public_6f01783 _public_6f01783
#define public_6f01789 _public_6f01789
#define public_6f01792 _public_6f01792
#define public_6f017d4 _public_6f017d4
#define public_6f017fb _public_6f017fb
#define public_6f0181c _public_6f0181c
#define public_6f0181e _public_6f0181e
#define public_6f01844 _public_6f01844
#define public_6f0186e _public_6f0186e
#define public_6f01870 _public_6f01870
#define public_6f018e0 _public_6f018e0
#define public_6f018ee _public_6f018ee
#define public_6f01905 _public_6f01905
#define public_6f0193c _public_6f0193c
#define public_6f01988 _public_6f01988
#define public_6f01997 _public_6f01997

PROC_DECLARE(0x6f01600, internal_6f01600, public_6f01600);
extern "C" NAKED register_t __cdecl internal_6f01600()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        dec eax
        cmp eax, 3
        push esi
        push edi
        ja public_6f01905
/*FIXUP jmp dword ptr ds : [eax*4+public_6f0199c] @0x6f01612*/
  JMPTB cmp eax, 0
  JMPTB je public_6f0163a
  JMPTB cmp eax, 1
  JMPTB je public_6f01619
  JMPTB cmp eax, 2
  JMPTB je public_6f01844
  JMPTB cmp eax, 3
  JMPTB je public_6f01719
  JMPTB int 3
        public_6f01619 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        push eax
        push ecx
        call public_6f00870
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6f0163a : nop
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0x48]
        mov ebx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [esi+0x44]
        push eax
        push ebx
        push ecx
        push 0x23
        call public_6f020c0
        mov edi, dword ptr ss : [esp+0x28]
        add esp, 0x10
        test eax, eax
        je public_6f01667
        push 0
        push eax
        mov ecx, edi
        call public_6f01ab0
        public_6f01667 : nop
        push 0
        push ebx
        push esi
        push 0x25
        push edi
        call public_6f00b10
        push 1
        push ebx
        push esi
        push 8
        push edi
        call public_6f00b10
        push 2
        push ebx
        push esi
        push 0x32
        push edi
        call public_6f00b10
        push 3
        push ebx
        push esi
        push 0x34
        push edi
        call public_6f00b10
        mov ebp, dword ptr ds : [esi+0x58]
        mov edx, dword ptr ds : [esi+0x40]
        add esp, 0x50
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x2C], edx
        call dword ptr ds : [public_6fb35e0]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [ebp+8]
        add esp, 8
        cmp edx, eax
        push 2
        push ebx
        push esi
        jae public_6f016ce
        push 0x35
        jmp public_6f016d0
        public_6f016ce : nop
        push 0x39
        public_6f016d0 : nop
        push edi
        call public_6f00b10
        add esp, 0x14
        call dword ptr ds : [public_6fb36a0]
        test al, al
        push 3
        push ebx
        push esi
        je public_6f016eb
        push 0x3A
        jmp public_6f016ed
        public_6f016eb : nop
        push 0x3B
        public_6f016ed : nop
        push edi
        call public_6f00b10
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 0x14
        push eax
        lea ecx, ds:[edi+0x228]
        push ecx
        call public_6f019c0
        add esp, 8
        mov dword ptr ds : [edi+0x21C], 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6f01719 : nop
        mov esi, dword ptr ss : [esp+0x14]
        lea edx, ds:[esi+0x20]
        push edx
/*FIXUP push offset public_6fb7d8c @0x6f01721*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7d8c
        call dword ptr ds : [public_6fb3294]
        mov ebx, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x20]
        add esp, 8
        test eax, eax
        push 0
        push ebx
        push esi
        jne public_6f01743
        push 0x20
        jmp public_6f01745
        public_6f01743 : nop
        push 0x22
        public_6f01745 : nop
        push edi
        call public_6f00b10
        add esp, 0x14
        push 0
        push ebx
        push esi
        push 0x25
        push edi
        call public_6f00b10
        mov ebp, dword ptr ds : [esi+0x58]
        mov eax, dword ptr ss : [ebp+0xC]
        add esp, 0x14
        cmp eax, 3
        mov dword ptr ss : [esp+0x1C], ebp
        ja public_6f01792
/*FIXUP jmp dword ptr ds : [eax*4+public_6f019ac] @0x6f0176c*/
  JMPTB cmp eax, 0
  JMPTB je public_6f01773
  JMPTB cmp eax, 1
  JMPTB je public_6f01773
  JMPTB cmp eax, 2
  JMPTB je public_6f0177b
  JMPTB cmp eax, 3
  JMPTB je public_6f01783
  JMPTB int 3
        public_6f01773 : nop
        push 0
        push ebx
        push esi
        push 0x26
        jmp public_6f01789
        public_6f0177b : nop
        push 0
        push ebx
        push esi
        push 0x27
        jmp public_6f01789
        public_6f01783 : nop
        push 0
        push ebx
        push esi
        push 0x28
        public_6f01789 : nop
        push edi
        call public_6f00b10
        add esp, 0x14
        public_6f01792 : nop
        push 1
        push ebx
        push esi
        push 8
        push edi
        call public_6f00b10
        mov eax, dword ptr ds : [esi+0x40]
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        mov dword ptr ss : [esp+0x40], eax
        call dword ptr ds : [public_6fb35e0]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [ebp]
        add esp, 0x1C
        cmp eax, ecx
        jae public_6f017d4
        push 2
        push ebx
        push esi
        push 0x35
        push edi
        call public_6f00b10
        add esp, 0x14
        jmp public_6f017fb
        public_6f017d4 : nop
        push 4
        push ebx
        push esi
        push 8
        push edi
        call public_6f00b10
        push 2
        push ebx
        push esi
        push 0x38
        push edi
        call public_6f00b10
        push 2
        push ebx
        push esi
        push 0x39
        push edi
        call public_6f00b10
        add esp, 0x3C
        public_6f017fb : nop
        push 3
        push ebx
        push esi
        push 0x33
        push edi
        call public_6f00b10
        add esp, 0x14
        call dword ptr ds : [public_6fb36a0]
        test al, al
        push 3
        push ebx
        push esi
        je public_6f0181c
        push 0x3A
        jmp public_6f0181e
        public_6f0181c : nop
        push 0x3B
        public_6f0181e : nop
        push edi
        call public_6f00b10
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 0x14
        push ecx
        push edi
        call public_6f01a30
        add esp, 8
        mov dword ptr ds : [edi+0x21C], 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6f01844 : nop
        mov esi, dword ptr ss : [esp+0x14]
        lea edx, ds:[esi+0x20]
        push edx
/*FIXUP push offset public_6fb7d8c @0x6f0184c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7d8c
        call dword ptr ds : [public_6fb3294]
        mov ebx, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x20]
        add esp, 8
        test eax, eax
        push 0
        push ebx
        push esi
        jne public_6f0186e
        push 0x1F
        jmp public_6f01870
        public_6f0186e : nop
        push 0x21
        public_6f01870 : nop
        push edi
        call public_6f00b10
        add esp, 0x14
        push 0
        push ebx
        push esi
        push 0x25
        push edi
        call public_6f00b10
        push 0
        push ebx
        push esi
        push 0x36
        push edi
        call public_6f00b10
        push 1
        push ebx
        push esi
        push 8
        push edi
        call public_6f00b10
        push 0
        push ebx
        push esi
        push 0x38
        push edi
        call public_6f00b10
        add esp, 0x50
        push 0
        push ebx
        push esi
        push 0x39
        push edi
        call public_6f00b10
        mov esi, dword ptr ds : [esi+0x58]
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 0x14
        lea ebx, ds:[edi+0x240]
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_6fb303c]
        mov eax, dword ptr ds : [esi+0x10]
        add esi, 0x10
        test eax, eax
        je public_6f018ee
        mov ebp, dword ptr ds : [public_6fb307c]
        public_6f018e0 : nop
        push eax
        mov ecx, ebx
        add esi, 4
        call ebp
        mov eax, dword ptr ds : [esi]
        test eax, eax
        jne public_6f018e0
        public_6f018ee : nop
        mov ecx, ebx
        call dword ptr ds : [public_6fb3038]
        mov dword ptr ds : [edi+0x21C], 2
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6f01905 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [public_6fb3294]
        lea esi, ds:[ebx+0x20]
        push esi
/*FIXUP push offset public_6fb7d8c @0x6f01913*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7d8c
        call edi
        add esp, 8
        test eax, eax
        jne public_6f0193c
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        push ebx
        push 5
        push edx
        call public_6f00b10
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6f0193c : nop
        push esi
/*FIXUP push offset public_6fb7d98 @0x6f0193d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7d98
        call edi
        add esp, 8
        test eax, eax
        je public_6f01997
        push esi
/*FIXUP push offset public_6fb7da0 @0x6f0194c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7da0
        call edi
        add esp, 8
        test eax, eax
        je public_6f01997
        push esi
/*FIXUP push offset public_6fb7dac @0x6f0195b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7dac
        call edi
        add esp, 8
        test eax, eax
        je public_6f01997
        mov al, byte ptr ss : [esp+0x24]
        test al, al
        mov esi, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x18]
        jne public_6f01988
        push 0
        push esi
        push ebx
        push 1
        push edi
        call public_6f00b10
        add esp, 0x14
        public_6f01988 : nop
        push 0
        push esi
        push ebx
        push 2
        push edi
        call public_6f00b10
        add esp, 0x14
        public_6f01997 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f01600)
        ASM_EXPORT_ENTRY_FIRST(0x6f01619, public_6f01619)
        ASM_EXPORT_ENTRY(0x6f0163a, public_6f0163a)
        ASM_EXPORT_ENTRY(0x6f01719, public_6f01719)
        ASM_EXPORT_ENTRY(0x6f01773, public_6f01773)
        ASM_EXPORT_ENTRY(0x6f0177b, public_6f0177b)
        ASM_EXPORT_ENTRY(0x6f01783, public_6f01783)
        ASM_EXPORT_ENTRY_LAST(0x6f01844, public_6f01844)
    }
}

#undef public_6f01619
#undef public_6f0163a
#undef public_6f01667
#undef public_6f016ce
#undef public_6f016d0
#undef public_6f016eb
#undef public_6f016ed
#undef public_6f01719
#undef public_6f01743
#undef public_6f01745
#undef public_6f01773
#undef public_6f0177b
#undef public_6f01783
#undef public_6f01789
#undef public_6f01792
#undef public_6f017d4
#undef public_6f017fb
#undef public_6f0181c
#undef public_6f0181e
#undef public_6f01844
#undef public_6f0186e
#undef public_6f01870
#undef public_6f018e0
#undef public_6f018ee
#undef public_6f01905
#undef public_6f0193c
#undef public_6f01988
#undef public_6f01997

#pragma init_seg(compiler)
extern "C" void const* const public_6f01619 = __AsmFindLabelExport(&internal_6f01600, 0x6f01619);
extern "C" void const* const public_6f0163a = __AsmFindLabelExport(&internal_6f01600, 0x6f0163a);
extern "C" void const* const public_6f01719 = __AsmFindLabelExport(&internal_6f01600, 0x6f01719);
extern "C" void const* const public_6f01773 = __AsmFindLabelExport(&internal_6f01600, 0x6f01773);
extern "C" void const* const public_6f0177b = __AsmFindLabelExport(&internal_6f01600, 0x6f0177b);
extern "C" void const* const public_6f01783 = __AsmFindLabelExport(&internal_6f01600, 0x6f01783);
extern "C" void const* const public_6f01844 = __AsmFindLabelExport(&internal_6f01600, 0x6f01844);
