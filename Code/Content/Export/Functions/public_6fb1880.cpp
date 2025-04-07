#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f956a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f99cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb1888 _public_6fb1888
#define public_6fb1890 _public_6fb1890

PROC_DECLARE(0x6fb1880, internal_6fb1880, public_6fb1880);
/* CHUNK of public_6f998c0 */
extern "C" NAKED register_t __cdecl internal_6fb1880()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x48]
        jmp public_6f99cd0
        public_6fb1888 : nop
        lea ecx, ss:[ebp-0x30]
        jmp public_6f956a0
        public_6fb1890 : nop
        mov eax, offset public_6fc6e84
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1880)
        ASM_EXPORT_ENTRY_FIRST(0x6fb1888, public_6fb1888)
        ASM_EXPORT_ENTRY_LAST(0x6fb1890, public_6fb1890)
    }
}

#undef public_6fb1888
#undef public_6fb1890

#pragma init_seg(compiler)
extern "C" void const* const public_6fb1888 = __AsmFindLabelExport(&internal_6fb1880, 0x6fb1888);
extern "C" void const* const public_6fb1890 = __AsmFindLabelExport(&internal_6fb1880, 0x6fb1890);
