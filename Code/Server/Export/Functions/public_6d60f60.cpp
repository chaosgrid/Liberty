#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce6710);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60f68 _public_6d60f68

PROC_DECLARE(0x6d60f60, internal_6d60f60, public_6d60f60);
/* CHUNK of public_6d02bc0 */
extern "C" NAKED register_t __cdecl internal_6d60f60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ce6710
        public_6d60f68 : nop
        mov eax, offset public_6d71abc
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60f60)
        ASM_EXPORT_ENTRY_SINGLE(0x6d60f68, public_6d60f68)
    }
}

#undef public_6d60f68

#pragma init_seg(compiler)
extern "C" void const* const public_6d60f68 = __AsmFindLabelExport(&internal_6d60f60, 0x6d60f68);
