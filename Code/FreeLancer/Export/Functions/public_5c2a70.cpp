#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_487c30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c2a79 _public_5c2a79
#define public_5c2a81 _public_5c2a81
#define public_5c2a8a _public_5c2a8a

PROC_DECLARE(0x5c2a70, internal_5c2a70, public_5c2a70);
/* CHUNK of public_56cb40 */
extern "C" NAKED register_t __cdecl internal_5c2a70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2C]
        jmp dword ptr ds : [public_5c7058]
        public_5c2a79 : nop
        lea ecx, ss:[ebp-0x30]
        jmp public_487c30
        public_5c2a81 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp dword ptr ds : [public_5c7058]
        public_5c2a8a : nop
        mov eax, offset public_5fcacc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c2a70)
        ASM_EXPORT_ENTRY_FIRST(0x5c2a79, public_5c2a79)
        ASM_EXPORT_ENTRY(0x5c2a81, public_5c2a81)
        ASM_EXPORT_ENTRY_LAST(0x5c2a8a, public_5c2a8a)
    }
}

#undef public_5c2a79
#undef public_5c2a81
#undef public_5c2a8a

#pragma init_seg(compiler)
extern "C" void const* const public_5c2a79 = __AsmFindLabelExport(&internal_5c2a70, 0x5c2a79);
extern "C" void const* const public_5c2a81 = __AsmFindLabelExport(&internal_5c2a70, 0x5c2a81);
extern "C" void const* const public_5c2a8a = __AsmFindLabelExport(&internal_5c2a70, 0x5c2a8a);
