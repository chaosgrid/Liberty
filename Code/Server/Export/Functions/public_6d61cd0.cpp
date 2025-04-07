#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61cdb _public_6d61cdb

PROC_DECLARE(0x6d61cd0, internal_6d61cd0, public_6d61cd0);
/* CHUNK of public_6d18840 */
extern "C" NAKED register_t __cdecl internal_6d61cd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x40]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d61cdb : nop
        mov eax, offset public_6d729d4
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61cd0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d61cdb, public_6d61cdb)
    }
}

#undef public_6d61cdb

#pragma init_seg(compiler)
extern "C" void const* const public_6d61cdb = __AsmFindLabelExport(&internal_6d61cd0, 0x6d61cdb);
