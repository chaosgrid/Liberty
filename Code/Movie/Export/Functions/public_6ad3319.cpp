#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3319);

#define public_6ad3320 _public_6ad3320
#define public_6ad3323 _public_6ad3323
#define public_6ad3329 _public_6ad3329

PROC_DECLARE(0x6ad3319, internal_6ad3319, public_6ad3319);
extern "C" NAKED register_t __cdecl internal_6ad3319()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov byte ptr ss : [ebp-0x90], 1
        public_6ad3320 : nop
        or cl, cl
        ret 
        public_6ad3323 : nop
        or cl, cl
        je public_6ad3329
        fchs 
        public_6ad3329 : nop
        ret 
        UNREACHABLE_TRAP(0x6ad3319)
        ASM_EXPORT_ENTRY_FIRST(0x6ad3320, public_6ad3320)
        ASM_EXPORT_ENTRY(0x6ad3323, public_6ad3323)
        ASM_EXPORT_ENTRY_LAST(0x6ad3329, public_6ad3329)
    }
}

#undef public_6ad3320
#undef public_6ad3323
#undef public_6ad3329

#pragma init_seg(compiler)
extern "C" void const* const public_6ad3320 = __AsmFindLabelExport(&internal_6ad3319, 0x6ad3320);
extern "C" void const* const public_6ad3323 = __AsmFindLabelExport(&internal_6ad3319, 0x6ad3323);
extern "C" void const* const public_6ad3329 = __AsmFindLabelExport(&internal_6ad3319, 0x6ad3329);
