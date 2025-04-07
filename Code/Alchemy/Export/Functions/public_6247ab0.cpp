#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_620b700);
CLANG_FORWARD_PROC_SYMBOL(public_620b710);
CLANG_FORWARD_PROC_SYMBOL(public_620b730);
CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247ab8 _public_6247ab8
#define public_6247ac6 _public_6247ac6
#define public_6247ace _public_6247ace
#define public_6247ad6 _public_6247ad6
#define public_6247ade _public_6247ade

PROC_DECLARE(0x6247ab0, internal_6247ab0, public_6247ab0);
/* CHUNK of public_620d1f0 */
extern "C" NAKED register_t __cdecl internal_6247ab0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_620ce80
        public_6247ab8 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 0xB8
        jmp public_620b700
        public_6247ac6 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_620b730
        public_6247ace : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_620b6f0
        public_6247ad6 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_620b710
        public_6247ade : nop
        mov eax, offset public_62508e4
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247ab0)
        ASM_EXPORT_ENTRY_FIRST(0x6247ab8, public_6247ab8)
        ASM_EXPORT_ENTRY(0x6247ac6, public_6247ac6)
        ASM_EXPORT_ENTRY(0x6247ace, public_6247ace)
        ASM_EXPORT_ENTRY(0x6247ad6, public_6247ad6)
        ASM_EXPORT_ENTRY_LAST(0x6247ade, public_6247ade)
    }
}

#undef public_6247ab8
#undef public_6247ac6
#undef public_6247ace
#undef public_6247ad6
#undef public_6247ade

#pragma init_seg(compiler)
extern "C" void const* const public_6247ab8 = __AsmFindLabelExport(&internal_6247ab0, 0x6247ab8);
extern "C" void const* const public_6247ac6 = __AsmFindLabelExport(&internal_6247ab0, 0x6247ac6);
extern "C" void const* const public_6247ace = __AsmFindLabelExport(&internal_6247ab0, 0x6247ace);
extern "C" void const* const public_6247ad6 = __AsmFindLabelExport(&internal_6247ab0, 0x6247ad6);
extern "C" void const* const public_6247ade = __AsmFindLabelExport(&internal_6247ab0, 0x6247ade);
