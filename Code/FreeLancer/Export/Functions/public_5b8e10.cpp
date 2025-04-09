#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8e1b _public_5b8e1b
#define public_5b8e26 _public_5b8e26

PROC_DECLARE(0x5b8e10, internal_5b8e10, public_5b8e10);
/* CHUNK of public_42dd70 */
extern "C" NAKED register_t __cdecl internal_5b8e10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_4de730
        public_5b8e1b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x28
        jmp public_4de730
        public_5b8e26 : nop
        mov eax, offset public_5f2d04
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8e10)
        ASM_EXPORT_ENTRY_FIRST(0x5b8e1b, public_5b8e1b)
        ASM_EXPORT_ENTRY_LAST(0x5b8e26, public_5b8e26)
    }
}

#undef public_5b8e1b
#undef public_5b8e26

#pragma init_seg(compiler)
extern "C" void const* const public_5b8e1b = __AsmFindLabelExport(&internal_5b8e10, 0x5b8e1b);
extern "C" void const* const public_5b8e26 = __AsmFindLabelExport(&internal_5b8e10, 0x5b8e26);
