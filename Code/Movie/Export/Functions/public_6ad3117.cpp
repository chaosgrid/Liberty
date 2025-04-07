#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3116);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3117);

#define public_6ad311e _public_6ad311e

PROC_DECLARE(0x6ad3117, internal_6ad3117, public_6ad3117);
/* CHUNK of public_6ad30f1 */
extern "C" NAKED register_t __cdecl internal_6ad3117()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, 0
        jmp public_6ad3116
        public_6ad311e : nop
        mov eax, 2
        jmp public_6ad3116
        UNREACHABLE_TRAP(0x6ad3117)
        ASM_EXPORT_ENTRY_SINGLE(0x6ad311e, public_6ad311e)
    }
}

#undef public_6ad311e

#pragma init_seg(compiler)
extern "C" void const* const public_6ad311e = __AsmFindLabelExport(&internal_6ad3117, 0x6ad311e);
