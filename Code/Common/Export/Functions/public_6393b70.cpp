#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ed10);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393b78 _public_6393b78

PROC_DECLARE(0x6393b70, internal_6393b70, public_6393b70);
/* CHUNK of public_629f0b0 */
extern "C" NAKED register_t __cdecl internal_6393b70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_629ed10
        public_6393b78 : nop
        mov eax, offset public_63acebc
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393b70)
        ASM_EXPORT_ENTRY_SINGLE(0x6393b78, public_6393b78)
    }
}

#undef public_6393b78

#pragma init_seg(compiler)
extern "C" void const* const public_6393b78 = __AsmFindLabelExport(&internal_6393b70, 0x6393b78);
