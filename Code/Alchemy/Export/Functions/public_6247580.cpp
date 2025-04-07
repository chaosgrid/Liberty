#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247588 _public_6247588
#define public_6247590 _public_6247590

PROC_DECLARE(0x6247580, internal_6247580, public_6247580);
/* CHUNK of public_6207ce0 */
extern "C" NAKED register_t __cdecl internal_6247580()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_6209ed0
        public_6247588 : nop
        lea ecx, ss:[ebp+4]
        jmp public_6209ed0
        public_6247590 : nop
        mov eax, offset public_6250358
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247580)
        ASM_EXPORT_ENTRY_FIRST(0x6247588, public_6247588)
        ASM_EXPORT_ENTRY_LAST(0x6247590, public_6247590)
    }
}

#undef public_6247588
#undef public_6247590

#pragma init_seg(compiler)
extern "C" void const* const public_6247588 = __AsmFindLabelExport(&internal_6247580, 0x6247588);
extern "C" void const* const public_6247590 = __AsmFindLabelExport(&internal_6247580, 0x6247590);
