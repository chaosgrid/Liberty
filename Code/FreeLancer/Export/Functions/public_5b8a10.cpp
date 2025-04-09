#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b735c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8a1b _public_5b8a1b
#define public_5b8a26 _public_5b8a26

PROC_DECLARE(0x5b8a10, internal_5b8a10, public_5b8a10);
/* CHUNK of public_41c1c0 */
extern "C" NAKED register_t __cdecl internal_5b8a10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_5b735c
        public_5b8a1b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x3C
        jmp public_5b735c
        public_5b8a26 : nop
        mov eax, offset public_5f28b4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8a10)
        ASM_EXPORT_ENTRY_FIRST(0x5b8a1b, public_5b8a1b)
        ASM_EXPORT_ENTRY_LAST(0x5b8a26, public_5b8a26)
    }
}

#undef public_5b8a1b
#undef public_5b8a26

#pragma init_seg(compiler)
extern "C" void const* const public_5b8a1b = __AsmFindLabelExport(&internal_5b8a10, 0x5b8a1b);
extern "C" void const* const public_5b8a26 = __AsmFindLabelExport(&internal_5b8a10, 0x5b8a26);
