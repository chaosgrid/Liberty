#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ed10);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393628 _public_6393628

PROC_DECLARE(0x6393620, internal_6393620, public_6393620);
/* CHUNK of public_62930d0 */
extern "C" NAKED register_t __cdecl internal_6393620()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_629ed10
        public_6393628 : nop
        mov eax, offset public_63ac780
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393620)
        ASM_EXPORT_ENTRY_SINGLE(0x6393628, public_6393628)
    }
}

#undef public_6393628

#pragma init_seg(compiler)
extern "C" void const* const public_6393628 = __AsmFindLabelExport(&internal_6393620, 0x6393628);
