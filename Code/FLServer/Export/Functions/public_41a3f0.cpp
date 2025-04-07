#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a3fb _public_41a3fb

PROC_DECLARE(0x41a3f0, internal_41a3f0, public_41a3f0);
/* CHUNK of public_40ee60 */
extern "C" NAKED register_t __cdecl internal_41a3f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xA0]
        jmp public_418aa4
        public_41a3fb : nop
        mov eax, offset public_41f550
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a3f0)
        ASM_EXPORT_ENTRY_SINGLE(0x41a3fb, public_41a3fb)
    }
}

#undef public_41a3fb

#pragma init_seg(compiler)
extern "C" void const* const public_41a3fb = __AsmFindLabelExport(&internal_41a3f0, 0x41a3fb);
