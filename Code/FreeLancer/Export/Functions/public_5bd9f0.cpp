#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5154f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd9f8 _public_5bd9f8
#define public_5bda03 _public_5bda03

PROC_DECLARE(0x5bd9f0, internal_5bd9f0, public_5bd9f0);
/* CHUNK of public_4ca800 */
extern "C" NAKED register_t __cdecl internal_5bd9f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_5154f0
        public_5bd9f8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x24
        jmp public_4de730
        public_5bda03 : nop
        mov eax, offset public_5f7e68
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd9f0)
        ASM_EXPORT_ENTRY_FIRST(0x5bd9f8, public_5bd9f8)
        ASM_EXPORT_ENTRY_LAST(0x5bda03, public_5bda03)
    }
}

#undef public_5bd9f8
#undef public_5bda03

#pragma init_seg(compiler)
extern "C" void const* const public_5bd9f8 = __AsmFindLabelExport(&internal_5bd9f0, 0x5bd9f8);
extern "C" void const* const public_5bda03 = __AsmFindLabelExport(&internal_5bd9f0, 0x5bda03);
