#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d13660);
CLANG_FORWARD_PROC_SYMBOL(public_6d13720);
CLANG_FORWARD_PROC_SYMBOL(public_6d137e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d138a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61c7b _public_6d61c7b
#define public_6d61c86 _public_6d61c86
#define public_6d61c91 _public_6d61c91
#define public_6d61c9c _public_6d61c9c
#define public_6d61ca7 _public_6d61ca7
#define public_6d61cb2 _public_6d61cb2
#define public_6d61cc0 _public_6d61cc0

PROC_DECLARE(0x6d61c70, internal_6d61c70, public_6d61c70);
/* CHUNK of public_6d15640 */
extern "C" NAKED register_t __cdecl internal_6d61c70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 8
        jmp public_6d13660
        public_6d61c7b : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x1C
        jmp public_6d13720
        public_6d61c86 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x30
        jmp public_6d13720
        public_6d61c91 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x44
        jmp public_6d137e0
        public_6d61c9c : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x58
        jmp public_6d138a0
        public_6d61ca7 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x6C
        jmp public_6d138a0
        public_6d61cb2 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x80
        jmp public_6d137e0
        public_6d61cc0 : nop
        mov eax, offset public_6d729b0
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61c70)
        ASM_EXPORT_ENTRY_FIRST(0x6d61c7b, public_6d61c7b)
        ASM_EXPORT_ENTRY(0x6d61c86, public_6d61c86)
        ASM_EXPORT_ENTRY(0x6d61c91, public_6d61c91)
        ASM_EXPORT_ENTRY(0x6d61c9c, public_6d61c9c)
        ASM_EXPORT_ENTRY(0x6d61ca7, public_6d61ca7)
        ASM_EXPORT_ENTRY(0x6d61cb2, public_6d61cb2)
        ASM_EXPORT_ENTRY_LAST(0x6d61cc0, public_6d61cc0)
    }
}

#undef public_6d61c7b
#undef public_6d61c86
#undef public_6d61c91
#undef public_6d61c9c
#undef public_6d61ca7
#undef public_6d61cb2
#undef public_6d61cc0

#pragma init_seg(compiler)
extern "C" void const* const public_6d61c7b = __AsmFindLabelExport(&internal_6d61c70, 0x6d61c7b);
extern "C" void const* const public_6d61c86 = __AsmFindLabelExport(&internal_6d61c70, 0x6d61c86);
extern "C" void const* const public_6d61c91 = __AsmFindLabelExport(&internal_6d61c70, 0x6d61c91);
extern "C" void const* const public_6d61c9c = __AsmFindLabelExport(&internal_6d61c70, 0x6d61c9c);
extern "C" void const* const public_6d61ca7 = __AsmFindLabelExport(&internal_6d61c70, 0x6d61ca7);
extern "C" void const* const public_6d61cb2 = __AsmFindLabelExport(&internal_6d61c70, 0x6d61cb2);
extern "C" void const* const public_6d61cc0 = __AsmFindLabelExport(&internal_6d61c70, 0x6d61cc0);
