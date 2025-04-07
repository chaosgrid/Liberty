#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf888 _public_6faf888
#define public_6faf890 _public_6faf890
#define public_6faf89b _public_6faf89b

PROC_DECLARE(0x6faf880, internal_6faf880, public_6faf880);
/* CHUNK of public_6f5b4e0 */
extern "C" NAKED register_t __cdecl internal_6faf880()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x68]
        jmp public_6eec8d0
        public_6faf888 : nop
        lea ecx, ss:[ebp-0x78]
        jmp public_6eec8d0
        public_6faf890 : nop
        lea ecx, ss:[ebp-0x88]
        jmp public_6eec8d0
        public_6faf89b : nop
        mov eax, offset public_6fc4880
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf880)
        ASM_EXPORT_ENTRY_FIRST(0x6faf888, public_6faf888)
        ASM_EXPORT_ENTRY(0x6faf890, public_6faf890)
        ASM_EXPORT_ENTRY_LAST(0x6faf89b, public_6faf89b)
    }
}

#undef public_6faf888
#undef public_6faf890
#undef public_6faf89b

#pragma init_seg(compiler)
extern "C" void const* const public_6faf888 = __AsmFindLabelExport(&internal_6faf880, 0x6faf888);
extern "C" void const* const public_6faf890 = __AsmFindLabelExport(&internal_6faf880, 0x6faf890);
extern "C" void const* const public_6faf89b = __AsmFindLabelExport(&internal_6faf880, 0x6faf89b);
