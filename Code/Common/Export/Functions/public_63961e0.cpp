#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63961e8 _public_63961e8

PROC_DECLARE(0x63961e0, internal_63961e0, public_63961e0);
/* CHUNK of public_630a380 */
extern "C" NAKED register_t __cdecl internal_63961e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62a68e0
        public_63961e8 : nop
        mov eax, offset public_63b0040
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63961e0)
        ASM_EXPORT_ENTRY_SINGLE(0x63961e8, public_63961e8)
    }
}

#undef public_63961e8

#pragma init_seg(compiler)
extern "C" void const* const public_63961e8 = __AsmFindLabelExport(&internal_63961e0, 0x63961e8);
