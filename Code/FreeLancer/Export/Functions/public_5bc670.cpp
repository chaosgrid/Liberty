#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dc50);
CLANG_FORWARD_PROC_SYMBOL(public_43d980);
CLANG_FORWARD_PROC_SYMBOL(public_48e5f0);
CLANG_FORWARD_PROC_SYMBOL(public_4a2d30);
CLANG_FORWARD_PROC_SYMBOL(public_4a2d80);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

#define public_5bc678 _public_5bc678
#define public_5bc692 _public_5bc692
#define public_5bc699 _public_5bc699
#define public_5bc6a1 _public_5bc6a1
#define public_5bc6be _public_5bc6be
#define public_5bc6c8 _public_5bc6c8
#define public_5bc6d3 _public_5bc6d3
#define public_5bc6e1 _public_5bc6e1
#define public_5bc6ef _public_5bc6ef
#define public_5bc6fd _public_5bc6fd
#define public_5bc70b _public_5bc70b
#define public_5bc719 _public_5bc719
#define public_5bc727 _public_5bc727
#define public_5bc735 _public_5bc735
#define public_5bc743 _public_5bc743
#define public_5bc751 _public_5bc751
#define public_5bc75f _public_5bc75f
#define public_5bc777 _public_5bc777
#define public_5bc785 _public_5bc785
#define public_5bc793 _public_5bc793
#define public_5bc7a1 _public_5bc7a1
#define public_5bc7af _public_5bc7af
#define public_5bc7bd _public_5bc7bd
#define public_5bc7cb _public_5bc7cb
#define public_5bc7d9 _public_5bc7d9

PROC_DECLARE(0x5bc670, internal_5bc670, public_5bc670);
/* CHUNK of public_48e650 */
extern "C" NAKED register_t __cdecl internal_5bc670()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_59fa50
        public_5bc678 : nop
        cmp dword ptr ss : [ebp-0x14], 0
        je public_5bc692
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 0x32C
        mov dword ptr ss : [ebp-0x1C], eax
        jmp public_5bc699
        public_5bc692 : nop
        mov dword ptr ss : [ebp-0x1C], 0
        public_5bc699 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_576010
        public_5bc6a1 : nop
        cmp dword ptr ss : [ebp-0x14], 0
        je public_5bc6be
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 0x330
        mov dword ptr ss : [ebp-0x128], eax
        jmp public_5bc6c8
        public_5bc6be : nop
        mov dword ptr ss : [ebp-0x128], 0
        public_5bc6c8 : nop
        mov ecx, dword ptr ss : [ebp-0x128]
        jmp public_43d980
        public_5bc6d3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x350
        jmp public_59ef20
        public_5bc6e1 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x378
        jmp public_59ef20
        public_5bc6ef : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x3A0
        jmp public_59ef20
        public_5bc6fd : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x3FC
        jmp public_4a2d30
        public_5bc70b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x80C
        jmp public_4a2d30
        public_5bc719 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x848
        jmp public_4de730
        public_5bc727 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x858
        jmp public_4de730
        public_5bc735 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x868
        jmp public_4de730
        public_5bc743 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x880
        jmp public_41dc50
        public_5bc751 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x89C
        jmp public_59ef20
/*FIXUP public_5bc75f : nop
        push offset _public_59ef20 @0x5bc75f*/
  FIXUP public_5bc75f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_59ef20
        push 0xA
        push 0x28
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 0x930
        push eax
        call public_5b7ec6
        ret 
        public_5bc777 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xB58
        jmp public_4de730
        public_5bc785 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xB8C
        jmp public_4de730
        public_5bc793 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xC1C
        jmp public_59ef20
        public_5bc7a1 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xC80
        jmp public_48e5f0
        public_5bc7af : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xFD4
        jmp public_4de730
        public_5bc7bd : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xFE4
        jmp public_4a2d80
        public_5bc7cb : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xFF4
        jmp public_4a2d80
        public_5bc7d9 : nop
        mov eax, offset public_5f6a64
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bc670)
        ASM_EXPORT_ENTRY_FIRST(0x5bc678, public_5bc678)
        ASM_EXPORT_ENTRY(0x5bc692, public_5bc692)
        ASM_EXPORT_ENTRY(0x5bc699, public_5bc699)
        ASM_EXPORT_ENTRY(0x5bc6a1, public_5bc6a1)
        ASM_EXPORT_ENTRY(0x5bc6be, public_5bc6be)
        ASM_EXPORT_ENTRY(0x5bc6c8, public_5bc6c8)
        ASM_EXPORT_ENTRY(0x5bc6d3, public_5bc6d3)
        ASM_EXPORT_ENTRY(0x5bc6e1, public_5bc6e1)
        ASM_EXPORT_ENTRY(0x5bc6ef, public_5bc6ef)
        ASM_EXPORT_ENTRY(0x5bc6fd, public_5bc6fd)
        ASM_EXPORT_ENTRY(0x5bc70b, public_5bc70b)
        ASM_EXPORT_ENTRY(0x5bc719, public_5bc719)
        ASM_EXPORT_ENTRY(0x5bc727, public_5bc727)
        ASM_EXPORT_ENTRY(0x5bc735, public_5bc735)
        ASM_EXPORT_ENTRY(0x5bc743, public_5bc743)
        ASM_EXPORT_ENTRY(0x5bc751, public_5bc751)
        ASM_EXPORT_ENTRY(0x5bc75f, public_5bc75f)
        ASM_EXPORT_ENTRY(0x5bc777, public_5bc777)
        ASM_EXPORT_ENTRY(0x5bc785, public_5bc785)
        ASM_EXPORT_ENTRY(0x5bc793, public_5bc793)
        ASM_EXPORT_ENTRY(0x5bc7a1, public_5bc7a1)
        ASM_EXPORT_ENTRY(0x5bc7af, public_5bc7af)
        ASM_EXPORT_ENTRY(0x5bc7bd, public_5bc7bd)
        ASM_EXPORT_ENTRY(0x5bc7cb, public_5bc7cb)
        ASM_EXPORT_ENTRY_LAST(0x5bc7d9, public_5bc7d9)
    }
}

