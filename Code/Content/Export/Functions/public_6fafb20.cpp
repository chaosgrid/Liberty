#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f63a10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafb2b _public_6fafb2b

PROC_DECLARE(0x6fafb20, internal_6fafb20, public_6fafb20);
/* CHUNK of public_6f62f50 */
extern "C" NAKED register_t __cdecl internal_6fafb20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xF4]
        jmp public_6f63a10
        public_6fafb2b : nop
        mov eax, offset public_6fc4bb8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafb20)
        ASM_EXPORT_ENTRY_SINGLE(0x6fafb2b, public_6fafb2b)
    }
}

#undef public_6fafb2b

#pragma init_seg(compiler)
extern "C" void const* const public_6fafb2b = __AsmFindLabelExport(&internal_6fafb20, 0x6fafb2b);
