#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9219 _public_5b9219

PROC_DECLARE(0x5b9210, internal_5b9210, public_5b9210);
/* CHUNK of public_437800 */
extern "C" NAKED register_t __cdecl internal_5b9210()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x38]
        jmp dword ptr ds : [public_5c6124]
        public_5b9219 : nop
        mov eax, offset public_5f3174
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9210)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9219, public_5b9219)
    }
}

#undef public_5b9219

#pragma init_seg(compiler)
extern "C" void const* const public_5b9219 = __AsmFindLabelExport(&internal_5b9210, 0x5b9219);
