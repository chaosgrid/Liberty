#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62346a0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249d38 _public_6249d38
#define public_6249d40 _public_6249d40

PROC_DECLARE(0x6249d30, internal_6249d30, public_6249d30);
/* CHUNK of public_6234c70 */
extern "C" NAKED register_t __cdecl internal_6249d30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp public_62346a0
        public_6249d38 : nop
        lea ecx, ss:[ebp+4]
        jmp public_62346a0
        public_6249d40 : nop
        mov eax, offset public_6252d90
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249d30)
        ASM_EXPORT_ENTRY_FIRST(0x6249d38, public_6249d38)
        ASM_EXPORT_ENTRY_LAST(0x6249d40, public_6249d40)
    }
}

#undef public_6249d38
#undef public_6249d40

#pragma init_seg(compiler)
extern "C" void const* const public_6249d38 = __AsmFindLabelExport(&internal_6249d30, 0x6249d38);
extern "C" void const* const public_6249d40 = __AsmFindLabelExport(&internal_6249d30, 0x6249d40);
