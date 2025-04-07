#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3ae40);
CLANG_FORWARD_PROC_SYMBOL(public_6f3af10);
CLANG_FORWARD_PROC_SYMBOL(public_6f3af30);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58e08 _public_6f58e08
#define public_6f58e10 _public_6f58e10
#define public_6f58e18 _public_6f58e18

PROC_DECLARE(0x6f58e00, internal_6f58e00, public_6f58e00);
/* CHUNK of public_6f3aa00 */
extern "C" NAKED register_t __cdecl internal_6f58e00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x4C]
        jmp public_6f3ae40
        public_6f58e08 : nop
        lea ecx, ss:[ebp-0x38]
        jmp public_6f3af10
        public_6f58e10 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_6f3af30
        public_6f58e18 : nop
        mov eax, offset public_6f5bf84
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58e00)
        ASM_EXPORT_ENTRY_FIRST(0x6f58e08, public_6f58e08)
        ASM_EXPORT_ENTRY(0x6f58e10, public_6f58e10)
        ASM_EXPORT_ENTRY_LAST(0x6f58e18, public_6f58e18)
    }
}

#undef public_6f58e08
#undef public_6f58e10
#undef public_6f58e18

#pragma init_seg(compiler)
extern "C" void const* const public_6f58e08 = __AsmFindLabelExport(&internal_6f58e00, 0x6f58e08);
extern "C" void const* const public_6f58e10 = __AsmFindLabelExport(&internal_6f58e00, 0x6f58e10);
extern "C" void const* const public_6f58e18 = __AsmFindLabelExport(&internal_6f58e00, 0x6f58e18);
