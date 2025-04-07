#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1420);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6039b _public_6d6039b

PROC_DECLARE(0x6d60390, internal_6d60390, public_6d60390);
/* CHUNK of public_6ce1100 */
extern "C" NAKED register_t __cdecl internal_6d60390()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_6ce1420
        public_6d6039b : nop
        mov eax, offset public_6d70b04
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60390)
        ASM_EXPORT_ENTRY_SINGLE(0x6d6039b, public_6d6039b)
    }
}

#undef public_6d6039b

#pragma init_seg(compiler)
extern "C" void const* const public_6d6039b = __AsmFindLabelExport(&internal_6d60390, 0x6d6039b);
