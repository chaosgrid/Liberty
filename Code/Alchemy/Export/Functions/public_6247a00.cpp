#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b710);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247a08 _public_6247a08

PROC_DECLARE(0x6247a00, internal_6247a00, public_6247a00);
/* CHUNK of public_620b480 */
extern "C" NAKED register_t __cdecl internal_6247a00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_620b710
        public_6247a08 : nop
        mov eax, offset public_625082c
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247a00)
        ASM_EXPORT_ENTRY_SINGLE(0x6247a08, public_6247a08)
    }
}

#undef public_6247a08

#pragma init_seg(compiler)
extern "C" void const* const public_6247a08 = __AsmFindLabelExport(&internal_6247a00, 0x6247a08);
