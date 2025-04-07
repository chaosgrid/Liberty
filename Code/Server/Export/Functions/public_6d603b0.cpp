#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce36f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d603bb _public_6d603bb
#define public_6d603c7 _public_6d603c7

PROC_DECLARE(0x6d603b0, internal_6d603b0, public_6d603b0);
/* CHUNK of public_6ce1620 */
extern "C" NAKED register_t __cdecl internal_6d603b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_6ce36f0
        public_6d603bb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp dword ptr ds : [public_6d64b94]
        public_6d603c7 : nop
        mov eax, offset public_6d70b30
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d603b0)
        ASM_EXPORT_ENTRY_FIRST(0x6d603bb, public_6d603bb)
        ASM_EXPORT_ENTRY_LAST(0x6d603c7, public_6d603c7)
    }
}

#undef public_6d603bb
#undef public_6d603c7

#pragma init_seg(compiler)
extern "C" void const* const public_6d603bb = __AsmFindLabelExport(&internal_6d603b0, 0x6d603bb);
extern "C" void const* const public_6d603c7 = __AsmFindLabelExport(&internal_6d603b0, 0x6d603c7);
