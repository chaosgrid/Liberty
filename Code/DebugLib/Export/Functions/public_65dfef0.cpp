#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d2630);
CLANG_FORWARD_PROC_SYMBOL(public_65d7009);

#define public_65dfef8 _public_65dfef8
#define public_65dff00 _public_65dff00

PROC_DECLARE(0x65dfef0, internal_65dfef0, public_65dfef0);
/* CHUNK of public_65d1d10 */
extern "C" NAKED register_t __cdecl internal_65dfef0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_65d2630
        public_65dfef8 : nop
        lea ecx, ss:[ebp-0x18]
        jmp public_65d2630
        public_65dff00 : nop
        mov eax, offset public_65e1f08
        jmp public_65d7009
        UNREACHABLE_TRAP(0x65dfef0)
        ASM_EXPORT_ENTRY_FIRST(0x65dfef8, public_65dfef8)
        ASM_EXPORT_ENTRY_LAST(0x65dff00, public_65dff00)
    }
}

#undef public_65dfef8
#undef public_65dff00

#pragma init_seg(compiler)
extern "C" void const* const public_65dfef8 = __AsmFindLabelExport(&internal_65dfef0, 0x65dfef8);
extern "C" void const* const public_65dff00 = __AsmFindLabelExport(&internal_65dfef0, 0x65dff00);
