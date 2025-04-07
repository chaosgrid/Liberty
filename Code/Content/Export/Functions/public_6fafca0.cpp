#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafca8 _public_6fafca8
#define public_6fafcb0 _public_6fafcb0

PROC_DECLARE(0x6fafca0, internal_6fafca0, public_6fafca0);
/* CHUNK of public_6f67d80 */
extern "C" NAKED register_t __cdecl internal_6fafca0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6fafca8 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_6eec8d0
        public_6fafcb0 : nop
        mov eax, offset public_6fc4dc0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafca0)
        ASM_EXPORT_ENTRY_FIRST(0x6fafca8, public_6fafca8)
        ASM_EXPORT_ENTRY_LAST(0x6fafcb0, public_6fafcb0)
    }
}

#undef public_6fafca8
#undef public_6fafcb0

#pragma init_seg(compiler)
extern "C" void const* const public_6fafca8 = __AsmFindLabelExport(&internal_6fafca0, 0x6fafca8);
extern "C" void const* const public_6fafcb0 = __AsmFindLabelExport(&internal_6fafca0, 0x6fafcb0);
