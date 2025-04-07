#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e910);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a318 _public_41a318

PROC_DECLARE(0x41a310, internal_41a310, public_41a310);
/* CHUNK of public_40e8a0 */
extern "C" NAKED register_t __cdecl internal_41a310()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_40e910
        public_41a318 : nop
        mov eax, offset public_41f480
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a310)
        ASM_EXPORT_ENTRY_SINGLE(0x41a318, public_41a318)
    }
}

#undef public_41a318

#pragma init_seg(compiler)
extern "C" void const* const public_41a318 = __AsmFindLabelExport(&internal_41a310, 0x41a318);
