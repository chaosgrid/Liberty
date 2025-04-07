#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6329710);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397028 _public_6397028

PROC_DECLARE(0x6397020, internal_6397020, public_6397020);
/* CHUNK of public_6325540 */
extern "C" NAKED register_t __cdecl internal_6397020()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6329710
        public_6397028 : nop
        mov eax, offset public_63b1098
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397020)
        ASM_EXPORT_ENTRY_SINGLE(0x6397028, public_6397028)
    }
}

#undef public_6397028

#pragma init_seg(compiler)
extern "C" void const* const public_6397028 = __AsmFindLabelExport(&internal_6397020, 0x6397028);
