#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b710);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62489f8 _public_62489f8

PROC_DECLARE(0x62489f0, internal_62489f0, public_62489f0);
/* CHUNK of public_621e120 */
extern "C" NAKED register_t __cdecl internal_62489f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_620b710
        public_62489f8 : nop
        mov eax, offset public_62518bc
        jmp public_6246126
        UNREACHABLE_TRAP(0x62489f0)
        ASM_EXPORT_ENTRY_SINGLE(0x62489f8, public_62489f8)
    }
}

#undef public_62489f8

#pragma init_seg(compiler)
extern "C" void const* const public_62489f8 = __AsmFindLabelExport(&internal_62489f0, 0x62489f8);
