#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a3310);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c5138 _public_5c5138

PROC_DECLARE(0x5c5130, internal_5c5130, public_5c5130);
/* CHUNK of public_5a3db0 */
extern "C" NAKED register_t __cdecl internal_5c5130()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_5a3310
        public_5c5138 : nop
        mov eax, offset public_5fefac
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c5130)
        ASM_EXPORT_ENTRY_SINGLE(0x5c5138, public_5c5138)
    }
}

#undef public_5c5138

#pragma init_seg(compiler)
extern "C" void const* const public_5c5138 = __AsmFindLabelExport(&internal_5c5130, 0x5c5138);
