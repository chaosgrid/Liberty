#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b5980);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393cb8 _public_6393cb8

PROC_DECLARE(0x6393cb0, internal_6393cb0, public_6393cb0);
/* CHUNK of public_62a2880 */
extern "C" NAKED register_t __cdecl internal_6393cb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62b5980
        public_6393cb8 : nop
        mov eax, offset public_63ad0cc
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393cb0)
        ASM_EXPORT_ENTRY_SINGLE(0x6393cb8, public_6393cb8)
    }
}

#undef public_6393cb8

#pragma init_seg(compiler)
extern "C" void const* const public_6393cb8 = __AsmFindLabelExport(&internal_6393cb0, 0x6393cb8);
