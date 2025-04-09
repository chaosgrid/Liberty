#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c1628 _public_5c1628
#define public_5c1637 _public_5c1637
#define public_5c1646 _public_5c1646

PROC_DECLARE(0x5c1620, internal_5c1620, public_5c1620);
/* CHUNK of public_55d610 */
extern "C" NAKED register_t __cdecl internal_5c1620()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5c1628 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x350
        jmp dword ptr ds : [public_5c7090]
        public_5c1637 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x360
        jmp dword ptr ds : [public_5c7090]
        public_5c1646 : nop
        mov eax, offset public_5fb9e4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1620)
        ASM_EXPORT_ENTRY_FIRST(0x5c1628, public_5c1628)
        ASM_EXPORT_ENTRY(0x5c1637, public_5c1637)
        ASM_EXPORT_ENTRY_LAST(0x5c1646, public_5c1646)
    }
}

#undef public_5c1628
#undef public_5c1637
#undef public_5c1646

#pragma init_seg(compiler)
extern "C" void const* const public_5c1628 = __AsmFindLabelExport(&internal_5c1620, 0x5c1628);
extern "C" void const* const public_5c1637 = __AsmFindLabelExport(&internal_5c1620, 0x5c1637);
extern "C" void const* const public_5c1646 = __AsmFindLabelExport(&internal_5c1620, 0x5c1646);
