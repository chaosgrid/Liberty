#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3258);

#define public_6ad325a _public_6ad325a
#define public_6ad325c _public_6ad325c

PROC_DECLARE(0x6ad3258, internal_6ad3258, public_6ad3258);
/* CHUNK of public_6ad2f61 */
extern "C" NAKED register_t __cdecl internal_6ad3258()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        fxch 
        public_6ad325a : nop
        fstp st(0)
        public_6ad325c : nop
        ret 
        UNREACHABLE_TRAP(0x6ad3258)
        ASM_EXPORT_ENTRY_FIRST(0x6ad325a, public_6ad325a)
        ASM_EXPORT_ENTRY_LAST(0x6ad325c, public_6ad325c)
    }
}

#undef public_6ad325a
#undef public_6ad325c

#pragma init_seg(compiler)
extern "C" void const* const public_6ad325a = __AsmFindLabelExport(&internal_6ad3258, 0x6ad325a);
extern "C" void const* const public_6ad325c = __AsmFindLabelExport(&internal_6ad3258, 0x6ad325c);
