#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33090);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58788 _public_6f58788

PROC_DECLARE(0x6f58780, internal_6f58780, public_6f58780);
/* CHUNK of public_6f2fdd0 */
extern "C" NAKED register_t __cdecl internal_6f58780()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f33090
        public_6f58788 : nop
        mov eax, offset public_6f5b900
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58780)
        ASM_EXPORT_ENTRY_SINGLE(0x6f58788, public_6f58788)
    }
}

#undef public_6f58788

#pragma init_seg(compiler)
extern "C" void const* const public_6f58788 = __AsmFindLabelExport(&internal_6f58780, 0x6f58788);
