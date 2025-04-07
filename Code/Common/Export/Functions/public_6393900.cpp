#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6293160);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393908 _public_6393908

PROC_DECLARE(0x6393900, internal_6393900, public_6393900);
/* CHUNK of public_629ba70 */
extern "C" NAKED register_t __cdecl internal_6393900()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6293160
        public_6393908 : nop
        mov eax, offset public_63acb80
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393900)
        ASM_EXPORT_ENTRY_SINGLE(0x6393908, public_6393908)
    }
}

#undef public_6393908

#pragma init_seg(compiler)
extern "C" void const* const public_6393908 = __AsmFindLabelExport(&internal_6393900, 0x6393908);
