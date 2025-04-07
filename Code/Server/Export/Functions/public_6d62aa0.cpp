#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62aa9 _public_6d62aa9
#define public_6d62ab2 _public_6d62ab2

PROC_DECLARE(0x6d62aa0, internal_6d62aa0, public_6d62aa0);
/* CHUNK of public_6d20860 */
extern "C" NAKED register_t __cdecl internal_6d62aa0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x38]
        jmp dword ptr ds : [public_6d64b94]
        public_6d62aa9 : nop
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_6d64c60]
        public_6d62ab2 : nop
        mov eax, offset public_6d73b48
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62aa0)
        ASM_EXPORT_ENTRY_FIRST(0x6d62aa9, public_6d62aa9)
        ASM_EXPORT_ENTRY_LAST(0x6d62ab2, public_6d62ab2)
    }
}

#undef public_6d62aa9
#undef public_6d62ab2

#pragma init_seg(compiler)
extern "C" void const* const public_6d62aa9 = __AsmFindLabelExport(&internal_6d62aa0, 0x6d62aa9);
extern "C" void const* const public_6d62ab2 = __AsmFindLabelExport(&internal_6d62aa0, 0x6d62ab2);
