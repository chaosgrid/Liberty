#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392b58 _public_6392b58

PROC_DECLARE(0x6392b50, internal_6392b50, public_6392b50);
/* CHUNK of public_6279800 */
extern "C" NAKED register_t __cdecl internal_6392b50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6269110
        public_6392b58 : nop
        mov eax, offset public_63ab964
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392b50)
        ASM_EXPORT_ENTRY_SINGLE(0x6392b58, public_6392b58)
    }
}

#undef public_6392b58

#pragma init_seg(compiler)
extern "C" void const* const public_6392b58 = __AsmFindLabelExport(&internal_6392b50, 0x6392b58);
