#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f98760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faed78 _public_6faed78

PROC_DECLARE(0x6faed70, internal_6faed70, public_6faed70);
/* CHUNK of public_6f378c0 */
extern "C" NAKED register_t __cdecl internal_6faed70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x20]
        jmp public_6f98760
        public_6faed78 : nop
        mov eax, offset public_6fc3d1c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faed70)
        ASM_EXPORT_ENTRY_SINGLE(0x6faed78, public_6faed78)
    }
}

#undef public_6faed78

#pragma init_seg(compiler)
extern "C" void const* const public_6faed78 = __AsmFindLabelExport(&internal_6faed70, 0x6faed78);
