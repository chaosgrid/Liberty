#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0c0f _public_5c0c0f

PROC_DECLARE(0x5c0c00, internal_5c0c00, public_5c0c00);
/* CHUNK of public_53b220 */
extern "C" NAKED register_t __cdecl internal_5c0c00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x9C
        jmp dword ptr ds : [public_5c658c]
        public_5c0c0f : nop
        mov eax, offset public_5fae0c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0c00)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0c0f, public_5c0c0f)
    }
}

#undef public_5c0c0f

#pragma init_seg(compiler)
extern "C" void const* const public_5c0c0f = __AsmFindLabelExport(&internal_5c0c00, 0x5c0c0f);
