#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f34f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f35b40);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58ac8 _public_6f58ac8
#define public_6f58ad0 _public_6f58ad0

PROC_DECLARE(0x6f58ac0, internal_6f58ac0, public_6f58ac0);
/* CHUNK of public_6f356f0 */
extern "C" NAKED register_t __cdecl internal_6f58ac0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x48]
        jmp public_6f34f30
        public_6f58ac8 : nop
        lea ecx, ss:[ebp-0x70]
        jmp public_6f35b40
        public_6f58ad0 : nop
        mov eax, offset public_6f5bc80
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58ac0)
        ASM_EXPORT_ENTRY_FIRST(0x6f58ac8, public_6f58ac8)
        ASM_EXPORT_ENTRY_LAST(0x6f58ad0, public_6f58ad0)
    }
}

#undef public_6f58ac8
#undef public_6f58ad0

#pragma init_seg(compiler)
extern "C" void const* const public_6f58ac8 = __AsmFindLabelExport(&internal_6f58ac0, 0x6f58ac8);
extern "C" void const* const public_6f58ad0 = __AsmFindLabelExport(&internal_6f58ac0, 0x6f58ad0);
