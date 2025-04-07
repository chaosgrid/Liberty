#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393c08 _public_6393c08

PROC_DECLARE(0x6393c00, internal_6393c00, public_6393c00);
/* CHUNK of public_62a07a0 */
extern "C" NAKED register_t __cdecl internal_6393c00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x4C]
        jmp public_6269110
        public_6393c08 : nop
        mov eax, offset public_63ad00c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393c00)
        ASM_EXPORT_ENTRY_SINGLE(0x6393c08, public_6393c08)
    }
}

#undef public_6393c08

#pragma init_seg(compiler)
extern "C" void const* const public_6393c08 = __AsmFindLabelExport(&internal_6393c00, 0x6393c08);
