#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5390c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0a78 _public_5c0a78

PROC_DECLARE(0x5c0a70, internal_5c0a70, public_5c0a70);
/* CHUNK of public_539000 */
extern "C" NAKED register_t __cdecl internal_5c0a70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_5390c0
        public_5c0a78 : nop
        mov eax, offset public_5fac94
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0a70)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0a78, public_5c0a78)
    }
}

#undef public_5c0a78

#pragma init_seg(compiler)
extern "C" void const* const public_5c0a78 = __AsmFindLabelExport(&internal_5c0a70, 0x5c0a78);
