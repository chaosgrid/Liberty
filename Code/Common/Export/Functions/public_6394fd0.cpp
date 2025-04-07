#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394fdb _public_6394fdb

PROC_DECLARE(0x6394fd0, internal_6394fd0, public_6394fd0);
/* CHUNK of public_62d16d0 */
extern "C" NAKED register_t __cdecl internal_6394fd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6394fdb : nop
        mov eax, offset public_63ae800
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394fd0)
        ASM_EXPORT_ENTRY_SINGLE(0x6394fdb, public_6394fdb)
    }
}

#undef public_6394fdb

#pragma init_seg(compiler)
extern "C" void const* const public_6394fdb = __AsmFindLabelExport(&internal_6394fd0, 0x6394fdb);
