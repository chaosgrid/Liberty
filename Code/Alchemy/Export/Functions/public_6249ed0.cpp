#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249edb _public_6249edb

PROC_DECLARE(0x6249ed0, internal_6249ed0, public_6249ed0);
/* CHUNK of public_6237010 */
extern "C" NAKED register_t __cdecl internal_6249ed0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6249edb : nop
        mov eax, offset public_6252f28
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249ed0)
        ASM_EXPORT_ENTRY_SINGLE(0x6249edb, public_6249edb)
    }
}

#undef public_6249edb

#pragma init_seg(compiler)
extern "C" void const* const public_6249edb = __AsmFindLabelExport(&internal_6249ed0, 0x6249edb);
