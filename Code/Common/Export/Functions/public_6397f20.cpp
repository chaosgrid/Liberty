#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397f2b _public_6397f2b
#define public_6397f36 _public_6397f36

PROC_DECLARE(0x6397f20, internal_6397f20, public_6397f20);
/* CHUNK of public_634d090 */
extern "C" NAKED register_t __cdecl internal_6397f20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x214]
        jmp public_63449d0
        public_6397f2b : nop
        lea ecx, ss:[ebp-0x41C]
        jmp public_63449d0
        public_6397f36 : nop
        mov eax, offset public_63b22a0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397f20)
        ASM_EXPORT_ENTRY_FIRST(0x6397f2b, public_6397f2b)
        ASM_EXPORT_ENTRY_LAST(0x6397f36, public_6397f36)
    }
}

#undef public_6397f2b
#undef public_6397f36

#pragma init_seg(compiler)
extern "C" void const* const public_6397f2b = __AsmFindLabelExport(&internal_6397f20, 0x6397f2b);
extern "C" void const* const public_6397f36 = __AsmFindLabelExport(&internal_6397f20, 0x6397f36);
