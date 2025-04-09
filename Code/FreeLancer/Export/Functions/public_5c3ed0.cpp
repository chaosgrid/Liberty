#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c3edb _public_5c3edb

PROC_DECLARE(0x5c3ed0, internal_5c3ed0, public_5c3ed0);
/* CHUNK of public_57bff0 */
extern "C" NAKED register_t __cdecl internal_5c3ed0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c3edb : nop
        mov eax, offset public_5fdb74
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c3ed0)
        ASM_EXPORT_ENTRY_SINGLE(0x5c3edb, public_5c3edb)
    }
}

#undef public_5c3edb

#pragma init_seg(compiler)
extern "C" void const* const public_5c3edb = __AsmFindLabelExport(&internal_5c3ed0, 0x5c3edb);
