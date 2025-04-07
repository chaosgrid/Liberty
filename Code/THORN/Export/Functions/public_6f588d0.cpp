#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f588db _public_6f588db

PROC_DECLARE(0x6f588d0, internal_6f588d0, public_6f588d0);
/* CHUNK of public_6f325f0 */
extern "C" NAKED register_t __cdecl internal_6f588d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6f57e26
        pop ecx
        ret 
        public_6f588db : nop
        mov eax, offset public_6f5ba70
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f588d0)
        ASM_EXPORT_ENTRY_SINGLE(0x6f588db, public_6f588db)
    }
}

#undef public_6f588db

#pragma init_seg(compiler)
extern "C" void const* const public_6f588db = __AsmFindLabelExport(&internal_6f588d0, 0x6f588db);
