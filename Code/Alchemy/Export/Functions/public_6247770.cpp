#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624777b _public_624777b

PROC_DECLARE(0x6247770, internal_6247770, public_6247770);
/* CHUNK of public_620b260 */
extern "C" NAKED register_t __cdecl internal_6247770()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_620b300
        public_624777b : nop
        mov eax, offset public_6250550
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247770)
        ASM_EXPORT_ENTRY_SINGLE(0x624777b, public_624777b)
    }
}

#undef public_624777b

#pragma init_seg(compiler)
extern "C" void const* const public_624777b = __AsmFindLabelExport(&internal_6247770, 0x624777b);
