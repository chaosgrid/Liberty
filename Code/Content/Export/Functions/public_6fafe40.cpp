#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafe48 _public_6fafe48

PROC_DECLARE(0x6fafe40, internal_6fafe40, public_6fafe40);
/* CHUNK of public_6f6bc20 */
extern "C" NAKED register_t __cdecl internal_6fafe40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6fafe48 : nop
        mov eax, offset public_6fc5010
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafe40)
        ASM_EXPORT_ENTRY_SINGLE(0x6fafe48, public_6fafe48)
    }
}

#undef public_6fafe48

#pragma init_seg(compiler)
extern "C" void const* const public_6fafe48 = __AsmFindLabelExport(&internal_6fafe40, 0x6fafe48);
