#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4ad8 _public_5c4ad8
#define public_5c4ae6 _public_5c4ae6

PROC_DECLARE(0x5c4ad0, internal_5c4ad0, public_5c4ad0);
/* CHUNK of public_595420 */
extern "C" NAKED register_t __cdecl internal_5c4ad0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5c4ad8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x3A0
        jmp public_4de730
        public_5c4ae6 : nop
        mov eax, offset public_5fe7c0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4ad0)
        ASM_EXPORT_ENTRY_FIRST(0x5c4ad8, public_5c4ad8)
        ASM_EXPORT_ENTRY_LAST(0x5c4ae6, public_5c4ae6)
    }
}

#undef public_5c4ad8
#undef public_5c4ae6

#pragma init_seg(compiler)
extern "C" void const* const public_5c4ad8 = __AsmFindLabelExport(&internal_5c4ad0, 0x5c4ad8);
extern "C" void const* const public_5c4ae6 = __AsmFindLabelExport(&internal_5c4ad0, 0x5c4ae6);
