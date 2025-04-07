#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5298c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c029b _public_5c029b

PROC_DECLARE(0x5c0290, internal_5c0290, public_5c0290);
/* CHUNK of public_528d00 */
extern "C" NAKED register_t __cdecl internal_5c0290()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_5298c0
        public_5c029b : nop
        mov eax, offset public_5fa2ac
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0290)
        ASM_EXPORT_ENTRY_SINGLE(0x5c029b, public_5c029b)
    }
}

#undef public_5c029b

#pragma init_seg(compiler)
extern "C" void const* const public_5c029b = __AsmFindLabelExport(&internal_5c0290, 0x5c029b);
