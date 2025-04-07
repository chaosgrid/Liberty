#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f0120);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63954db _public_63954db

PROC_DECLARE(0x63954d0, internal_63954d0, public_63954d0);
/* CHUNK of public_62f02b0 */
extern "C" NAKED register_t __cdecl internal_63954d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x48
        jmp public_62f0120
        public_63954db : nop
        mov eax, offset public_63aefac
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63954d0)
        ASM_EXPORT_ENTRY_SINGLE(0x63954db, public_63954db)
    }
}

#undef public_63954db

#pragma init_seg(compiler)
extern "C" void const* const public_63954db = __AsmFindLabelExport(&internal_63954d0, 0x63954db);
