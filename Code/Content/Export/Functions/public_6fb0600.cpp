#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f98760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0608 _public_6fb0608

PROC_DECLARE(0x6fb0600, internal_6fb0600, public_6fb0600);
/* CHUNK of public_6f7ec90 */
extern "C" NAKED register_t __cdecl internal_6fb0600()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp public_6f98760
        public_6fb0608 : nop
        mov eax, offset public_6fc58ac
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0600)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb0608, public_6fb0608)
    }
}

#undef public_6fb0608

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0608 = __AsmFindLabelExport(&internal_6fb0600, 0x6fb0608);
