#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfffc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0d4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61659 _public_6d61659
#define public_6d61661 _public_6d61661
#define public_6d6166a _public_6d6166a
#define public_6d61672 _public_6d61672
#define public_6d6167a _public_6d6167a

PROC_DECLARE(0x6d61650, internal_6d61650, public_6d61650);
/* CHUNK of public_6d0d370 */
extern "C" NAKED register_t __cdecl internal_6d61650()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_6d6459c]
        public_6d61659 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_6cfffc0
        public_6d61661 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        jmp dword ptr ds : [public_6d6459c]
        public_6d6166a : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_6d0d4a0
        public_6d61672 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_6cfffc0
        public_6d6167a : nop
        mov eax, offset public_6d722a4
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61650)
        ASM_EXPORT_ENTRY_FIRST(0x6d61659, public_6d61659)
        ASM_EXPORT_ENTRY(0x6d61661, public_6d61661)
        ASM_EXPORT_ENTRY(0x6d6166a, public_6d6166a)
        ASM_EXPORT_ENTRY(0x6d61672, public_6d61672)
        ASM_EXPORT_ENTRY_LAST(0x6d6167a, public_6d6167a)
    }
}

#undef public_6d61659
#undef public_6d61661
#undef public_6d6166a
#undef public_6d61672
#undef public_6d6167a

#pragma init_seg(compiler)
extern "C" void const* const public_6d61659 = __AsmFindLabelExport(&internal_6d61650, 0x6d61659);
extern "C" void const* const public_6d61661 = __AsmFindLabelExport(&internal_6d61650, 0x6d61661);
extern "C" void const* const public_6d6166a = __AsmFindLabelExport(&internal_6d61650, 0x6d6166a);
extern "C" void const* const public_6d61672 = __AsmFindLabelExport(&internal_6d61650, 0x6d61672);
extern "C" void const* const public_6d6167a = __AsmFindLabelExport(&internal_6d61650, 0x6d6167a);
