#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62af440);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393cd8 _public_6393cd8

PROC_DECLARE(0x6393cd0, internal_6393cd0, public_6393cd0);
/* CHUNK of public_62a2a10 */
extern "C" NAKED register_t __cdecl internal_6393cd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62af440
        public_6393cd8 : nop
        mov eax, offset public_63ad0f0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393cd0)
        ASM_EXPORT_ENTRY_SINGLE(0x6393cd8, public_6393cd8)
    }
}

#undef public_6393cd8

#pragma init_seg(compiler)
extern "C" void const* const public_6393cd8 = __AsmFindLabelExport(&internal_6393cd0, 0x6393cd8);
