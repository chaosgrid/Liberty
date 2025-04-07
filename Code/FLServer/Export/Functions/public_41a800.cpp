#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4027b0);
CLANG_FORWARD_PROC_SYMBOL(public_403bd0);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a80b _public_41a80b
#define public_41a816 _public_41a816

PROC_DECLARE(0x41a800, internal_41a800, public_41a800);
/* CHUNK of public_412fb0 */
extern "C" NAKED register_t __cdecl internal_41a800()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x86C]
        jmp public_4027b0
        public_41a80b : nop
        lea ecx, ss:[ebp-0x884]
        jmp public_403bd0
        public_41a816 : nop
        mov eax, offset public_41f940
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a800)
        ASM_EXPORT_ENTRY_FIRST(0x41a80b, public_41a80b)
        ASM_EXPORT_ENTRY_LAST(0x41a816, public_41a816)
    }
}

#undef public_41a80b
#undef public_41a816

#pragma init_seg(compiler)
extern "C" void const* const public_41a80b = __AsmFindLabelExport(&internal_41a800, 0x41a80b);
extern "C" void const* const public_41a816 = __AsmFindLabelExport(&internal_41a800, 0x41a816);
