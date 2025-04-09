#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_487c30);
CLANG_FORWARD_PROC_SYMBOL(public_5ad620);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c5759 _public_5c5759
#define public_5c5761 _public_5c5761
#define public_5c576a _public_5c576a
#define public_5c5772 _public_5c5772
#define public_5c577b _public_5c577b
#define public_5c5784 _public_5c5784

PROC_DECLARE(0x5c5750, internal_5c5750, public_5c5750);
/* CHUNK of public_5ad350 */
extern "C" NAKED register_t __cdecl internal_5c5750()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x58]
        jmp dword ptr ds : [public_5c7058]
        public_5c5759 : nop
        lea ecx, ss:[ebp-0x58]
        jmp public_5ad620
        public_5c5761 : nop
        mov ecx, dword ptr ss : [ebp+4]
        jmp dword ptr ds : [public_5c7058]
        public_5c576a : nop
        lea ecx, ss:[ebp-0x34]
        jmp public_487c30
        public_5c5772 : nop
        mov ecx, dword ptr ss : [ebp+4]
        jmp dword ptr ds : [public_5c7058]
        public_5c577b : nop
        lea ecx, ss:[ebp-0x58]
        jmp dword ptr ds : [public_5c7058]
        public_5c5784 : nop
        mov eax, offset public_5ff568
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c5750)
        ASM_EXPORT_ENTRY_FIRST(0x5c5759, public_5c5759)
        ASM_EXPORT_ENTRY(0x5c5761, public_5c5761)
        ASM_EXPORT_ENTRY(0x5c576a, public_5c576a)
        ASM_EXPORT_ENTRY(0x5c5772, public_5c5772)
        ASM_EXPORT_ENTRY(0x5c577b, public_5c577b)
        ASM_EXPORT_ENTRY_LAST(0x5c5784, public_5c5784)
    }
}

#undef public_5c5759
#undef public_5c5761
#undef public_5c576a
#undef public_5c5772
#undef public_5c577b
#undef public_5c5784

#pragma init_seg(compiler)
extern "C" void const* const public_5c5759 = __AsmFindLabelExport(&internal_5c5750, 0x5c5759);
extern "C" void const* const public_5c5761 = __AsmFindLabelExport(&internal_5c5750, 0x5c5761);
extern "C" void const* const public_5c576a = __AsmFindLabelExport(&internal_5c5750, 0x5c576a);
extern "C" void const* const public_5c5772 = __AsmFindLabelExport(&internal_5c5750, 0x5c5772);
extern "C" void const* const public_5c577b = __AsmFindLabelExport(&internal_5c5750, 0x5c577b);
extern "C" void const* const public_5c5784 = __AsmFindLabelExport(&internal_5c5750, 0x5c5784);
