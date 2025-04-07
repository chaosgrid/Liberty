#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62bb9 _public_6d62bb9
#define public_6d62bc2 _public_6d62bc2
#define public_6d62bcb _public_6d62bcb

PROC_DECLARE(0x6d62bb0, internal_6d62bb0, public_6d62bb0);
/* CHUNK of public_6d28ab0 */
extern "C" NAKED register_t __cdecl internal_6d62bb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x38]
        jmp dword ptr ds : [public_6d64b94]
        public_6d62bb9 : nop
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_6d64c60]
        public_6d62bc2 : nop
        lea ecx, ss:[ebp-0x38]
        jmp dword ptr ds : [public_6d64b94]
        public_6d62bcb : nop
        mov eax, offset public_6d73e6c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62bb0)
        ASM_EXPORT_ENTRY_FIRST(0x6d62bb9, public_6d62bb9)
        ASM_EXPORT_ENTRY(0x6d62bc2, public_6d62bc2)
        ASM_EXPORT_ENTRY_LAST(0x6d62bcb, public_6d62bcb)
    }
}

#undef public_6d62bb9
#undef public_6d62bc2
#undef public_6d62bcb

#pragma init_seg(compiler)
extern "C" void const* const public_6d62bb9 = __AsmFindLabelExport(&internal_6d62bb0, 0x6d62bb9);
extern "C" void const* const public_6d62bc2 = __AsmFindLabelExport(&internal_6d62bb0, 0x6d62bc2);
extern "C" void const* const public_6d62bcb = __AsmFindLabelExport(&internal_6d62bb0, 0x6d62bcb);
