#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea14b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7d30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa979b _public_6fa979b
#define public_6fa97a7 _public_6fa97a7
#define public_6fa97b2 _public_6fa97b2
#define public_6fa97be _public_6fa97be
#define public_6fa97ca _public_6fa97ca

PROC_DECLARE(0x6fa9790, internal_6fa9790, public_6fa9790);
/* CHUNK of public_6ea5460 */
extern "C" NAKED register_t __cdecl internal_6fa9790()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1578]
        jmp public_6eb7d30
        public_6fa979b : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb3004]
        public_6fa97a7 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6ea14b0
        public_6fa97b2 : nop
        mov ecx, dword ptr ss : [ebp-0x157C]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa97be : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa97ca : nop
        mov eax, offset public_6fbdaf0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9790)
        ASM_EXPORT_ENTRY_FIRST(0x6fa979b, public_6fa979b)
        ASM_EXPORT_ENTRY(0x6fa97a7, public_6fa97a7)
        ASM_EXPORT_ENTRY(0x6fa97b2, public_6fa97b2)
        ASM_EXPORT_ENTRY(0x6fa97be, public_6fa97be)
        ASM_EXPORT_ENTRY_LAST(0x6fa97ca, public_6fa97ca)
    }
}

#undef public_6fa979b
#undef public_6fa97a7
#undef public_6fa97b2
#undef public_6fa97be
#undef public_6fa97ca

#pragma init_seg(compiler)
extern "C" void const* const public_6fa979b = __AsmFindLabelExport(&internal_6fa9790, 0x6fa979b);
extern "C" void const* const public_6fa97a7 = __AsmFindLabelExport(&internal_6fa9790, 0x6fa97a7);
extern "C" void const* const public_6fa97b2 = __AsmFindLabelExport(&internal_6fa9790, 0x6fa97b2);
extern "C" void const* const public_6fa97be = __AsmFindLabelExport(&internal_6fa9790, 0x6fa97be);
extern "C" void const* const public_6fa97ca = __AsmFindLabelExport(&internal_6fa9790, 0x6fa97ca);
