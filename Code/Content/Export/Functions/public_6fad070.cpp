#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fad078 _public_6fad078

PROC_DECLARE(0x6fad070, internal_6fad070, public_6fad070);
/* CHUNK of public_6f08800 */
extern "C" NAKED register_t __cdecl internal_6fad070()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x40]
        jmp public_6eec8d0
        public_6fad078 : nop
        mov eax, offset public_6fc1e7c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fad070)
        ASM_EXPORT_ENTRY_SINGLE(0x6fad078, public_6fad078)
    }
}

#undef public_6fad078

#pragma init_seg(compiler)
extern "C" void const* const public_6fad078 = __AsmFindLabelExport(&internal_6fad070, 0x6fad078);
