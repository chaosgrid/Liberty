#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed61d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab42b _public_6fab42b

PROC_DECLARE(0x6fab420, internal_6fab420, public_6fab420);
/* CHUNK of public_6ed9100 */
extern "C" NAKED register_t __cdecl internal_6fab420()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x164]
        jmp public_6ed61d0
        public_6fab42b : nop
        mov eax, offset public_6fbff54
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab420)
        ASM_EXPORT_ENTRY_SINGLE(0x6fab42b, public_6fab42b)
    }
}

#undef public_6fab42b

#pragma init_seg(compiler)
extern "C" void const* const public_6fab42b = __AsmFindLabelExport(&internal_6fab420, 0x6fab42b);
