#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafec9 _public_6fafec9

PROC_DECLARE(0x6fafec0, internal_6fafec0, public_6fafec0);
/* CHUNK of public_6f71560 */
extern "C" NAKED register_t __cdecl internal_6fafec0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_6fb3110]
        public_6fafec9 : nop
        mov eax, offset public_6fc5154
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafec0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fafec9, public_6fafec9)
    }
}

#undef public_6fafec9

#pragma init_seg(compiler)
extern "C" void const* const public_6fafec9 = __AsmFindLabelExport(&internal_6fafec0, 0x6fafec9);
