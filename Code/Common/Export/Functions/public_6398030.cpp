#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639803b _public_639803b

PROC_DECLARE(0x6398030, internal_6398030, public_6398030);
/* CHUNK of public_63503c0 */
extern "C" NAKED register_t __cdecl internal_6398030()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_63449d0
        public_639803b : nop
        mov eax, offset public_63b2400
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398030)
        ASM_EXPORT_ENTRY_SINGLE(0x639803b, public_639803b)
    }
}

#undef public_639803b

#pragma init_seg(compiler)
extern "C" void const* const public_639803b = __AsmFindLabelExport(&internal_6398030, 0x639803b);
