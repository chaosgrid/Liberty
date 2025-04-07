#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5396d0);

#define public_5396d9 _public_5396d9
#define public_5396db _public_5396db

PROC_DECLARE(0x5396d0, internal_5396d0, public_5396d0);
/* CHUNK of public_5394b0 */
extern "C" NAKED register_t __cdecl internal_5396d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        test ecx, ecx
        je public_5396d9
        add ecx, 8
        jmp public_5396db
        public_5396d9 : nop
        xor ecx, ecx
        public_5396db : nop
        jmp dword ptr ds : [public_5c6a00]
        UNREACHABLE_TRAP(0x5396d0)
        ASM_EXPORT_ENTRY_FIRST(0x5396d9, public_5396d9)
        ASM_EXPORT_ENTRY_LAST(0x5396db, public_5396db)
    }
}

#undef public_5396d9
#undef public_5396db

#pragma init_seg(compiler)
extern "C" void const* const public_5396d9 = __AsmFindLabelExport(&internal_5396d0, 0x5396d9);
extern "C" void const* const public_5396db = __AsmFindLabelExport(&internal_5396d0, 0x5396db);
