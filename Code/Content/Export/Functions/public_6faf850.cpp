#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf858 _public_6faf858
#define public_6faf860 _public_6faf860
#define public_6faf868 _public_6faf868
#define public_6faf870 _public_6faf870

PROC_DECLARE(0x6faf850, internal_6faf850, public_6faf850);
/* CHUNK of public_6f5ac10 */
extern "C" NAKED register_t __cdecl internal_6faf850()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x4C]
        jmp public_6eec8d0
        public_6faf858 : nop
        lea ecx, ss:[ebp-0x5C]
        jmp public_6eec8d0
        public_6faf860 : nop
        lea ecx, ss:[ebp-0x7C]
        jmp public_6eec8d0
        public_6faf868 : nop
        lea ecx, ss:[ebp-0x6C]
        jmp public_6eec8d0
        public_6faf870 : nop
        mov eax, offset public_6fc484c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf850)
        ASM_EXPORT_ENTRY_FIRST(0x6faf858, public_6faf858)
        ASM_EXPORT_ENTRY(0x6faf860, public_6faf860)
        ASM_EXPORT_ENTRY(0x6faf868, public_6faf868)
        ASM_EXPORT_ENTRY_LAST(0x6faf870, public_6faf870)
    }
}

#undef public_6faf858
#undef public_6faf860
#undef public_6faf868
#undef public_6faf870

#pragma init_seg(compiler)
extern "C" void const* const public_6faf858 = __AsmFindLabelExport(&internal_6faf850, 0x6faf858);
extern "C" void const* const public_6faf860 = __AsmFindLabelExport(&internal_6faf850, 0x6faf860);
extern "C" void const* const public_6faf868 = __AsmFindLabelExport(&internal_6faf850, 0x6faf868);
extern "C" void const* const public_6faf870 = __AsmFindLabelExport(&internal_6faf850, 0x6faf870);
