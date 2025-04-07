#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea14b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f98760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf34c _public_6faf34c
#define public_6faf357 _public_6faf357
#define public_6faf362 _public_6faf362
#define public_6faf36d _public_6faf36d
#define public_6faf379 _public_6faf379
#define public_6faf385 _public_6faf385

PROC_DECLARE(0x6faf340, internal_6faf340, public_6faf340);
/* CHUNK of public_6f50880 */
extern "C" NAKED register_t __cdecl internal_6faf340()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb3004]
        public_6faf34c : nop
        lea ecx, ss:[ebp-0x15D8]
        jmp public_6eec8d0
        public_6faf357 : nop
        lea ecx, ss:[ebp-0x15A0]
        jmp public_6f98760
        public_6faf362 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6ea14b0
        public_6faf36d : nop
        mov ecx, dword ptr ss : [ebp-0x15A8]
        jmp dword ptr ds : [public_6fb330c]
        public_6faf379 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb330c]
        public_6faf385 : nop
        mov eax, offset public_6fc4388
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf340)
        ASM_EXPORT_ENTRY_FIRST(0x6faf34c, public_6faf34c)
        ASM_EXPORT_ENTRY(0x6faf357, public_6faf357)
        ASM_EXPORT_ENTRY(0x6faf362, public_6faf362)
        ASM_EXPORT_ENTRY(0x6faf36d, public_6faf36d)
        ASM_EXPORT_ENTRY(0x6faf379, public_6faf379)
        ASM_EXPORT_ENTRY_LAST(0x6faf385, public_6faf385)
    }
}

#undef public_6faf34c
#undef public_6faf357
#undef public_6faf362
#undef public_6faf36d
#undef public_6faf379
#undef public_6faf385

#pragma init_seg(compiler)
extern "C" void const* const public_6faf34c = __AsmFindLabelExport(&internal_6faf340, 0x6faf34c);
extern "C" void const* const public_6faf357 = __AsmFindLabelExport(&internal_6faf340, 0x6faf357);
extern "C" void const* const public_6faf362 = __AsmFindLabelExport(&internal_6faf340, 0x6faf362);
extern "C" void const* const public_6faf36d = __AsmFindLabelExport(&internal_6faf340, 0x6faf36d);
extern "C" void const* const public_6faf379 = __AsmFindLabelExport(&internal_6faf340, 0x6faf379);
extern "C" void const* const public_6faf385 = __AsmFindLabelExport(&internal_6faf340, 0x6faf385);
