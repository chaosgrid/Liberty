#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639784b _public_639784b

PROC_DECLARE(0x6397840, internal_6397840, public_6397840);
/* CHUNK of public_633e020 */
extern "C" NAKED register_t __cdecl internal_6397840()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x54
        jmp public_6269110
        public_639784b : nop
        mov eax, offset public_63b1a3c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397840)
        ASM_EXPORT_ENTRY_SINGLE(0x639784b, public_639784b)
    }
}

#undef public_639784b

#pragma init_seg(compiler)
extern "C" void const* const public_639784b = __AsmFindLabelExport(&internal_6397840, 0x639784b);
