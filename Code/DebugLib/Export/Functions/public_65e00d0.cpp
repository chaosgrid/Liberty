#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d2630);
CLANG_FORWARD_PROC_SYMBOL(public_65d6340);
CLANG_FORWARD_PROC_SYMBOL(public_65d7009);

#define public_65e00d8 _public_65e00d8
#define public_65e00e0 _public_65e00e0

PROC_DECLARE(0x65e00d0, internal_65e00d0, public_65e00d0);
/* CHUNK of public_65d6210 */
extern "C" NAKED register_t __cdecl internal_65e00d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_65d6340
        public_65e00d8 : nop
        lea ecx, ss:[ebp-0x18]
        jmp public_65d2630
        public_65e00e0 : nop
        mov eax, offset public_65e2178
        jmp public_65d7009
        UNREACHABLE_TRAP(0x65e00d0)
        ASM_EXPORT_ENTRY_FIRST(0x65e00d8, public_65e00d8)
        ASM_EXPORT_ENTRY_LAST(0x65e00e0, public_65e00e0)
    }
}

#undef public_65e00d8
#undef public_65e00e0

#pragma init_seg(compiler)
extern "C" void const* const public_65e00d8 = __AsmFindLabelExport(&internal_65e00d0, 0x65e00d8);
extern "C" void const* const public_65e00e0 = __AsmFindLabelExport(&internal_65e00d0, 0x65e00e0);
