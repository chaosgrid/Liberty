#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627e5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394238 _public_6394238
#define public_6394242 _public_6394242

PROC_DECLARE(0x6394230, internal_6394230, public_6394230);
/* CHUNK of public_62ae160 */
extern "C" NAKED register_t __cdecl internal_6394230()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-1]
        jmp public_627e5e0
        public_6394238 : nop
        mov ecx, offset public_63fc368
        jmp public_627e5e0
        public_6394242 : nop
        mov eax, offset public_63ad7b0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394230)
        ASM_EXPORT_ENTRY_FIRST(0x6394238, public_6394238)
        ASM_EXPORT_ENTRY_LAST(0x6394242, public_6394242)
    }
}

#undef public_6394238
#undef public_6394242

#pragma init_seg(compiler)
extern "C" void const* const public_6394238 = __AsmFindLabelExport(&internal_6394230, 0x6394238);
extern "C" void const* const public_6394242 = __AsmFindLabelExport(&internal_6394230, 0x6394242);
