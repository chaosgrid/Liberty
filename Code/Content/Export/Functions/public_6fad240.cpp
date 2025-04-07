#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fad248 _public_6fad248

PROC_DECLARE(0x6fad240, internal_6fad240, public_6fad240);
/* CHUNK of public_6f0b1e0 */
extern "C" NAKED register_t __cdecl internal_6fad240()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x54]
        jmp public_6f15350
        public_6fad248 : nop
        mov eax, offset public_6fc20d0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fad240)
        ASM_EXPORT_ENTRY_SINGLE(0x6fad248, public_6fad248)
    }
}

#undef public_6fad248

#pragma init_seg(compiler)
extern "C" void const* const public_6fad248 = __AsmFindLabelExport(&internal_6fad240, 0x6fad248);
