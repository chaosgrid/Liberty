#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c1eb9 _public_5c1eb9

PROC_DECLARE(0x5c1eb0, internal_5c1eb0, public_5c1eb0);
/* CHUNK of public_5641f0 */
extern "C" NAKED register_t __cdecl internal_5c1eb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_5c6ea8]
        public_5c1eb9 : nop
        mov eax, offset public_5fc140
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1eb0)
        ASM_EXPORT_ENTRY_SINGLE(0x5c1eb9, public_5c1eb9)
    }
}

#undef public_5c1eb9

#pragma init_seg(compiler)
extern "C" void const* const public_5c1eb9 = __AsmFindLabelExport(&internal_5c1eb0, 0x5c1eb9);
