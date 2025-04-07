#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62084b0);
CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_6212ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a668 _public_624a668
#define public_624a673 _public_624a673
#define public_624a67e _public_624a67e

PROC_DECLARE(0x624a660, internal_624a660, public_624a660);
/* CHUNK of public_623e4f0 */
extern "C" NAKED register_t __cdecl internal_624a660()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6212ec0
        public_624a668 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x4C
        jmp public_62084b0
        public_624a673 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_620b300
        public_624a67e : nop
        mov eax, offset public_62536cc
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a660)
        ASM_EXPORT_ENTRY_FIRST(0x624a668, public_624a668)
        ASM_EXPORT_ENTRY(0x624a673, public_624a673)
        ASM_EXPORT_ENTRY_LAST(0x624a67e, public_624a67e)
    }
}

#undef public_624a668
#undef public_624a673
#undef public_624a67e

#pragma init_seg(compiler)
extern "C" void const* const public_624a668 = __AsmFindLabelExport(&internal_624a660, 0x624a668);
extern "C" void const* const public_624a673 = __AsmFindLabelExport(&internal_624a660, 0x624a673);
extern "C" void const* const public_624a67e = __AsmFindLabelExport(&internal_624a660, 0x624a67e);
