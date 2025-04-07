#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea14b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7d30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa97eb _public_6fa97eb
#define public_6fa97f7 _public_6fa97f7
#define public_6fa9802 _public_6fa9802
#define public_6fa980e _public_6fa980e
#define public_6fa981a _public_6fa981a

PROC_DECLARE(0x6fa97e0, internal_6fa97e0, public_6fa97e0);
/* CHUNK of public_6ea58e0 */
extern "C" NAKED register_t __cdecl internal_6fa97e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1578]
        jmp public_6eb7d30
        public_6fa97eb : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb3004]
        public_6fa97f7 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6ea14b0
        public_6fa9802 : nop
        mov ecx, dword ptr ss : [ebp-0x157C]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa980e : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa981a : nop
        mov eax, offset public_6fbdb34
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa97e0)
        ASM_EXPORT_ENTRY_FIRST(0x6fa97eb, public_6fa97eb)
        ASM_EXPORT_ENTRY(0x6fa97f7, public_6fa97f7)
        ASM_EXPORT_ENTRY(0x6fa9802, public_6fa9802)
        ASM_EXPORT_ENTRY(0x6fa980e, public_6fa980e)
        ASM_EXPORT_ENTRY_LAST(0x6fa981a, public_6fa981a)
    }
}

#undef public_6fa97eb
#undef public_6fa97f7
#undef public_6fa9802
#undef public_6fa980e
#undef public_6fa981a

#pragma init_seg(compiler)
extern "C" void const* const public_6fa97eb = __AsmFindLabelExport(&internal_6fa97e0, 0x6fa97eb);
extern "C" void const* const public_6fa97f7 = __AsmFindLabelExport(&internal_6fa97e0, 0x6fa97f7);
extern "C" void const* const public_6fa9802 = __AsmFindLabelExport(&internal_6fa97e0, 0x6fa9802);
extern "C" void const* const public_6fa980e = __AsmFindLabelExport(&internal_6fa97e0, 0x6fa980e);
extern "C" void const* const public_6fa981a = __AsmFindLabelExport(&internal_6fa97e0, 0x6fa981a);
