#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d30);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639608b _public_639608b

PROC_DECLARE(0x6396080, internal_6396080, public_6396080);
/* CHUNK of public_6306870 */
extern "C" NAKED register_t __cdecl internal_6396080()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xE8]
        jmp public_6391d30
        public_639608b : nop
        mov eax, offset public_63afe6c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396080)
        ASM_EXPORT_ENTRY_SINGLE(0x639608b, public_639608b)
    }
}

#undef public_639608b

#pragma init_seg(compiler)
extern "C" void const* const public_639608b = __AsmFindLabelExport(&internal_6396080, 0x639608b);
