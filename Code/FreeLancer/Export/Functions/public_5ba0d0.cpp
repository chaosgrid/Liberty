#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5ba0db _public_5ba0db

PROC_DECLARE(0x5ba0d0, internal_5ba0d0, public_5ba0d0);
/* CHUNK of public_457d60 */
extern "C" NAKED register_t __cdecl internal_5ba0d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_4de730
        public_5ba0db : nop
        mov eax, offset public_5f4474
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5ba0d0)
        ASM_EXPORT_ENTRY_SINGLE(0x5ba0db, public_5ba0db)
    }
}

#undef public_5ba0db

#pragma init_seg(compiler)
extern "C" void const* const public_5ba0db = __AsmFindLabelExport(&internal_5ba0d0, 0x5ba0db);
