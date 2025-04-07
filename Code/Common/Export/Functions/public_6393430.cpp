#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6348710);
CLANG_FORWARD_PROC_SYMBOL(public_6369f20);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639343b _public_639343b
#define public_6393446 _public_6393446
#define public_6393451 _public_6393451

PROC_DECLARE(0x6393430, internal_6393430, public_6393430);
/* CHUNK of public_628aac0 */
extern "C" NAKED register_t __cdecl internal_6393430()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xF8]
        jmp public_6348710
        public_639343b : nop
        lea ecx, ss:[ebp-0xA0]
        jmp public_6369f20
        public_6393446 : nop
        lea ecx, ss:[ebp-0x1CC]
        jmp public_63449d0
        public_6393451 : nop
        mov eax, offset public_63ac4c4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393430)
        ASM_EXPORT_ENTRY_FIRST(0x639343b, public_639343b)
        ASM_EXPORT_ENTRY(0x6393446, public_6393446)
        ASM_EXPORT_ENTRY_LAST(0x6393451, public_6393451)
    }
}

#undef public_639343b
#undef public_6393446
#undef public_6393451

#pragma init_seg(compiler)
extern "C" void const* const public_639343b = __AsmFindLabelExport(&internal_6393430, 0x639343b);
extern "C" void const* const public_6393446 = __AsmFindLabelExport(&internal_6393430, 0x6393446);
extern "C" void const* const public_6393451 = __AsmFindLabelExport(&internal_6393430, 0x6393451);
