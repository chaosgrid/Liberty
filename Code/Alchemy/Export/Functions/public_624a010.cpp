#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a018 _public_624a018

PROC_DECLARE(0x624a010, internal_624a010, public_624a010);
/* CHUNK of public_6237fa0 */
extern "C" NAKED register_t __cdecl internal_624a010()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_620ce80
        public_624a018 : nop
        mov eax, offset public_625304c
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a010)
        ASM_EXPORT_ENTRY_SINGLE(0x624a018, public_624a018)
    }
}

#undef public_624a018

#pragma init_seg(compiler)
extern "C" void const* const public_624a018 = __AsmFindLabelExport(&internal_624a010, 0x624a018);
