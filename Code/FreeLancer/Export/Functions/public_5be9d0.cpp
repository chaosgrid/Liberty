#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be9dc _public_5be9dc
#define public_5be9e8 _public_5be9e8
#define public_5be9f4 _public_5be9f4
#define public_5bea00 _public_5bea00

PROC_DECLARE(0x5be9d0, internal_5be9d0, public_5be9d0);
/* CHUNK of public_4e8100 */
extern "C" NAKED register_t __cdecl internal_5be9d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x150]
        jmp dword ptr ds : [public_5c6098]
        public_5be9dc : nop
        lea ecx, ss:[ebp-0x138]
        jmp dword ptr ds : [public_5c6098]
        public_5be9e8 : nop
        lea ecx, ss:[ebp-0x150]
        jmp dword ptr ds : [public_5c6098]
        public_5be9f4 : nop
        lea ecx, ss:[ebp-0x138]
        jmp dword ptr ds : [public_5c6098]
        public_5bea00 : nop
        mov eax, offset public_5f8b94
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be9d0)
        ASM_EXPORT_ENTRY_FIRST(0x5be9dc, public_5be9dc)
        ASM_EXPORT_ENTRY(0x5be9e8, public_5be9e8)
        ASM_EXPORT_ENTRY(0x5be9f4, public_5be9f4)
        ASM_EXPORT_ENTRY_LAST(0x5bea00, public_5bea00)
    }
}

#undef public_5be9dc
#undef public_5be9e8
#undef public_5be9f4
#undef public_5bea00

#pragma init_seg(compiler)
extern "C" void const* const public_5be9dc = __AsmFindLabelExport(&internal_5be9d0, 0x5be9dc);
extern "C" void const* const public_5be9e8 = __AsmFindLabelExport(&internal_5be9d0, 0x5be9e8);
extern "C" void const* const public_5be9f4 = __AsmFindLabelExport(&internal_5be9d0, 0x5be9f4);
extern "C" void const* const public_5bea00 = __AsmFindLabelExport(&internal_5be9d0, 0x5bea00);
