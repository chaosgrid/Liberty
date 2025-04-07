#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed61d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab46b _public_6fab46b

PROC_DECLARE(0x6fab460, internal_6fab460, public_6fab460);
/* CHUNK of public_6ededd0 */
extern "C" NAKED register_t __cdecl internal_6fab460()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1EC]
        jmp public_6ed61d0
        public_6fab46b : nop
        mov eax, offset public_6fbffc0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab460)
        ASM_EXPORT_ENTRY_SINGLE(0x6fab46b, public_6fab46b)
    }
}

#undef public_6fab46b

#pragma init_seg(compiler)
extern "C" void const* const public_6fab46b = __AsmFindLabelExport(&internal_6fab460, 0x6fab46b);
