#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c1e99 _public_5c1e99

PROC_DECLARE(0x5c1e90, internal_5c1e90, public_5c1e90);
/* CHUNK of public_564170 */
extern "C" NAKED register_t __cdecl internal_5c1e90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_5c6e50]
        public_5c1e99 : nop
        mov eax, offset public_5fc11c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1e90)
        ASM_EXPORT_ENTRY_SINGLE(0x5c1e99, public_5c1e99)
    }
}

#undef public_5c1e99

#pragma init_seg(compiler)
extern "C" void const* const public_5c1e99 = __AsmFindLabelExport(&internal_5c1e90, 0x5c1e99);
