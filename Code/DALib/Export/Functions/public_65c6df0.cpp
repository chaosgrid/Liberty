#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c2500);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a6c);

#define public_65c6df9 _public_65c6df9
#define public_65c6e01 _public_65c6e01
#define public_65c6e0a _public_65c6e0a

PROC_DECLARE(0x65c6df0, internal_65c6df0, public_65c6df0);
/* CHUNK of public_65c2340 */
extern "C" NAKED register_t __cdecl internal_65c6df0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2C]
        jmp dword ptr ds : [public_65c706c]
        public_65c6df9 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_65c2500
        public_65c6e01 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp dword ptr ds : [public_65c706c]
        public_65c6e0a : nop
        mov eax, offset public_65c7724
        jmp public_65c6a6c
        UNREACHABLE_TRAP(0x65c6df0)
        ASM_EXPORT_ENTRY_FIRST(0x65c6df9, public_65c6df9)
        ASM_EXPORT_ENTRY(0x65c6e01, public_65c6e01)
        ASM_EXPORT_ENTRY_LAST(0x65c6e0a, public_65c6e0a)
    }
}

#undef public_65c6df9
#undef public_65c6e01
#undef public_65c6e0a

#pragma init_seg(compiler)
extern "C" void const* const public_65c6df9 = __AsmFindLabelExport(&internal_65c6df0, 0x65c6df9);
extern "C" void const* const public_65c6e01 = __AsmFindLabelExport(&internal_65c6df0, 0x65c6e01);
extern "C" void const* const public_65c6e0a = __AsmFindLabelExport(&internal_65c6df0, 0x65c6e0a);
