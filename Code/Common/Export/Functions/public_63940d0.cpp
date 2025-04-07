#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63940db _public_63940db

PROC_DECLARE(0x63940d0, internal_63940d0, public_63940d0);
/* CHUNK of public_62ac240 */
extern "C" NAKED register_t __cdecl internal_63940d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63940db : nop
        mov eax, offset public_63ad5cc
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63940d0)
        ASM_EXPORT_ENTRY_SINGLE(0x63940db, public_63940db)
    }
}

#undef public_63940db

#pragma init_seg(compiler)
extern "C" void const* const public_63940db = __AsmFindLabelExport(&internal_63940d0, 0x63940db);
