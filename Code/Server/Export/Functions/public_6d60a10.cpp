#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1420);
CLANG_FORWARD_PROC_SYMBOL(public_6cecb50);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60a1b _public_6d60a1b
#define public_6d60a26 _public_6d60a26

PROC_DECLARE(0x6d60a10, internal_6d60a10, public_6d60a10);
/* CHUNK of public_6cf52d0 */
extern "C" NAKED register_t __cdecl internal_6d60a10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 8
        jmp public_6cecb50
        public_6d60a1b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x14
        jmp public_6ce1420
        public_6d60a26 : nop
        mov eax, offset public_6d71364
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60a10)
        ASM_EXPORT_ENTRY_FIRST(0x6d60a1b, public_6d60a1b)
        ASM_EXPORT_ENTRY_LAST(0x6d60a26, public_6d60a26)
    }
}

#undef public_6d60a1b
#undef public_6d60a26

#pragma init_seg(compiler)
extern "C" void const* const public_6d60a1b = __AsmFindLabelExport(&internal_6d60a10, 0x6d60a1b);
extern "C" void const* const public_6d60a26 = __AsmFindLabelExport(&internal_6d60a10, 0x6d60a26);
