#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629adb0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393b38 _public_6393b38

PROC_DECLARE(0x6393b30, internal_6393b30, public_6393b30);
/* CHUNK of public_629eca0 */
extern "C" NAKED register_t __cdecl internal_6393b30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_629adb0
        public_6393b38 : nop
        mov eax, offset public_63ace48
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393b30)
        ASM_EXPORT_ENTRY_SINGLE(0x6393b38, public_6393b38)
    }
}

#undef public_6393b38

#pragma init_seg(compiler)
extern "C" void const* const public_6393b38 = __AsmFindLabelExport(&internal_6393b30, 0x6393b38);
