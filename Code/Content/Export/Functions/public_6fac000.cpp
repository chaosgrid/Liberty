#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa0330);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac008 _public_6fac008

PROC_DECLARE(0x6fac000, internal_6fac000, public_6fac000);
/* CHUNK of public_6ef09c0 */
extern "C" NAKED register_t __cdecl internal_6fac000()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x4C]
        jmp public_6fa0330
        public_6fac008 : nop
        mov eax, offset public_6fc0c00
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac000)
        ASM_EXPORT_ENTRY_SINGLE(0x6fac008, public_6fac008)
    }
}

#undef public_6fac008

#pragma init_seg(compiler)
extern "C" void const* const public_6fac008 = __AsmFindLabelExport(&internal_6fac000, 0x6fac008);
