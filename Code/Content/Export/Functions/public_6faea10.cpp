#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faea19 _public_6faea19
#define public_6faea22 _public_6faea22

PROC_DECLARE(0x6faea10, internal_6faea10, public_6faea10);
/* CHUNK of public_6f31ec0 */
extern "C" NAKED register_t __cdecl internal_6faea10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x3C]
        jmp dword ptr ds : [public_6fb3034]
        public_6faea19 : nop
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_6fb3034]
        public_6faea22 : nop
        mov eax, offset public_6fc39e0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faea10)
        ASM_EXPORT_ENTRY_FIRST(0x6faea19, public_6faea19)
        ASM_EXPORT_ENTRY_LAST(0x6faea22, public_6faea22)
    }
}

#undef public_6faea19
#undef public_6faea22

#pragma init_seg(compiler)
extern "C" void const* const public_6faea19 = __AsmFindLabelExport(&internal_6faea10, 0x6faea19);
extern "C" void const* const public_6faea22 = __AsmFindLabelExport(&internal_6faea10, 0x6faea22);
