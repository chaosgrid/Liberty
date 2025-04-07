#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed61d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab44b _public_6fab44b

PROC_DECLARE(0x6fab440, internal_6fab440, public_6fab440);
/* CHUNK of public_6ed72e0 */
extern "C" NAKED register_t __cdecl internal_6fab440()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0xDC]
        jmp public_6ed61d0
        public_6fab44b : nop
        mov eax, offset public_6fbff78
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab440)
        ASM_EXPORT_ENTRY_SINGLE(0x6fab44b, public_6fab44b)
    }
}

#undef public_6fab44b

#pragma init_seg(compiler)
extern "C" void const* const public_6fab44b = __AsmFindLabelExport(&internal_6fab440, 0x6fab44b);
