#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393e8b _public_6393e8b

PROC_DECLARE(0x6393e80, internal_6393e80, public_6393e80);
/* CHUNK of public_62a5d70 */
extern "C" NAKED register_t __cdecl internal_6393e80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x44
        jmp public_62a68e0
        public_6393e8b : nop
        mov eax, offset public_63ad314
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393e80)
        ASM_EXPORT_ENTRY_SINGLE(0x6393e8b, public_6393e8b)
    }
}

#undef public_6393e8b

#pragma init_seg(compiler)
extern "C" void const* const public_6393e8b = __AsmFindLabelExport(&internal_6393e80, 0x6393e8b);
