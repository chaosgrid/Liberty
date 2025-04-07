#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b710);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a548 _public_624a548

PROC_DECLARE(0x624a540, internal_624a540, public_624a540);
/* CHUNK of public_623cf70 */
extern "C" NAKED register_t __cdecl internal_624a540()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_620b710
        public_624a548 : nop
        mov eax, offset public_62535a0
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a540)
        ASM_EXPORT_ENTRY_SINGLE(0x624a548, public_624a548)
    }
}

#undef public_624a548

#pragma init_seg(compiler)
extern "C" void const* const public_624a548 = __AsmFindLabelExport(&internal_624a540, 0x624a548);
