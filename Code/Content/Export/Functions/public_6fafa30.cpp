#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafa38 _public_6fafa38

PROC_DECLARE(0x6fafa30, internal_6fafa30, public_6fafa30);
/* CHUNK of public_6f5f760 */
extern "C" NAKED register_t __cdecl internal_6fafa30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x60]
        jmp public_6eec8d0
        public_6fafa38 : nop
        mov eax, offset public_6fc4a44
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafa30)
        ASM_EXPORT_ENTRY_SINGLE(0x6fafa38, public_6fafa38)
    }
}

#undef public_6fafa38

#pragma init_seg(compiler)
extern "C" void const* const public_6fafa38 = __AsmFindLabelExport(&internal_6fafa30, 0x6fafa38);
