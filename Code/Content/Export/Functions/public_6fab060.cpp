#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecc2e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab068 _public_6fab068

PROC_DECLARE(0x6fab060, internal_6fab060, public_6fab060);
/* CHUNK of public_6ecf3a0 */
extern "C" NAKED register_t __cdecl internal_6fab060()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ecc2e0
        public_6fab068 : nop
        mov eax, offset public_6fbf584
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab060)
        ASM_EXPORT_ENTRY_SINGLE(0x6fab068, public_6fab068)
    }
}

#undef public_6fab068

#pragma init_seg(compiler)
extern "C" void const* const public_6fab068 = __AsmFindLabelExport(&internal_6fab060, 0x6fab068);
