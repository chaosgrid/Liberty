#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41aa28 _public_41aa28

PROC_DECLARE(0x41aa20, internal_41aa20, public_41aa20);
/* CHUNK of public_4159a0 */
extern "C" NAKED register_t __cdecl internal_41aa20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_418a98
        public_41aa28 : nop
        mov eax, offset public_41fb54
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41aa20)
        ASM_EXPORT_ENTRY_SINGLE(0x41aa28, public_41aa28)
    }
}

#undef public_41aa28

#pragma init_seg(compiler)
extern "C" void const* const public_41aa28 = __AsmFindLabelExport(&internal_41aa20, 0x41aa28);
