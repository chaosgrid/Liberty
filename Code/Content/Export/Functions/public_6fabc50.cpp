#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fabc58 _public_6fabc58

PROC_DECLARE(0x6fabc50, internal_6fabc50, public_6fabc50);
/* CHUNK of public_6ee8c50 */
extern "C" NAKED register_t __cdecl internal_6fabc50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x30]
        jmp public_6eec8d0
        public_6fabc58 : nop
        mov eax, offset public_6fc0824
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fabc50)
        ASM_EXPORT_ENTRY_SINGLE(0x6fabc58, public_6fabc58)
    }
}

#undef public_6fabc58

#pragma init_seg(compiler)
extern "C" void const* const public_6fabc58 = __AsmFindLabelExport(&internal_6fabc50, 0x6fabc58);
