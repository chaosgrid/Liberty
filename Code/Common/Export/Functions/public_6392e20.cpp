#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392e2b _public_6392e2b

PROC_DECLARE(0x6392e20, internal_6392e20, public_6392e20);
/* CHUNK of public_627f9d0 */
extern "C" NAKED register_t __cdecl internal_6392e20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x20
        jmp public_6269110
        public_6392e2b : nop
        mov eax, offset public_63abd80
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392e20)
        ASM_EXPORT_ENTRY_SINGLE(0x6392e2b, public_6392e2b)
    }
}

#undef public_6392e2b

#pragma init_seg(compiler)
extern "C" void const* const public_6392e2b = __AsmFindLabelExport(&internal_6392e20, 0x6392e2b);
