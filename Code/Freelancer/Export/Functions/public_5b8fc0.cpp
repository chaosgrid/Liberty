#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_455e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8fc9 _public_5b8fc9
#define public_5b8fd1 _public_5b8fd1

PROC_DECLARE(0x5b8fc0, internal_5b8fc0, public_5b8fc0);
/* CHUNK of public_431a80 */
extern "C" NAKED register_t __cdecl internal_5b8fc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x30]
        jmp dword ptr ds : [public_5c7090]
        public_5b8fc9 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_455e90
        public_5b8fd1 : nop
        mov eax, offset public_5f2ea0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8fc0)
        ASM_EXPORT_ENTRY_FIRST(0x5b8fc9, public_5b8fc9)
        ASM_EXPORT_ENTRY_LAST(0x5b8fd1, public_5b8fd1)
    }
}

#undef public_5b8fc9
#undef public_5b8fd1

#pragma init_seg(compiler)
extern "C" void const* const public_5b8fc9 = __AsmFindLabelExport(&internal_5b8fc0, 0x5b8fc9);
extern "C" void const* const public_5b8fd1 = __AsmFindLabelExport(&internal_5b8fc0, 0x5b8fd1);
