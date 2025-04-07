#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6617a80);
CLANG_FORWARD_PROC_SYMBOL(public_661ad50);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_661597a _public_661597a
#define public_66159aa _public_66159aa
#define public_66159d7 _public_66159d7
#define public_66159fd _public_66159fd
#define public_6615a26 _public_6615a26
#define public_6615a42 _public_6615a42
#define public_6615a4a _public_6615a4a
#define public_6615a73 _public_6615a73
#define public_6615aab _public_6615aab
#define public_6615acb _public_6615acb
#define public_6615ad4 _public_6615ad4

PROC_DECLARE(0x6615950, internal_6615950, public_6615950);
extern "C" NAKED register_t __cdecl internal_6615950()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        or ebx, 0xFFFFFFFF
        test edi, edi
        je public_6615ad4
        mov eax, dword ptr ss : [esp+0x20]
        dec eax
        cmp eax, 7
        ja public_6615a4a
/*FIXUP jmp dword ptr ds : [eax*4+public_6615ae0] @0x6615973*/
  JMPTB cmp eax, 0
  JMPTB je public_661597a
  JMPTB cmp eax, 1
  JMPTB je public_66159aa
  JMPTB cmp eax, 2
  JMPTB je public_6615a4a
  JMPTB cmp eax, 3
  JMPTB je public_66159d7
  JMPTB cmp eax, 4
  JMPTB je public_6615a4a
  JMPTB cmp eax, 5
  JMPTB je public_66159fd
  JMPTB cmp eax, 6
  JMPTB je public_6615a4a
  JMPTB cmp eax, 7
  JMPTB je public_6615a26
  JMPTB int 3
        public_661597a : nop
        push 0x44
        call public_66281dc
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6615a42
        push edi
        mov ecx, esi
        call public_661ad50
        mov eax, esi
        mov dword ptr ds : [esi+0x40], ebx
        mov dword ptr ds : [esi], offset public_66291a4
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_6615a73
        public_66159aa : nop
        push 0x48
        call public_66281dc
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6615a42
        push edi
        mov ecx, esi
        call public_661ad50
        mov eax, esi
        mov dword ptr ds : [esi], offset public_6629168
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_6615a73
        public_66159d7 : nop
        push 0x4C
        call public_66281dc
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6615a42
        push edi
        mov ecx, esi
        call public_661ad50
        mov eax, esi
        mov dword ptr ds : [esi], offset public_662912c
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_6615a73
        public_66159fd : nop
        push 0x94
        call public_66281dc
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6615a42
        push edi
        mov ecx, esi
        call public_661ad50
        mov eax, esi
        mov dword ptr ds : [esi], offset public_66290f0
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_6615a73
        public_6615a26 : nop
        push 0x3C
        call public_66281dc
        add esp, 4
        test eax, eax
        je public_6615a42
        push edi
        mov ecx, eax
        call public_661ad50
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_6615a73
        public_6615a42 : nop
        xor eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_6615a73
        public_6615a4a : nop
        mov ecx, dword ptr ds : [public_6629004]
/*FIXUP push offset public_662a254 @0x6615a50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a254
        push 0x44D
        mov eax, 0x100000
/*FIXUP push offset public_662a208 @0x6615a5f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a208
/*FIXUP push offset public_662a1e8 @0x6615a64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a1e8
        push eax
        call dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 0x14
        public_6615a73 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x1C]
        test al, al
        je public_6615aab
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x1C]
        lea eax, ss:[esp+0xC]
        push edx
        push eax
        add ecx, 0x20
        call public_6617a80
        pop edi
        pop esi
        mov eax, dword ptr ss : [esp+0x14]
        pop ebx
        add esp, 8
        ret 0x14
        public_6615aab : nop
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        mov edi, eax
        je public_6615ad4
        lea esi, ds:[eax+0x24]
        mov eax, dword ptr ds : [eax+0x24]
        test eax, eax
        je public_6615acb
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi], 0
        public_6615acb : nop
        push edi
        call public_66281d0
        add esp, 4
        public_6615ad4 : nop
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        add esp, 8
        ret 0x14
        UNREACHABLE_TRAP(0x6615950)
        ASM_EXPORT_ENTRY_FIRST(0x661597a, public_661597a)
        ASM_EXPORT_ENTRY(0x66159aa, public_66159aa)
        ASM_EXPORT_ENTRY(0x66159d7, public_66159d7)
        ASM_EXPORT_ENTRY(0x66159fd, public_66159fd)
        ASM_EXPORT_ENTRY(0x6615a26, public_6615a26)
        ASM_EXPORT_ENTRY_LAST(0x6615a4a, public_6615a4a)
    }
}

#undef public_661597a
#undef public_66159aa
#undef public_66159d7
#undef public_66159fd
#undef public_6615a26
#undef public_6615a42
#undef public_6615a4a
#undef public_6615a73
#undef public_6615aab
#undef public_6615acb
#undef public_6615ad4

#pragma init_seg(compiler)
extern "C" void const* const public_661597a = __AsmFindLabelExport(&internal_6615950, 0x661597a);
extern "C" void const* const public_66159aa = __AsmFindLabelExport(&internal_6615950, 0x66159aa);
extern "C" void const* const public_66159d7 = __AsmFindLabelExport(&internal_6615950, 0x66159d7);
extern "C" void const* const public_66159fd = __AsmFindLabelExport(&internal_6615950, 0x66159fd);
extern "C" void const* const public_6615a26 = __AsmFindLabelExport(&internal_6615950, 0x6615a26);
extern "C" void const* const public_6615a4a = __AsmFindLabelExport(&internal_6615950, 0x6615a4a);
