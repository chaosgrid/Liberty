#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62169 _public_6d62169

PROC_DECLARE(0x6d62160, internal_6d62160, public_6d62160);
/* CHUNK of public_6d1b8f0 */
extern "C" NAKED register_t __cdecl internal_6d62160()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp dword ptr ds : [public_6d64c60]
        public_6d62169 : nop
        mov eax, offset public_6d72fd8
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62160)
        ASM_EXPORT_ENTRY_SINGLE(0x6d62169, public_6d62169)
    }
}

#undef public_6d62169

#pragma init_seg(compiler)
extern "C" void const* const public_6d62169 = __AsmFindLabelExport(&internal_6d62160, 0x6d62169);
