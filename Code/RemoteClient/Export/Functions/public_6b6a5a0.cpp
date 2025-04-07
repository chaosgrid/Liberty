#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6a5a9 _public_6b6a5a9
#define public_6b6a5b2 _public_6b6a5b2

PROC_DECLARE(0x6b6a5a0, internal_6b6a5a0, public_6b6a5a0);
/* CHUNK of public_6b34c50 */
extern "C" NAKED register_t __cdecl internal_6b6a5a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_6b6b094]
        public_6b6a5a9 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp dword ptr ds : [public_6b6b094]
        public_6b6a5b2 : nop
        mov eax, offset public_6b6ec64
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6a5a0)
        ASM_EXPORT_ENTRY_FIRST(0x6b6a5a9, public_6b6a5a9)
        ASM_EXPORT_ENTRY_LAST(0x6b6a5b2, public_6b6a5b2)
    }
}

#undef public_6b6a5a9
#undef public_6b6a5b2

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a5a9 = __AsmFindLabelExport(&internal_6b6a5a0, 0x6b6a5a9);
extern "C" void const* const public_6b6a5b2 = __AsmFindLabelExport(&internal_6b6a5a0, 0x6b6a5b2);
