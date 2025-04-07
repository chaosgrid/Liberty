#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce5d70);
CLANG_FORWARD_PROC_SYMBOL(public_6cecb50);
CLANG_FORWARD_PROC_SYMBOL(public_6d03740);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60f88 _public_6d60f88
#define public_6d60f90 _public_6d60f90
#define public_6d60f98 _public_6d60f98

PROC_DECLARE(0x6d60f80, internal_6d60f80, public_6d60f80);
/* CHUNK of public_6d032b0 */
extern "C" NAKED register_t __cdecl internal_6d60f80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x40]
        jmp public_6d03740
        public_6d60f88 : nop
        lea ecx, ss:[ebp-0x28]
        jmp public_6ce5d70
        public_6d60f90 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp public_6cecb50
        public_6d60f98 : nop
        mov eax, offset public_6d71af0
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60f80)
        ASM_EXPORT_ENTRY_FIRST(0x6d60f88, public_6d60f88)
        ASM_EXPORT_ENTRY(0x6d60f90, public_6d60f90)
        ASM_EXPORT_ENTRY_LAST(0x6d60f98, public_6d60f98)
    }
}

#undef public_6d60f88
#undef public_6d60f90
#undef public_6d60f98

#pragma init_seg(compiler)
extern "C" void const* const public_6d60f88 = __AsmFindLabelExport(&internal_6d60f80, 0x6d60f88);
extern "C" void const* const public_6d60f90 = __AsmFindLabelExport(&internal_6d60f80, 0x6d60f90);
extern "C" void const* const public_6d60f98 = __AsmFindLabelExport(&internal_6d60f80, 0x6d60f98);
