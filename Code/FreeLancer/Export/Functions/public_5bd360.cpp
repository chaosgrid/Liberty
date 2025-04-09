#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd368 _public_5bd368

PROC_DECLARE(0x5bd360, internal_5bd360, public_5bd360);
/* CHUNK of public_4b9800 */
extern "C" NAKED register_t __cdecl internal_5bd360()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5bd368 : nop
        mov eax, offset public_5f7640
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd360)
        ASM_EXPORT_ENTRY_SINGLE(0x5bd368, public_5bd368)
    }
}

#undef public_5bd368

#pragma init_seg(compiler)
extern "C" void const* const public_5bd368 = __AsmFindLabelExport(&internal_5bd360, 0x5bd368);
