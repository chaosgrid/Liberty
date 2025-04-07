#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3cd20);
CLANG_FORWARD_PROC_SYMBOL(public_6d48c20);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c310);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6392b _public_6d6392b
#define public_6d63936 _public_6d63936
#define public_6d63941 _public_6d63941

PROC_DECLARE(0x6d63920, internal_6d63920, public_6d63920);
/* CHUNK of public_6d536d0 */
extern "C" NAKED register_t __cdecl internal_6d63920()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x554]
        jmp public_6d3cd20
        public_6d6392b : nop
        lea ecx, ss:[ebp-0x558]
        jmp public_6d4c310
        public_6d63936 : nop
        lea ecx, ss:[ebp-0x52C]
        jmp public_6d48c20
        public_6d63941 : nop
        mov eax, offset public_6d75b4c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63920)
        ASM_EXPORT_ENTRY_FIRST(0x6d6392b, public_6d6392b)
        ASM_EXPORT_ENTRY(0x6d63936, public_6d63936)
        ASM_EXPORT_ENTRY_LAST(0x6d63941, public_6d63941)
    }
}

#undef public_6d6392b
#undef public_6d63936
#undef public_6d63941

#pragma init_seg(compiler)
extern "C" void const* const public_6d6392b = __AsmFindLabelExport(&internal_6d63920, 0x6d6392b);
extern "C" void const* const public_6d63936 = __AsmFindLabelExport(&internal_6d63920, 0x6d63936);
extern "C" void const* const public_6d63941 = __AsmFindLabelExport(&internal_6d63920, 0x6d63941);
