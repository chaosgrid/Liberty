#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_419020);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a268 _public_41a268

PROC_DECLARE(0x41a260, internal_41a260, public_41a260);
/* CHUNK of public_40de20 */
extern "C" NAKED register_t __cdecl internal_41a260()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_419020
        public_41a268 : nop
        mov eax, offset public_41f3d0
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a260)
        ASM_EXPORT_ENTRY_SINGLE(0x41a268, public_41a268)
    }
}

#undef public_41a268

#pragma init_seg(compiler)
extern "C" void const* const public_41a268 = __AsmFindLabelExport(&internal_41a260, 0x41a268);
