#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41aa08 _public_41aa08

PROC_DECLARE(0x41aa00, internal_41aa00, public_41aa00);
/* CHUNK of public_415910 */
extern "C" NAKED register_t __cdecl internal_41aa00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_418a98
        public_41aa08 : nop
        mov eax, offset public_41fb30
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41aa00)
        ASM_EXPORT_ENTRY_SINGLE(0x41aa08, public_41aa08)
    }
}

#undef public_41aa08

#pragma init_seg(compiler)
extern "C" void const* const public_41aa08 = __AsmFindLabelExport(&internal_41aa00, 0x41aa08);
