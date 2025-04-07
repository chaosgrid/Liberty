#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397c0b _public_6397c0b

PROC_DECLARE(0x6397c00, internal_6397c00, public_6397c00);
/* CHUNK of public_6348e10 */
extern "C" NAKED register_t __cdecl internal_6397c00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 0xC
        jmp public_63449d0
        public_6397c0b : nop
        mov eax, offset public_63b1f10
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397c00)
        ASM_EXPORT_ENTRY_SINGLE(0x6397c0b, public_6397c0b)
    }
}

#undef public_6397c0b

#pragma init_seg(compiler)
extern "C" void const* const public_6397c0b = __AsmFindLabelExport(&internal_6397c00, 0x6397c0b);
