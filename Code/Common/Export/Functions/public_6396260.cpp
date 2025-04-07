#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630b290);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639626b _public_639626b

PROC_DECLARE(0x6396260, internal_6396260, public_6396260);
/* CHUNK of public_630b220 */
extern "C" NAKED register_t __cdecl internal_6396260()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_630b290
        public_639626b : nop
        mov eax, offset public_63b00b0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396260)
        ASM_EXPORT_ENTRY_SINGLE(0x639626b, public_639626b)
    }
}

#undef public_639626b

#pragma init_seg(compiler)
extern "C" void const* const public_639626b = __AsmFindLabelExport(&internal_6396260, 0x639626b);
