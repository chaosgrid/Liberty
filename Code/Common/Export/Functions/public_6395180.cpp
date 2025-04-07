#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639518b _public_639518b

PROC_DECLARE(0x6395180, internal_6395180, public_6395180);
/* CHUNK of public_62d46f0 */
extern "C" NAKED register_t __cdecl internal_6395180()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_62881d0
        public_639518b : nop
        mov eax, offset public_63aebb0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395180)
        ASM_EXPORT_ENTRY_SINGLE(0x639518b, public_639518b)
    }
}

#undef public_639518b

#pragma init_seg(compiler)
extern "C" void const* const public_639518b = __AsmFindLabelExport(&internal_6395180, 0x639518b);
