#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b710);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248838 _public_6248838

PROC_DECLARE(0x6248830, internal_6248830, public_6248830);
/* CHUNK of public_621c940 */
extern "C" NAKED register_t __cdecl internal_6248830()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_620b710
        public_6248838 : nop
        mov eax, offset public_625170c
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248830)
        ASM_EXPORT_ENTRY_SINGLE(0x6248838, public_6248838)
    }
}

#undef public_6248838

#pragma init_seg(compiler)
extern "C" void const* const public_6248838 = __AsmFindLabelExport(&internal_6248830, 0x6248838);
