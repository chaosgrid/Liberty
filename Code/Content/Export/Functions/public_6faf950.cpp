#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf958 _public_6faf958
#define public_6faf960 _public_6faf960

PROC_DECLARE(0x6faf950, internal_6faf950, public_6faf950);
/* CHUNK of public_6f5cfa0 */
extern "C" NAKED register_t __cdecl internal_6faf950()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x3C]
        jmp public_6eec8d0
        public_6faf958 : nop
        lea ecx, ss:[ebp-0x54]
        jmp public_6eec8d0
        public_6faf960 : nop
        mov eax, offset public_6fc4964
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf950)
        ASM_EXPORT_ENTRY_FIRST(0x6faf958, public_6faf958)
        ASM_EXPORT_ENTRY_LAST(0x6faf960, public_6faf960)
    }
}

#undef public_6faf958
#undef public_6faf960

#pragma init_seg(compiler)
extern "C" void const* const public_6faf958 = __AsmFindLabelExport(&internal_6faf950, 0x6faf958);
extern "C" void const* const public_6faf960 = __AsmFindLabelExport(&internal_6faf950, 0x6faf960);
