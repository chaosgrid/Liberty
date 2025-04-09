#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_591ba0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c3998 _public_5c3998

PROC_DECLARE(0x5c3990, internal_5c3990, public_5c3990);
/* CHUNK of public_5735d0 */
extern "C" NAKED register_t __cdecl internal_5c3990()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_591ba0
        public_5c3998 : nop
        mov eax, offset public_5fd654
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c3990)
        ASM_EXPORT_ENTRY_SINGLE(0x5c3998, public_5c3998)
    }
}

#undef public_5c3998

#pragma init_seg(compiler)
extern "C" void const* const public_5c3998 = __AsmFindLabelExport(&internal_5c3990, 0x5c3998);
