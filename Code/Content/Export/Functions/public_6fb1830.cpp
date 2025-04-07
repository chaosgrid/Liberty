#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb1839 _public_6fb1839

PROC_DECLARE(0x6fb1830, internal_6fb1830, public_6fb1830);
/* CHUNK of public_6f993c0 */
extern "C" NAKED register_t __cdecl internal_6fb1830()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_6fb3034]
        public_6fb1839 : nop
        mov eax, offset public_6fc6e1c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1830)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb1839, public_6fb1839)
    }
}

#undef public_6fb1839

#pragma init_seg(compiler)
extern "C" void const* const public_6fb1839 = __AsmFindLabelExport(&internal_6fb1830, 0x6fb1839);
