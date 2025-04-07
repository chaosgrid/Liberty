#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6234060);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249bcb _public_6249bcb
#define public_6249bd6 _public_6249bd6

PROC_DECLARE(0x6249bc0, internal_6249bc0, public_6249bc0);
/* CHUNK of public_6233330 */
extern "C" NAKED register_t __cdecl internal_6249bc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x108]
        jmp public_6234060
        public_6249bcb : nop
        lea ecx, ss:[ebp-0xBC]
        jmp public_6234060
        public_6249bd6 : nop
        mov eax, offset public_6252bfc
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249bc0)
        ASM_EXPORT_ENTRY_FIRST(0x6249bcb, public_6249bcb)
        ASM_EXPORT_ENTRY_LAST(0x6249bd6, public_6249bd6)
    }
}

#undef public_6249bcb
#undef public_6249bd6

#pragma init_seg(compiler)
extern "C" void const* const public_6249bcb = __AsmFindLabelExport(&internal_6249bc0, 0x6249bcb);
extern "C" void const* const public_6249bd6 = __AsmFindLabelExport(&internal_6249bc0, 0x6249bd6);
