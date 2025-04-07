#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6356a70);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6398868 _public_6398868
#define public_6398870 _public_6398870

PROC_DECLARE(0x6398860, internal_6398860, public_6398860);
/* CHUNK of public_636ca30 */
extern "C" NAKED register_t __cdecl internal_6398860()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6356a70
        public_6398868 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_63449d0
        public_6398870 : nop
        mov eax, offset public_63b2e78
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398860)
        ASM_EXPORT_ENTRY_FIRST(0x6398868, public_6398868)
        ASM_EXPORT_ENTRY_LAST(0x6398870, public_6398870)
    }
}

#undef public_6398868
#undef public_6398870

#pragma init_seg(compiler)
extern "C" void const* const public_6398868 = __AsmFindLabelExport(&internal_6398860, 0x6398868);
extern "C" void const* const public_6398870 = __AsmFindLabelExport(&internal_6398860, 0x6398870);
