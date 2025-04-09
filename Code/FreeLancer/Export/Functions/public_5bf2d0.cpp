#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf2df _public_5bf2df

PROC_DECLARE(0x5bf2d0, internal_5bf2d0, public_5bf2d0);
/* CHUNK of public_4f4a10 */
extern "C" NAKED register_t __cdecl internal_5bf2d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x9C
        jmp dword ptr ds : [public_5c658c]
        public_5bf2df : nop
        mov eax, offset public_5f9200
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf2d0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bf2df, public_5bf2df)
    }
}

#undef public_5bf2df

#pragma init_seg(compiler)
extern "C" void const* const public_5bf2df = __AsmFindLabelExport(&internal_5bf2d0, 0x5bf2df);
