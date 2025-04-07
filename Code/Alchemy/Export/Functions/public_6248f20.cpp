#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6225910);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248f28 _public_6248f28

PROC_DECLARE(0x6248f20, internal_6248f20, public_6248f20);
/* CHUNK of public_62259e0 */
extern "C" NAKED register_t __cdecl internal_6248f20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_6225910
        public_6248f28 : nop
        mov eax, offset public_6251e74
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248f20)
        ASM_EXPORT_ENTRY_SINGLE(0x6248f28, public_6248f28)
    }
}

#undef public_6248f28

#pragma init_seg(compiler)
extern "C" void const* const public_6248f28 = __AsmFindLabelExport(&internal_6248f20, 0x6248f28);
