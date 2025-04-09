#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48e5f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c1258 _public_5c1258

PROC_DECLARE(0x5c1250, internal_5c1250, public_5c1250);
/* CHUNK of public_549290 */
extern "C" NAKED register_t __cdecl internal_5c1250()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_48e5f0
        public_5c1258 : nop
        mov eax, offset public_5fb58c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1250)
        ASM_EXPORT_ENTRY_SINGLE(0x5c1258, public_5c1258)
    }
}

#undef public_5c1258

#pragma init_seg(compiler)
extern "C" void const* const public_5c1258 = __AsmFindLabelExport(&internal_5c1250, 0x5c1258);
