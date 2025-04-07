#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b501d0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6abc9 _public_6b6abc9
#define public_6b6abd1 _public_6b6abd1

PROC_DECLARE(0x6b6abc0, internal_6b6abc0, public_6b6abc0);
/* CHUNK of public_6b4fee0 */
extern "C" NAKED register_t __cdecl internal_6b6abc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x30]
        jmp dword ptr ds : [public_6b6b18c]
        public_6b6abc9 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_6b501d0
        public_6b6abd1 : nop
        mov eax, offset public_6b6f280
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6abc0)
        ASM_EXPORT_ENTRY_FIRST(0x6b6abc9, public_6b6abc9)
        ASM_EXPORT_ENTRY_LAST(0x6b6abd1, public_6b6abd1)
    }
}

#undef public_6b6abc9
#undef public_6b6abd1

#pragma init_seg(compiler)
extern "C" void const* const public_6b6abc9 = __AsmFindLabelExport(&internal_6b6abc0, 0x6b6abc9);
extern "C" void const* const public_6b6abd1 = __AsmFindLabelExport(&internal_6b6abc0, 0x6b6abd1);
