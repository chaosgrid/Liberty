#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61e39 _public_6d61e39

PROC_DECLARE(0x6d61e30, internal_6d61e30, public_6d61e30);
/* CHUNK of public_6d184e0 */
extern "C" NAKED register_t __cdecl internal_6d61e30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x20]
        jmp dword ptr ds : [public_6d6474c]
        public_6d61e39 : nop
        mov eax, offset public_6d72b68
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61e30)
        ASM_EXPORT_ENTRY_SINGLE(0x6d61e39, public_6d61e39)
    }
}

#undef public_6d61e39

#pragma init_seg(compiler)
extern "C" void const* const public_6d61e39 = __AsmFindLabelExport(&internal_6d61e30, 0x6d61e39);
