#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0d89 _public_5c0d89

PROC_DECLARE(0x5c0d80, internal_5c0d80, public_5c0d80);
/* CHUNK of public_542d40 */
extern "C" NAKED register_t __cdecl internal_5c0d80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_5c69ac]
        public_5c0d89 : nop
        mov eax, offset public_5faff8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0d80)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0d89, public_5c0d89)
    }
}

#undef public_5c0d89

#pragma init_seg(compiler)
extern "C" void const* const public_5c0d89 = __AsmFindLabelExport(&internal_5c0d80, 0x5c0d89);
