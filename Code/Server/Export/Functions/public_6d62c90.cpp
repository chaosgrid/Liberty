#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62c99 _public_6d62c99

PROC_DECLARE(0x6d62c90, internal_6d62c90, public_6d62c90);
/* CHUNK of public_6d3e3f0 */
extern "C" NAKED register_t __cdecl internal_6d62c90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp+4]
        jmp dword ptr ds : [public_6d64b68]
        public_6d62c99 : nop
        mov eax, offset public_6d7503c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62c90)
        ASM_EXPORT_ENTRY_SINGLE(0x6d62c99, public_6d62c99)
    }
}

#undef public_6d62c99

#pragma init_seg(compiler)
extern "C" void const* const public_6d62c99 = __AsmFindLabelExport(&internal_6d62c90, 0x6d62c99);
