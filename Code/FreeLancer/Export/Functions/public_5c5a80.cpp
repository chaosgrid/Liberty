#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c5a89 _public_5c5a89

PROC_DECLARE(0x5c5a80, internal_5c5a80, public_5c5a80);
/* CHUNK of public_5b6d30 */
extern "C" NAKED register_t __cdecl internal_5c5a80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_5c7058]
        public_5c5a89 : nop
        mov eax, offset public_5ffbbc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c5a80)
        ASM_EXPORT_ENTRY_SINGLE(0x5c5a89, public_5c5a89)
    }
}

#undef public_5c5a89

#pragma init_seg(compiler)
extern "C" void const* const public_5c5a89 = __AsmFindLabelExport(&internal_5c5a80, 0x5c5a89);
