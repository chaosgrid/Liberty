#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_531af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c06b8 _public_5c06b8
#define public_5c06c3 _public_5c06c3

PROC_DECLARE(0x5c06b0, internal_5c06b0, public_5c06b0);
/* CHUNK of public_531b40 */
extern "C" NAKED register_t __cdecl internal_5c06b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_531af0
        public_5c06b8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_502d90
        public_5c06c3 : nop
        mov eax, offset public_5fa81c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c06b0)
        ASM_EXPORT_ENTRY_FIRST(0x5c06b8, public_5c06b8)
        ASM_EXPORT_ENTRY_LAST(0x5c06c3, public_5c06c3)
    }
}

#undef public_5c06b8
#undef public_5c06c3

#pragma init_seg(compiler)
extern "C" void const* const public_5c06b8 = __AsmFindLabelExport(&internal_5c06b0, 0x5c06b8);
extern "C" void const* const public_5c06c3 = __AsmFindLabelExport(&internal_5c06b0, 0x5c06c3);
