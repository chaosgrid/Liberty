#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6369f20);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392e4b _public_6392e4b
#define public_6392e56 _public_6392e56

PROC_DECLARE(0x6392e40, internal_6392e40, public_6392e40);
/* CHUNK of public_62802d0 */
extern "C" NAKED register_t __cdecl internal_6392e40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xA0]
        jmp public_6369f20
        public_6392e4b : nop
        lea ecx, ss:[ebp-0x114]
        jmp public_63449d0
        public_6392e56 : nop
        mov eax, offset public_63abdac
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392e40)
        ASM_EXPORT_ENTRY_FIRST(0x6392e4b, public_6392e4b)
        ASM_EXPORT_ENTRY_LAST(0x6392e56, public_6392e56)
    }
}

#undef public_6392e4b
#undef public_6392e56

#pragma init_seg(compiler)
extern "C" void const* const public_6392e4b = __AsmFindLabelExport(&internal_6392e40, 0x6392e4b);
extern "C" void const* const public_6392e56 = __AsmFindLabelExport(&internal_6392e40, 0x6392e56);
