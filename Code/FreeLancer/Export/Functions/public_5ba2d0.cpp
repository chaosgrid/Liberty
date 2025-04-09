#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5ba2db _public_5ba2db

PROC_DECLARE(0x5ba2d0, internal_5ba2d0, public_5ba2d0);
/* CHUNK of public_45b530 */
extern "C" NAKED register_t __cdecl internal_5ba2d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5ba2db : nop
        mov eax, offset public_5f46b4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5ba2d0)
        ASM_EXPORT_ENTRY_SINGLE(0x5ba2db, public_5ba2db)
    }
}

#undef public_5ba2db

#pragma init_seg(compiler)
extern "C" void const* const public_5ba2db = __AsmFindLabelExport(&internal_5ba2d0, 0x5ba2db);
