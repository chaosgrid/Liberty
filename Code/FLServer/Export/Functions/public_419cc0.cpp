#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419cc8 _public_419cc8

PROC_DECLARE(0x419cc0, internal_419cc0, public_419cc0);
/* CHUNK of public_406260 */
extern "C" NAKED register_t __cdecl internal_419cc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_418a98
        public_419cc8 : nop
        mov eax, offset public_41edd8
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419cc0)
        ASM_EXPORT_ENTRY_SINGLE(0x419cc8, public_419cc8)
    }
}

#undef public_419cc8

#pragma init_seg(compiler)
extern "C" void const* const public_419cc8 = __AsmFindLabelExport(&internal_419cc0, 0x419cc8);
