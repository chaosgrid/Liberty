#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_434ac0);
CLANG_FORWARD_PROC_SYMBOL(public_435fd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b90c8 _public_5b90c8
#define public_5b90d3 _public_5b90d3

PROC_DECLARE(0x5b90c0, internal_5b90c0, public_5b90c0);
/* CHUNK of public_4349f0 */
extern "C" NAKED register_t __cdecl internal_5b90c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_435fd0
        public_5b90c8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_434ac0
        public_5b90d3 : nop
        mov eax, offset public_5f2fe4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b90c0)
        ASM_EXPORT_ENTRY_FIRST(0x5b90c8, public_5b90c8)
        ASM_EXPORT_ENTRY_LAST(0x5b90d3, public_5b90d3)
    }
}

#undef public_5b90c8
#undef public_5b90d3

#pragma init_seg(compiler)
extern "C" void const* const public_5b90c8 = __AsmFindLabelExport(&internal_5b90c0, 0x5b90c8);
extern "C" void const* const public_5b90d3 = __AsmFindLabelExport(&internal_5b90c0, 0x5b90d3);
