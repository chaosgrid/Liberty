#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f87dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0a09 _public_6fb0a09
#define public_6fb0a11 _public_6fb0a11
#define public_6fb0a1a _public_6fb0a1a

PROC_DECLARE(0x6fb0a00, internal_6fb0a00, public_6fb0a00);
/* CHUNK of public_6f84f10 */
extern "C" NAKED register_t __cdecl internal_6fb0a00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2C]
        jmp dword ptr ds : [public_6fb3110]
        public_6fb0a09 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_6f87dc0
        public_6fb0a11 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp dword ptr ds : [public_6fb3110]
        public_6fb0a1a : nop
        mov eax, offset public_6fc5d2c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0a00)
        ASM_EXPORT_ENTRY_FIRST(0x6fb0a09, public_6fb0a09)
        ASM_EXPORT_ENTRY(0x6fb0a11, public_6fb0a11)
        ASM_EXPORT_ENTRY_LAST(0x6fb0a1a, public_6fb0a1a)
    }
}

#undef public_6fb0a09
#undef public_6fb0a11
#undef public_6fb0a1a

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0a09 = __AsmFindLabelExport(&internal_6fb0a00, 0x6fb0a09);
extern "C" void const* const public_6fb0a11 = __AsmFindLabelExport(&internal_6fb0a00, 0x6fb0a11);
extern "C" void const* const public_6fb0a1a = __AsmFindLabelExport(&internal_6fb0a00, 0x6fb0a1a);
