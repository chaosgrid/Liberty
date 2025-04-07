#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d639e9 _public_6d639e9

PROC_DECLARE(0x6d639e0, internal_6d639e0, public_6d639e0);
/* CHUNK of public_6d550a0 */
extern "C" NAKED register_t __cdecl internal_6d639e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp dword ptr ds : [public_6d643f0]
        public_6d639e9 : nop
        mov eax, offset public_6d75bfc
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d639e0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d639e9, public_6d639e9)
    }
}

#undef public_6d639e9

#pragma init_seg(compiler)
extern "C" void const* const public_6d639e9 = __AsmFindLabelExport(&internal_6d639e0, 0x6d639e9);
