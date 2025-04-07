#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394098 _public_6394098
#define public_63940a0 _public_63940a0

PROC_DECLARE(0x6394090, internal_6394090, public_6394090);
/* CHUNK of public_62aa420 */
extern "C" NAKED register_t __cdecl internal_6394090()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x3C]
        jmp public_630e210
        public_6394098 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_630e210
        public_63940a0 : nop
        mov eax, offset public_63ad560
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394090)
        ASM_EXPORT_ENTRY_FIRST(0x6394098, public_6394098)
        ASM_EXPORT_ENTRY_LAST(0x63940a0, public_63940a0)
    }
}

#undef public_6394098
#undef public_63940a0

#pragma init_seg(compiler)
extern "C" void const* const public_6394098 = __AsmFindLabelExport(&internal_6394090, 0x6394098);
extern "C" void const* const public_63940a0 = __AsmFindLabelExport(&internal_6394090, 0x63940a0);
