#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfffc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61698 _public_6d61698

PROC_DECLARE(0x6d61690, internal_6d61690, public_6d61690);
/* CHUNK of public_6d0d4a0 */
extern "C" NAKED register_t __cdecl internal_6d61690()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6cfffc0
        public_6d61698 : nop
        mov eax, offset public_6d722c8
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61690)
        ASM_EXPORT_ENTRY_SINGLE(0x6d61698, public_6d61698)
    }
}

#undef public_6d61698

#pragma init_seg(compiler)
extern "C" void const* const public_6d61698 = __AsmFindLabelExport(&internal_6d61690, 0x6d61698);
