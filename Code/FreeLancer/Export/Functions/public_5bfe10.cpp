#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48e5f0);
CLANG_FORWARD_PROC_SYMBOL(public_4ceb50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bfe18 _public_5bfe18
#define public_5bfe20 _public_5bfe20

PROC_DECLARE(0x5bfe10, internal_5bfe10, public_5bfe10);
/* CHUNK of public_517340 */
extern "C" NAKED register_t __cdecl internal_5bfe10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4ceb50
        public_5bfe18 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_48e5f0
        public_5bfe20 : nop
        mov eax, offset public_5f9da8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bfe10)
        ASM_EXPORT_ENTRY_FIRST(0x5bfe18, public_5bfe18)
        ASM_EXPORT_ENTRY_LAST(0x5bfe20, public_5bfe20)
    }
}

#undef public_5bfe18
#undef public_5bfe20

#pragma init_seg(compiler)
extern "C" void const* const public_5bfe18 = __AsmFindLabelExport(&internal_5bfe10, 0x5bfe18);
extern "C" void const* const public_5bfe20 = __AsmFindLabelExport(&internal_5bfe10, 0x5bfe20);
