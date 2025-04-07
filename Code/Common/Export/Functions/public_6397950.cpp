#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634b6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397958 _public_6397958

PROC_DECLARE(0x6397950, internal_6397950, public_6397950);
/* CHUNK of public_6342c80 */
extern "C" NAKED register_t __cdecl internal_6397950()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_634b6a0
        public_6397958 : nop
        mov eax, offset public_63b1b70
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397950)
        ASM_EXPORT_ENTRY_SINGLE(0x6397958, public_6397958)
    }
}

#undef public_6397958

#pragma init_seg(compiler)
extern "C" void const* const public_6397958 = __AsmFindLabelExport(&internal_6397950, 0x6397958);
