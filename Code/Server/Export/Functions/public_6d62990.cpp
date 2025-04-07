#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d20a40);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62998 _public_6d62998

PROC_DECLARE(0x6d62990, internal_6d62990, public_6d62990);
/* CHUNK of public_6d1c230 */
extern "C" NAKED register_t __cdecl internal_6d62990()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6d20a40
        public_6d62998 : nop
        mov eax, offset public_6d739b0
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62990)
        ASM_EXPORT_ENTRY_SINGLE(0x6d62998, public_6d62998)
    }
}

#undef public_6d62998

#pragma init_seg(compiler)
extern "C" void const* const public_6d62998 = __AsmFindLabelExport(&internal_6d62990, 0x6d62998);
