#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f439a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f59558 _public_6f59558

PROC_DECLARE(0x6f59550, internal_6f59550, public_6f59550);
/* CHUNK of public_6f48840 */
extern "C" NAKED register_t __cdecl internal_6f59550()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f439a0
        public_6f59558 : nop
        mov eax, offset public_6f5c768
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f59550)
        ASM_EXPORT_ENTRY_SINGLE(0x6f59558, public_6f59558)
    }
}

#undef public_6f59558

#pragma init_seg(compiler)
extern "C" void const* const public_6f59558 = __AsmFindLabelExport(&internal_6f59550, 0x6f59558);
