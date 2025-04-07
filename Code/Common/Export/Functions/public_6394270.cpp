#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627e5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394278 _public_6394278
#define public_6394282 _public_6394282

PROC_DECLARE(0x6394270, internal_6394270, public_6394270);
/* CHUNK of public_62ae320 */
extern "C" NAKED register_t __cdecl internal_6394270()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-1]
        jmp public_627e5e0
        public_6394278 : nop
        mov ecx, offset public_63fc350
        jmp public_627e5e0
        public_6394282 : nop
        mov eax, offset public_63ad808
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394270)
        ASM_EXPORT_ENTRY_FIRST(0x6394278, public_6394278)
        ASM_EXPORT_ENTRY_LAST(0x6394282, public_6394282)
    }
}

#undef public_6394278
#undef public_6394282

#pragma init_seg(compiler)
extern "C" void const* const public_6394278 = __AsmFindLabelExport(&internal_6394270, 0x6394278);
extern "C" void const* const public_6394282 = __AsmFindLabelExport(&internal_6394270, 0x6394282);
