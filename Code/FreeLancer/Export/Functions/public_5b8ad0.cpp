#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405840);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8ad8 _public_5b8ad8
#define public_5b8ae0 _public_5b8ae0
#define public_5b8ae8 _public_5b8ae8
#define public_5b8af0 _public_5b8af0
#define public_5b8af8 _public_5b8af8
#define public_5b8b00 _public_5b8b00

PROC_DECLARE(0x5b8ad0, internal_5b8ad0, public_5b8ad0);
/* CHUNK of public_41f150 */
extern "C" NAKED register_t __cdecl internal_5b8ad0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x38]
        jmp public_405840
        public_5b8ad8 : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_405840
        public_5b8ae0 : nop
        lea ecx, ss:[ebp-0x50]
        jmp public_405840
        public_5b8ae8 : nop
        lea ecx, ss:[ebp-0x5C]
        jmp public_405840
        public_5b8af0 : nop
        lea ecx, ss:[ebp-0x68]
        jmp public_405840
        public_5b8af8 : nop
        lea ecx, ss:[ebp-0x74]
        jmp public_405840
        public_5b8b00 : nop
        mov eax, offset public_5f299c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8ad0)
        ASM_EXPORT_ENTRY_FIRST(0x5b8ad8, public_5b8ad8)
        ASM_EXPORT_ENTRY(0x5b8ae0, public_5b8ae0)
        ASM_EXPORT_ENTRY(0x5b8ae8, public_5b8ae8)
        ASM_EXPORT_ENTRY(0x5b8af0, public_5b8af0)
        ASM_EXPORT_ENTRY(0x5b8af8, public_5b8af8)
        ASM_EXPORT_ENTRY_LAST(0x5b8b00, public_5b8b00)
    }
}

#undef public_5b8ad8
#undef public_5b8ae0
#undef public_5b8ae8
#undef public_5b8af0
#undef public_5b8af8
#undef public_5b8b00

#pragma init_seg(compiler)
extern "C" void const* const public_5b8ad8 = __AsmFindLabelExport(&internal_5b8ad0, 0x5b8ad8);
extern "C" void const* const public_5b8ae0 = __AsmFindLabelExport(&internal_5b8ad0, 0x5b8ae0);
extern "C" void const* const public_5b8ae8 = __AsmFindLabelExport(&internal_5b8ad0, 0x5b8ae8);
extern "C" void const* const public_5b8af0 = __AsmFindLabelExport(&internal_5b8ad0, 0x5b8af0);
extern "C" void const* const public_5b8af8 = __AsmFindLabelExport(&internal_5b8ad0, 0x5b8af8);
extern "C" void const* const public_5b8b00 = __AsmFindLabelExport(&internal_5b8ad0, 0x5b8b00);
