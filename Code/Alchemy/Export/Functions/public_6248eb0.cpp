#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6225920);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248eb8 _public_6248eb8
#define public_6248ec0 _public_6248ec0

PROC_DECLARE(0x6248eb0, internal_6248eb0, public_6248eb0);
/* CHUNK of public_62256a0 */
extern "C" NAKED register_t __cdecl internal_6248eb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x10]
        jmp public_6225920
        public_6248eb8 : nop
        lea ecx, ss:[ebp+4]
        jmp public_6225920
        public_6248ec0 : nop
        mov eax, offset public_6251df8
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248eb0)
        ASM_EXPORT_ENTRY_FIRST(0x6248eb8, public_6248eb8)
        ASM_EXPORT_ENTRY_LAST(0x6248ec0, public_6248ec0)
    }
}

#undef public_6248eb8
#undef public_6248ec0

#pragma init_seg(compiler)
extern "C" void const* const public_6248eb8 = __AsmFindLabelExport(&internal_6248eb0, 0x6248eb8);
extern "C" void const* const public_6248ec0 = __AsmFindLabelExport(&internal_6248eb0, 0x6248ec0);
