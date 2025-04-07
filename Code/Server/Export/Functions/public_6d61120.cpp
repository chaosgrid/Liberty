#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61128 _public_6d61128

PROC_DECLARE(0x6d61120, internal_6d61120, public_6d61120);
/* CHUNK of public_6d04ce0 */
extern "C" NAKED register_t __cdecl internal_6d61120()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6cee4a0
        public_6d61128 : nop
        mov eax, offset public_6d71cc0
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61120)
        ASM_EXPORT_ENTRY_SINGLE(0x6d61128, public_6d61128)
    }
}

#undef public_6d61128

#pragma init_seg(compiler)
extern "C" void const* const public_6d61128 = __AsmFindLabelExport(&internal_6d61120, 0x6d61128);
