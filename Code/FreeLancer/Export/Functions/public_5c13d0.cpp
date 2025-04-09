#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_552c50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c13d8 _public_5c13d8
#define public_5c13e3 _public_5c13e3

PROC_DECLARE(0x5c13d0, internal_5c13d0, public_5c13d0);
/* CHUNK of public_552c60 */
extern "C" NAKED register_t __cdecl internal_5c13d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_552c50
        public_5c13d8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_552c50
        public_5c13e3 : nop
        mov eax, offset public_5fb72c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c13d0)
        ASM_EXPORT_ENTRY_FIRST(0x5c13d8, public_5c13d8)
        ASM_EXPORT_ENTRY_LAST(0x5c13e3, public_5c13e3)
    }
}

#undef public_5c13d8
#undef public_5c13e3

#pragma init_seg(compiler)
extern "C" void const* const public_5c13d8 = __AsmFindLabelExport(&internal_5c13d0, 0x5c13d8);
extern "C" void const* const public_5c13e3 = __AsmFindLabelExport(&internal_5c13d0, 0x5c13e3);
