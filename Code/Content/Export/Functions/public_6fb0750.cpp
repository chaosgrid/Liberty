#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0758 _public_6fb0758
#define public_6fb0763 _public_6fb0763
#define public_6fb076e _public_6fb076e
#define public_6fb0779 _public_6fb0779
#define public_6fb0782 _public_6fb0782
#define public_6fb078d _public_6fb078d
#define public_6fb0798 _public_6fb0798

PROC_DECLARE(0x6fb0750, internal_6fb0750, public_6fb0750);
/* CHUNK of public_6f80680 */
extern "C" NAKED register_t __cdecl internal_6fb0750()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x80]
        jmp public_6eec8d0
        public_6fb0758 : nop
        lea ecx, ss:[ebp-0x90]
        jmp public_6eec8d0
        public_6fb0763 : nop
        lea ecx, ss:[ebp-0x9C]
        jmp public_6f15350
        public_6fb076e : nop
        lea ecx, ss:[ebp-0xB4]
        jmp public_6f15350
        public_6fb0779 : nop
        lea ecx, ss:[ebp-0x50]
        jmp dword ptr ds : [public_6fb3138]
        public_6fb0782 : nop
        lea ecx, ss:[ebp-0xA8]
        jmp public_6f15350
        public_6fb078d : nop
        lea ecx, ss:[ebp-0x90]
        jmp public_6f15350
        public_6fb0798 : nop
        mov eax, offset public_6fc5a5c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0750)
        ASM_EXPORT_ENTRY_FIRST(0x6fb0758, public_6fb0758)
        ASM_EXPORT_ENTRY(0x6fb0763, public_6fb0763)
        ASM_EXPORT_ENTRY(0x6fb076e, public_6fb076e)
        ASM_EXPORT_ENTRY(0x6fb0779, public_6fb0779)
        ASM_EXPORT_ENTRY(0x6fb0782, public_6fb0782)
        ASM_EXPORT_ENTRY(0x6fb078d, public_6fb078d)
        ASM_EXPORT_ENTRY_LAST(0x6fb0798, public_6fb0798)
    }
}

#undef public_6fb0758
#undef public_6fb0763
#undef public_6fb076e
#undef public_6fb0779
#undef public_6fb0782
#undef public_6fb078d
#undef public_6fb0798

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0758 = __AsmFindLabelExport(&internal_6fb0750, 0x6fb0758);
extern "C" void const* const public_6fb0763 = __AsmFindLabelExport(&internal_6fb0750, 0x6fb0763);
extern "C" void const* const public_6fb076e = __AsmFindLabelExport(&internal_6fb0750, 0x6fb076e);
extern "C" void const* const public_6fb0779 = __AsmFindLabelExport(&internal_6fb0750, 0x6fb0779);
extern "C" void const* const public_6fb0782 = __AsmFindLabelExport(&internal_6fb0750, 0x6fb0782);
extern "C" void const* const public_6fb078d = __AsmFindLabelExport(&internal_6fb0750, 0x6fb078d);
extern "C" void const* const public_6fb0798 = __AsmFindLabelExport(&internal_6fb0750, 0x6fb0798);
