#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624768b _public_624768b

PROC_DECLARE(0x6247680, internal_6247680, public_6247680);
/* CHUNK of public_6209160 */
extern "C" NAKED register_t __cdecl internal_6247680()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_6209bb0
        public_624768b : nop
        mov eax, offset public_6250468
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247680)
        ASM_EXPORT_ENTRY_SINGLE(0x624768b, public_624768b)
    }
}

#undef public_624768b

#pragma init_seg(compiler)
extern "C" void const* const public_624768b = __AsmFindLabelExport(&internal_6247680, 0x624768b);
