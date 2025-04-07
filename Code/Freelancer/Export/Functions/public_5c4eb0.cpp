#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4eb8 _public_5c4eb8

PROC_DECLARE(0x5c4eb0, internal_5c4eb0, public_5c4eb0);
/* CHUNK of public_59ef20 */
extern "C" NAKED register_t __cdecl internal_5c4eb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_420d10
        public_5c4eb8 : nop
        mov eax, offset public_5fec78
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4eb0)
        ASM_EXPORT_ENTRY_SINGLE(0x5c4eb8, public_5c4eb8)
    }
}

#undef public_5c4eb8

#pragma init_seg(compiler)
extern "C" void const* const public_5c4eb8 = __AsmFindLabelExport(&internal_5c4eb0, 0x5c4eb8);
