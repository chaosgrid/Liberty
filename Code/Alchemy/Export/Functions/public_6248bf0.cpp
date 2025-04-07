#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6220d30);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248bf8 _public_6248bf8
#define public_6248c00 _public_6248c00

PROC_DECLARE(0x6248bf0, internal_6248bf0, public_6248bf0);
/* CHUNK of public_6220950 */
extern "C" NAKED register_t __cdecl internal_6248bf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x10]
        jmp public_6220d30
        public_6248bf8 : nop
        lea ecx, ss:[ebp+4]
        jmp public_6220d30
        public_6248c00 : nop
        mov eax, offset public_6251ad8
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248bf0)
        ASM_EXPORT_ENTRY_FIRST(0x6248bf8, public_6248bf8)
        ASM_EXPORT_ENTRY_LAST(0x6248c00, public_6248c00)
    }
}

#undef public_6248bf8
#undef public_6248c00

#pragma init_seg(compiler)
extern "C" void const* const public_6248bf8 = __AsmFindLabelExport(&internal_6248bf0, 0x6248bf8);
extern "C" void const* const public_6248c00 = __AsmFindLabelExport(&internal_6248bf0, 0x6248c00);
