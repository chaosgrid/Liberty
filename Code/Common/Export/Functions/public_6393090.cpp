#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639309b _public_639309b

PROC_DECLARE(0x6393090, internal_6393090, public_6393090);
/* CHUNK of public_6286f10 */
extern "C" NAKED register_t __cdecl internal_6393090()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_62a68e0
        public_639309b : nop
        mov eax, offset public_63ac120
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393090)
        ASM_EXPORT_ENTRY_SINGLE(0x639309b, public_639309b)
    }
}

#undef public_639309b

#pragma init_seg(compiler)
extern "C" void const* const public_639309b = __AsmFindLabelExport(&internal_6393090, 0x639309b);
