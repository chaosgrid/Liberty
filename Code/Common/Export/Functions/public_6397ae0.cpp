#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345280);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397ae8 _public_6397ae8

PROC_DECLARE(0x6397ae0, internal_6397ae0, public_6397ae0);
/* CHUNK of public_6345100 */
extern "C" NAKED register_t __cdecl internal_6397ae0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6345280
        public_6397ae8 : nop
        mov eax, offset public_63b1d60
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397ae0)
        ASM_EXPORT_ENTRY_SINGLE(0x6397ae8, public_6397ae8)
    }
}

#undef public_6397ae8

#pragma init_seg(compiler)
extern "C" void const* const public_6397ae8 = __AsmFindLabelExport(&internal_6397ae0, 0x6397ae8);
