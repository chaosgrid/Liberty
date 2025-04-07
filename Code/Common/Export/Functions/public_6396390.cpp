#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396398 _public_6396398

PROC_DECLARE(0x6396390, internal_6396390, public_6396390);
/* CHUNK of public_630eda0 */
extern "C" NAKED register_t __cdecl internal_6396390()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x60]
        jmp public_62a68e0
        public_6396398 : nop
        mov eax, offset public_63b0274
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396390)
        ASM_EXPORT_ENTRY_SINGLE(0x6396398, public_6396398)
    }
}

#undef public_6396398

#pragma init_seg(compiler)
extern "C" void const* const public_6396398 = __AsmFindLabelExport(&internal_6396390, 0x6396398);
