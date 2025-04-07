#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41a20);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62d08 _public_6d62d08

PROC_DECLARE(0x6d62d00, internal_6d62d00, public_6d62d00);
/* CHUNK of public_6d40af0 */
extern "C" NAKED register_t __cdecl internal_6d62d00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x24]
        jmp public_6d41a20
        public_6d62d08 : nop
        mov eax, offset public_6d75110
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62d00)
        ASM_EXPORT_ENTRY_SINGLE(0x6d62d08, public_6d62d08)
    }
}

#undef public_6d62d08

#pragma init_seg(compiler)
extern "C" void const* const public_6d62d08 = __AsmFindLabelExport(&internal_6d62d00, 0x6d62d08);
