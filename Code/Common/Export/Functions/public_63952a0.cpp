#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c3040);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63952ab _public_63952ab

PROC_DECLARE(0x63952a0, internal_63952a0, public_63952a0);
/* CHUNK of public_62d9bf0 */
extern "C" NAKED register_t __cdecl internal_63952a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_62c3040
        public_63952ab : nop
        mov eax, offset public_63aed54
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63952a0)
        ASM_EXPORT_ENTRY_SINGLE(0x63952ab, public_63952ab)
    }
}

#undef public_63952ab

#pragma init_seg(compiler)
extern "C" void const* const public_63952ab = __AsmFindLabelExport(&internal_63952a0, 0x63952ab);
