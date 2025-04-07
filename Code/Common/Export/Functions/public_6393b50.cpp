#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629adb0);
CLANG_FORWARD_PROC_SYMBOL(public_629ed10);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393b58 _public_6393b58
#define public_6393b60 _public_6393b60

PROC_DECLARE(0x6393b50, internal_6393b50, public_6393b50);
/* CHUNK of public_629f180 */
extern "C" NAKED register_t __cdecl internal_6393b50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_629adb0
        public_6393b58 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_629ed10
        public_6393b60 : nop
        mov eax, offset public_63ace98
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393b50)
        ASM_EXPORT_ENTRY_FIRST(0x6393b58, public_6393b58)
        ASM_EXPORT_ENTRY_LAST(0x6393b60, public_6393b60)
    }
}

#undef public_6393b58
#undef public_6393b60

#pragma init_seg(compiler)
extern "C" void const* const public_6393b58 = __AsmFindLabelExport(&internal_6393b50, 0x6393b58);
extern "C" void const* const public_6393b60 = __AsmFindLabelExport(&internal_6393b50, 0x6393b60);
