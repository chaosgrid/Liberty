#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad342e);

#define public_6ad3439 _public_6ad3439

PROC_DECLARE(0x6ad342e, internal_6ad342e, public_6ad342e);
/* CHUNK of public_6ad0002 */
extern "C" NAKED register_t __cdecl internal_6ad342e()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        cmp word ptr ss : [esp], 0x27F
        je public_6ad3439
        fldcw word ptr ss : [esp]
        public_6ad3439 : nop
        pop edx
        ret 
        UNREACHABLE_TRAP(0x6ad342e)
        ASM_EXPORT_ENTRY_SINGLE(0x6ad3439, public_6ad3439)
    }
}

#undef public_6ad3439

#pragma init_seg(compiler)
extern "C" void const* const public_6ad3439 = __AsmFindLabelExport(&internal_6ad342e, 0x6ad3439);
