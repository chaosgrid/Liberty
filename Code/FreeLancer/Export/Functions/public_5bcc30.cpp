#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a2d30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bcc3b _public_5bcc3b

PROC_DECLARE(0x5bcc30, internal_5bcc30, public_5bcc30);
/* CHUNK of public_4a5890 */
extern "C" NAKED register_t __cdecl internal_5bcc30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1024]
        jmp public_4a2d30
        public_5bcc3b : nop
        mov eax, offset public_5f6eb8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bcc30)
        ASM_EXPORT_ENTRY_SINGLE(0x5bcc3b, public_5bcc3b)
    }
}

#undef public_5bcc3b

#pragma init_seg(compiler)
extern "C" void const* const public_5bcc3b = __AsmFindLabelExport(&internal_5bcc30, 0x5bcc3b);
