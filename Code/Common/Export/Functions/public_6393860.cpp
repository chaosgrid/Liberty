#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6293160);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393868 _public_6393868

PROC_DECLARE(0x6393860, internal_6393860, public_6393860);
/* CHUNK of public_62992b0 */
extern "C" NAKED register_t __cdecl internal_6393860()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6293160
        public_6393868 : nop
        mov eax, offset public_63acab8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393860)
        ASM_EXPORT_ENTRY_SINGLE(0x6393868, public_6393868)
    }
}

#undef public_6393868

#pragma init_seg(compiler)
extern "C" void const* const public_6393868 = __AsmFindLabelExport(&internal_6393860, 0x6393868);