#undef public_5bc678
#undef public_5bc692
#undef public_5bc699
#undef public_5bc6a1
#undef public_5bc6be
#undef public_5bc6c8
#undef public_5bc6d3
#undef public_5bc6e1
#undef public_5bc6ef
#undef public_5bc6fd
#undef public_5bc70b
#undef public_5bc719
#undef public_5bc727
#undef public_5bc735
#undef public_5bc743
#undef public_5bc751
#undef public_5bc75f
#undef public_5bc777
#undef public_5bc785
#undef public_5bc793
#undef public_5bc7a1
#undef public_5bc7af
#undef public_5bc7bd
#undef public_5bc7cb
#undef public_5bc7d9

#pragma init_seg(compiler)
extern "C" void const* const public_5bc678 = __AsmFindLabelExport(&internal_5bc670, 0x5bc678);
extern "C" void const* const public_5bc692 = __AsmFindLabelExport(&internal_5bc670, 0x5bc692);
extern "C" void const* const public_5bc699 = __AsmFindLabelExport(&internal_5bc670, 0x5bc699);
extern "C" void const* const public_5bc6a1 = __AsmFindLabelExport(&internal_5bc670, 0x5bc6a1);
extern "C" void const* const public_5bc6be = __AsmFindLabelExport(&internal_5bc670, 0x5bc6be);
extern "C" void const* const public_5bc6c8 = __AsmFindLabelExport(&internal_5bc670, 0x5bc6c8);
extern "C" void const* const public_5bc6d3 = __AsmFindLabelExport(&internal_5bc670, 0x5bc6d3);
extern "C" void const* const public_5bc6e1 = __AsmFindLabelExport(&internal_5bc670, 0x5bc6e1);
extern "C" void const* const public_5bc6ef = __AsmFindLabelExport(&internal_5bc670, 0x5bc6ef);
extern "C" void const* const public_5bc6fd = __AsmFindLabelExport(&internal_5bc670, 0x5bc6fd);
extern "C" void const* const public_5bc70b = __AsmFindLabelExport(&internal_5bc670, 0x5bc70b);
extern "C" void const* const public_5bc719 = __AsmFindLabelExport(&internal_5bc670, 0x5bc719);
extern "C" void const* const public_5bc727 = __AsmFindLabelExport(&internal_5bc670, 0x5bc727);
extern "C" void const* const public_5bc735 = __AsmFindLabelExport(&internal_5bc670, 0x5bc735);
extern "C" void const* const public_5bc743 = __AsmFindLabelExport(&internal_5bc670, 0x5bc743);
extern "C" void const* const public_5bc751 = __AsmFindLabelExport(&internal_5bc670, 0x5bc751);
extern "C" void const* const public_5bc75f = __AsmFindLabelExport(&internal_5bc670, 0x5bc75f);
extern "C" void const* const public_5bc777 = __AsmFindLabelExport(&internal_5bc670, 0x5bc777);
extern "C" void const* const public_5bc785 = __AsmFindLabelExport(&internal_5bc670, 0x5bc785);
extern "C" void const* const public_5bc793 = __AsmFindLabelExport(&internal_5bc670, 0x5bc793);
extern "C" void const* const public_5bc7a1 = __AsmFindLabelExport(&internal_5bc670, 0x5bc7a1);
extern "C" void const* const public_5bc7af = __AsmFindLabelExport(&internal_5bc670, 0x5bc7af);
extern "C" void const* const public_5bc7bd = __AsmFindLabelExport(&internal_5bc670, 0x5bc7bd);
extern "C" void const* const public_5bc7cb = __AsmFindLabelExport(&internal_5bc670, 0x5bc7cb);
extern "C" void const* const public_5bc7d9 = __AsmFindLabelExport(&internal_5bc670, 0x5bc7d9);
