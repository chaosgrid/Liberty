#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_532d30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0cc8 _public_5c0cc8

PROC_DECLARE(0x5c0cc0, internal_5c0cc0, public_5c0cc0);
/* CHUNK of public_53e4e0 */
extern "C" NAKED register_t __cdecl internal_5c0cc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_532d30
        public_5c0cc8 : nop
        mov eax, offset public_5faf08
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0cc0)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0cc8, public_5c0cc8)
    }
}

#undef public_5c0cc8

#pragma init_seg(compiler)
extern "C" void const* const public_5c0cc8 = __AsmFindLabelExport(&internal_5c0cc0, 0x5c0cc8);
