#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626fe00);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392728 _public_6392728

PROC_DECLARE(0x6392720, internal_6392720, public_6392720);
/* CHUNK of public_626e240 */
extern "C" NAKED register_t __cdecl internal_6392720()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_626fe00
        public_6392728 : nop
        mov eax, offset public_63ab4c4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392720)
        ASM_EXPORT_ENTRY_SINGLE(0x6392728, public_6392728)
    }
}

#undef public_6392728

#pragma init_seg(compiler)
extern "C" void const* const public_6392728 = __AsmFindLabelExport(&internal_6392720, 0x6392728);
