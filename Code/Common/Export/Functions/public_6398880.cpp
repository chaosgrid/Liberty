#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356a70);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6398888 _public_6398888
#define public_6398890 _public_6398890
#define public_6398898 _public_6398898

PROC_DECLARE(0x6398880, internal_6398880, public_6398880);
/* CHUNK of public_636cc00 */
extern "C" NAKED register_t __cdecl internal_6398880()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6356a70
        public_6398888 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_6356a70
        public_6398890 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp public_6356a70
        public_6398898 : nop
        mov eax, offset public_63b2ea8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398880)
        ASM_EXPORT_ENTRY_FIRST(0x6398888, public_6398888)
        ASM_EXPORT_ENTRY(0x6398890, public_6398890)
        ASM_EXPORT_ENTRY_LAST(0x6398898, public_6398898)
    }
}

#undef public_6398888
#undef public_6398890
#undef public_6398898

#pragma init_seg(compiler)
extern "C" void const* const public_6398888 = __AsmFindLabelExport(&internal_6398880, 0x6398888);
extern "C" void const* const public_6398890 = __AsmFindLabelExport(&internal_6398880, 0x6398890);
extern "C" void const* const public_6398898 = __AsmFindLabelExport(&internal_6398880, 0x6398898);
