#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263310);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63963b8 _public_63963b8
#define public_63963c1 _public_63963c1

PROC_DECLARE(0x63963b0, internal_63963b0, public_63963b0);
/* CHUNK of public_630f9b0 */
extern "C" NAKED register_t __cdecl internal_63963b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x30]
        jmp public_6263310
        public_63963b8 : nop
        lea ecx, ss:[ebp-0x30]
        jmp dword ptr ds : [public_63991ac]
        public_63963c1 : nop
        mov eax, offset public_63b02cc
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63963b0)
        ASM_EXPORT_ENTRY_FIRST(0x63963b8, public_63963b8)
        ASM_EXPORT_ENTRY_LAST(0x63963c1, public_63963c1)
    }
}

#undef public_63963b8
#undef public_63963c1

#pragma init_seg(compiler)
extern "C" void const* const public_63963b8 = __AsmFindLabelExport(&internal_63963b0, 0x63963b8);
extern "C" void const* const public_63963c1 = __AsmFindLabelExport(&internal_63963b0, 0x63963c1);
