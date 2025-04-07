#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395478 _public_6395478

PROC_DECLARE(0x6395470, internal_6395470, public_6395470);
/* CHUNK of public_62ed070 */
extern "C" NAKED register_t __cdecl internal_6395470()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62881d0
        public_6395478 : nop
        mov eax, offset public_63aef38
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395470)
        ASM_EXPORT_ENTRY_SINGLE(0x6395478, public_6395478)
    }
}

#undef public_6395478

#pragma init_seg(compiler)
extern "C" void const* const public_6395478 = __AsmFindLabelExport(&internal_6395470, 0x6395478);
