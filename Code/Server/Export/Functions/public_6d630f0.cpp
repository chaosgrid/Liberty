#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce36f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d630fb _public_6d630fb
#define public_6d63106 _public_6d63106

PROC_DECLARE(0x6d630f0, internal_6d630f0, public_6d630f0);
/* CHUNK of public_6d48e80 */
extern "C" NAKED register_t __cdecl internal_6d630f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x340]
        jmp public_6ce36f0
        public_6d630fb : nop
        lea ecx, ss:[ebp-0x350]
        jmp public_6ce36f0
        public_6d63106 : nop
        mov eax, offset public_6d754c8
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d630f0)
        ASM_EXPORT_ENTRY_FIRST(0x6d630fb, public_6d630fb)
        ASM_EXPORT_ENTRY_LAST(0x6d63106, public_6d63106)
    }
}

#undef public_6d630fb
#undef public_6d63106

#pragma init_seg(compiler)
extern "C" void const* const public_6d630fb = __AsmFindLabelExport(&internal_6d630f0, 0x6d630fb);
extern "C" void const* const public_6d63106 = __AsmFindLabelExport(&internal_6d630f0, 0x6d63106);
