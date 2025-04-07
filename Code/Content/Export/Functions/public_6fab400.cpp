#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed61d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab40b _public_6fab40b

PROC_DECLARE(0x6fab400, internal_6fab400, public_6fab400);
/* CHUNK of public_6edffd0 */
extern "C" NAKED register_t __cdecl internal_6fab400()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x27C]
        jmp public_6ed61d0
        public_6fab40b : nop
        mov eax, offset public_6fbff30
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab400)
        ASM_EXPORT_ENTRY_SINGLE(0x6fab40b, public_6fab40b)
    }
}

#undef public_6fab40b

#pragma init_seg(compiler)
extern "C" void const* const public_6fab40b = __AsmFindLabelExport(&internal_6fab400, 0x6fab40b);
