#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402c60);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419b2b _public_419b2b

PROC_DECLARE(0x419b20, internal_419b20, public_419b20);
/* CHUNK of public_402920 */
extern "C" NAKED register_t __cdecl internal_419b20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_402c60
        public_419b2b : nop
        mov eax, offset public_41eb8c
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419b20)
        ASM_EXPORT_ENTRY_SINGLE(0x419b2b, public_419b2b)
    }
}

#undef public_419b2b

#pragma init_seg(compiler)
extern "C" void const* const public_419b2b = __AsmFindLabelExport(&internal_419b20, 0x419b2b);
