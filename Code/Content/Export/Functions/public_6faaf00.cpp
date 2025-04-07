#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec7820);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faaf0b _public_6faaf0b

PROC_DECLARE(0x6faaf00, internal_6faaf00, public_6faaf00);
/* CHUNK of public_6ec75d0 */
extern "C" NAKED register_t __cdecl internal_6faaf00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x108]
        jmp public_6ec7820
        public_6faaf0b : nop
        mov eax, offset public_6fbf184
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faaf00)
        ASM_EXPORT_ENTRY_SINGLE(0x6faaf0b, public_6faaf0b)
    }
}

#undef public_6faaf0b

#pragma init_seg(compiler)
extern "C" void const* const public_6faaf0b = __AsmFindLabelExport(&internal_6faaf00, 0x6faaf0b);
