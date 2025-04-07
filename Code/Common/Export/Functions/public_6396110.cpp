#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d30);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639611b _public_639611b
#define public_6396126 _public_6396126
#define public_6396131 _public_6396131

PROC_DECLARE(0x6396110, internal_6396110, public_6396110);
/* CHUNK of public_6307010 */
extern "C" NAKED register_t __cdecl internal_6396110()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x22A0]
        jmp public_6391d30
        public_639611b : nop
        lea ecx, ss:[ebp-0x20E8]
        jmp public_6391d30
        public_6396126 : nop
        lea ecx, ss:[ebp-0x21C4]
        jmp public_6391d30
        public_6396131 : nop
        mov eax, offset public_63aff40
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396110)
        ASM_EXPORT_ENTRY_FIRST(0x639611b, public_639611b)
        ASM_EXPORT_ENTRY(0x6396126, public_6396126)
        ASM_EXPORT_ENTRY_LAST(0x6396131, public_6396131)
    }
}

#undef public_639611b
#undef public_6396126
#undef public_6396131

#pragma init_seg(compiler)
extern "C" void const* const public_639611b = __AsmFindLabelExport(&internal_6396110, 0x639611b);
extern "C" void const* const public_6396126 = __AsmFindLabelExport(&internal_6396110, 0x6396126);
extern "C" void const* const public_6396131 = __AsmFindLabelExport(&internal_6396110, 0x6396131);
