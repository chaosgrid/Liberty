#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d416f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62ce8 _public_6d62ce8

PROC_DECLARE(0x6d62ce0, internal_6d62ce0, public_6d62ce0);
/* CHUNK of public_6d40b10 */
extern "C" NAKED register_t __cdecl internal_6d62ce0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_6d416f0
        public_6d62ce8 : nop
        mov eax, offset public_6d750ec
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62ce0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d62ce8, public_6d62ce8)
    }
}

#undef public_6d62ce8

#pragma init_seg(compiler)
extern "C" void const* const public_6d62ce8 = __AsmFindLabelExport(&internal_6d62ce0, 0x6d62ce8);
