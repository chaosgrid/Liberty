#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_524a30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c012b _public_5c012b

PROC_DECLARE(0x5c0120, internal_5c0120, public_5c0120);
/* CHUNK of public_522480 */
extern "C" NAKED register_t __cdecl internal_5c0120()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x3C
        jmp public_524a30
        public_5c012b : nop
        mov eax, offset public_5fa0bc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0120)
        ASM_EXPORT_ENTRY_SINGLE(0x5c012b, public_5c012b)
    }
}

#undef public_5c012b

#pragma init_seg(compiler)
extern "C" void const* const public_5c012b = __AsmFindLabelExport(&internal_5c0120, 0x5c012b);
