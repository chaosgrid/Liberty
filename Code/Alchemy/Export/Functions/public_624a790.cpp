#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a79b _public_624a79b

PROC_DECLARE(0x624a790, internal_624a790, public_624a790);
/* CHUNK of public_6240d50 */
extern "C" NAKED register_t __cdecl internal_624a790()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_620b300
        public_624a79b : nop
        mov eax, offset public_6253824
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a790)
        ASM_EXPORT_ENTRY_SINGLE(0x624a79b, public_624a79b)
    }
}

#undef public_624a79b

#pragma init_seg(compiler)
extern "C" void const* const public_624a79b = __AsmFindLabelExport(&internal_624a790, 0x624a79b);
