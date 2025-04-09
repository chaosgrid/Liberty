#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54d950);

#define public_54d95b _public_54d95b

PROC_DECLARE(0x54d950, internal_54d950, public_54d950);
/* CHUNK of public_5247f0 */
extern "C" NAKED register_t __cdecl internal_54d950()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        sub eax, dword ptr ds : [ecx+0x5C]
        jns public_54d95b
        xor eax, eax
        public_54d95b : nop
        mov ecx, dword ptr ds : [ecx+0x60]
        lea eax, ds:[eax+eax*2]
        fld dword ptr ds : [ecx+eax*8+0x14]
        ret 4
        UNREACHABLE_TRAP(0x54d950)
        ASM_EXPORT_ENTRY_SINGLE(0x54d95b, public_54d95b)
    }
}

#undef public_54d95b

#pragma init_seg(compiler)
extern "C" void const* const public_54d95b = __AsmFindLabelExport(&internal_54d950, 0x54d95b);
