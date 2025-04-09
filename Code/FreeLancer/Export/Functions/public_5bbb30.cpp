#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bbb39 _public_5bbb39

PROC_DECLARE(0x5bbb30, internal_5bbb30, public_5bbb30);
/* CHUNK of public_4738e0 */
extern "C" NAKED register_t __cdecl internal_5bbb30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x14]
        jmp dword ptr ds : [public_5c62b4]
        public_5bbb39 : nop
        mov eax, offset public_5f5e70
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bbb30)
        ASM_EXPORT_ENTRY_SINGLE(0x5bbb39, public_5bbb39)
    }
}

#undef public_5bbb39

#pragma init_seg(compiler)
extern "C" void const* const public_5bbb39 = __AsmFindLabelExport(&internal_5bbb30, 0x5bbb39);
