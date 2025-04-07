#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639833b _public_639833b

PROC_DECLARE(0x6398330, internal_6398330, public_6398330);
/* CHUNK of public_6360640 */
extern "C" NAKED register_t __cdecl internal_6398330()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_63449d0
        public_639833b : nop
        mov eax, offset public_63b2818
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398330)
        ASM_EXPORT_ENTRY_SINGLE(0x639833b, public_639833b)
    }
}

#undef public_639833b

#pragma init_seg(compiler)
extern "C" void const* const public_639833b = __AsmFindLabelExport(&internal_6398330, 0x639833b);
