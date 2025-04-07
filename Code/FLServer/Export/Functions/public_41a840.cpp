#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a848 _public_41a848

PROC_DECLARE(0x41a840, internal_41a840, public_41a840);
/* CHUNK of public_413380 */
extern "C" NAKED register_t __cdecl internal_41a840()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_418a98
        public_41a848 : nop
        mov eax, offset public_41f988
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a840)
        ASM_EXPORT_ENTRY_SINGLE(0x41a848, public_41a848)
    }
}

#undef public_41a848

#pragma init_seg(compiler)
extern "C" void const* const public_41a848 = __AsmFindLabelExport(&internal_41a840, 0x41a848);
