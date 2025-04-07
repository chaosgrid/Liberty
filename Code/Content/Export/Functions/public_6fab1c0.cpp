#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea14b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed36d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab1cc _public_6fab1cc
#define public_6fab1d7 _public_6fab1d7
#define public_6fab1e2 _public_6fab1e2
#define public_6fab1ee _public_6fab1ee
#define public_6fab1fa _public_6fab1fa

PROC_DECLARE(0x6fab1c0, internal_6fab1c0, public_6fab1c0);
/* CHUNK of public_6ed44a0 */
extern "C" NAKED register_t __cdecl internal_6fab1c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb3004]
        public_6fab1cc : nop
        lea ecx, ss:[ebp-0x16F4]
        jmp public_6ed36d0
        public_6fab1d7 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6ea14b0
        public_6fab1e2 : nop
        mov ecx, dword ptr ss : [ebp-0x16FC]
        jmp dword ptr ds : [public_6fb330c]
        public_6fab1ee : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb330c]
        public_6fab1fa : nop
        mov eax, offset public_6fbf714
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab1c0)
        ASM_EXPORT_ENTRY_FIRST(0x6fab1cc, public_6fab1cc)
        ASM_EXPORT_ENTRY(0x6fab1d7, public_6fab1d7)
        ASM_EXPORT_ENTRY(0x6fab1e2, public_6fab1e2)
        ASM_EXPORT_ENTRY(0x6fab1ee, public_6fab1ee)
        ASM_EXPORT_ENTRY_LAST(0x6fab1fa, public_6fab1fa)
    }
}

#undef public_6fab1cc
#undef public_6fab1d7
#undef public_6fab1e2
#undef public_6fab1ee
#undef public_6fab1fa

#pragma init_seg(compiler)
extern "C" void const* const public_6fab1cc = __AsmFindLabelExport(&internal_6fab1c0, 0x6fab1cc);
extern "C" void const* const public_6fab1d7 = __AsmFindLabelExport(&internal_6fab1c0, 0x6fab1d7);
extern "C" void const* const public_6fab1e2 = __AsmFindLabelExport(&internal_6fab1c0, 0x6fab1e2);
extern "C" void const* const public_6fab1ee = __AsmFindLabelExport(&internal_6fab1c0, 0x6fab1ee);
extern "C" void const* const public_6fab1fa = __AsmFindLabelExport(&internal_6fab1c0, 0x6fab1fa);
