#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab8db _public_6fab8db

PROC_DECLARE(0x6fab8d0, internal_6fab8d0, public_6fab8d0);
/* CHUNK of public_6ee2b70 */
extern "C" NAKED register_t __cdecl internal_6fab8d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_6eec8d0
        public_6fab8db : nop
        mov eax, offset public_6fc0360
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab8d0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fab8db, public_6fab8db)
    }
}

#undef public_6fab8db

#pragma init_seg(compiler)
extern "C" void const* const public_6fab8db = __AsmFindLabelExport(&internal_6fab8d0, 0x6fab8db);
