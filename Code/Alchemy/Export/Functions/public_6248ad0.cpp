#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62022b0);
CLANG_FORWARD_PROC_SYMBOL(public_620d670);
CLANG_FORWARD_PROC_SYMBOL(public_621bcc0);
CLANG_FORWARD_PROC_SYMBOL(public_621f5f0);
CLANG_FORWARD_PROC_SYMBOL(public_6220d50);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248ad8 _public_6248ad8
#define public_6248ae0 _public_6248ae0
#define public_6248ae8 _public_6248ae8
#define public_6248af0 _public_6248af0
#define public_6248af8 _public_6248af8
#define public_6248b00 _public_6248b00
#define public_6248b08 _public_6248b08

PROC_DECLARE(0x6248ad0, internal_6248ad0, public_6248ad0);
/* CHUNK of public_621eed0 */
extern "C" NAKED register_t __cdecl internal_6248ad0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x74]
        jmp public_62022b0
        public_6248ad8 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_621f5f0
        public_6248ae0 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp public_621f5f0
        public_6248ae8 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_621f5f0
        public_6248af0 : nop
        lea ecx, ss:[ebp+8]
        jmp public_6220d50
        public_6248af8 : nop
        lea ecx, ss:[ebp+4]
        jmp public_621bcc0
        public_6248b00 : nop
        lea ecx, ss:[ebp-0x68]
        jmp public_620d670
        public_6248b08 : nop
        mov eax, offset public_62519b8
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248ad0)
        ASM_EXPORT_ENTRY_FIRST(0x6248ad8, public_6248ad8)
        ASM_EXPORT_ENTRY(0x6248ae0, public_6248ae0)
        ASM_EXPORT_ENTRY(0x6248ae8, public_6248ae8)
        ASM_EXPORT_ENTRY(0x6248af0, public_6248af0)
        ASM_EXPORT_ENTRY(0x6248af8, public_6248af8)
        ASM_EXPORT_ENTRY(0x6248b00, public_6248b00)
        ASM_EXPORT_ENTRY_LAST(0x6248b08, public_6248b08)
    }
}

#undef public_6248ad8
#undef public_6248ae0
#undef public_6248ae8
#undef public_6248af0
#undef public_6248af8
#undef public_6248b00
#undef public_6248b08

#pragma init_seg(compiler)
extern "C" void const* const public_6248ad8 = __AsmFindLabelExport(&internal_6248ad0, 0x6248ad8);
extern "C" void const* const public_6248ae0 = __AsmFindLabelExport(&internal_6248ad0, 0x6248ae0);
extern "C" void const* const public_6248ae8 = __AsmFindLabelExport(&internal_6248ad0, 0x6248ae8);
extern "C" void const* const public_6248af0 = __AsmFindLabelExport(&internal_6248ad0, 0x6248af0);
extern "C" void const* const public_6248af8 = __AsmFindLabelExport(&internal_6248ad0, 0x6248af8);
extern "C" void const* const public_6248b00 = __AsmFindLabelExport(&internal_6248ad0, 0x6248b00);
extern "C" void const* const public_6248b08 = __AsmFindLabelExport(&internal_6248ad0, 0x6248b08);
