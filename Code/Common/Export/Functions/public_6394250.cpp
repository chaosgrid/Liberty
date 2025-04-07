#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627e5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394258 _public_6394258
#define public_6394262 _public_6394262

PROC_DECLARE(0x6394250, internal_6394250, public_6394250);
/* CHUNK of public_62ae240 */
extern "C" NAKED register_t __cdecl internal_6394250()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-1]
        jmp public_627e5e0
        public_6394258 : nop
        mov ecx, offset public_63fc35c
        jmp public_627e5e0
        public_6394262 : nop
        mov eax, offset public_63ad7dc
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394250)
        ASM_EXPORT_ENTRY_FIRST(0x6394258, public_6394258)
        ASM_EXPORT_ENTRY_LAST(0x6394262, public_6394262)
    }
}

#undef public_6394258
#undef public_6394262

#pragma init_seg(compiler)
extern "C" void const* const public_6394258 = __AsmFindLabelExport(&internal_6394250, 0x6394258);
extern "C" void const* const public_6394262 = __AsmFindLabelExport(&internal_6394250, 0x6394262);
