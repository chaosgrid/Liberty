#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639809b _public_639809b

PROC_DECLARE(0x6398090, internal_6398090, public_6398090);
/* CHUNK of public_6355380 */
extern "C" NAKED register_t __cdecl internal_6398090()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x24
        jmp public_63449d0
        public_639809b : nop
        mov eax, offset public_63b24c8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398090)
        ASM_EXPORT_ENTRY_SINGLE(0x639809b, public_639809b)
    }
}

#undef public_639809b

#pragma init_seg(compiler)
extern "C" void const* const public_639809b = __AsmFindLabelExport(&internal_6398090, 0x639809b);
