#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8358 _public_5b8358

PROC_DECLARE(0x5b8350, internal_5b8350, public_5b8350);
/* CHUNK of public_401160 */
extern "C" NAKED register_t __cdecl internal_5b8350()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+4]
        jmp public_526a20
        public_5b8358 : nop
        mov eax, offset public_5f1e24
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8350)
        ASM_EXPORT_ENTRY_SINGLE(0x5b8358, public_5b8358)
    }
}

#undef public_5b8358

#pragma init_seg(compiler)
extern "C" void const* const public_5b8358 = __AsmFindLabelExport(&internal_5b8350, 0x5b8358);
