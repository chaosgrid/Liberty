#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dc50);
CLANG_FORWARD_PROC_SYMBOL(public_50a120);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bfb18 _public_5bfb18
#define public_5bfb23 _public_5bfb23

PROC_DECLARE(0x5bfb10, internal_5bfb10, public_5bfb10);
/* CHUNK of public_50a040 */
extern "C" NAKED register_t __cdecl internal_5bfb10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_50a120
        public_5bfb18 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_41dc50
        public_5bfb23 : nop
        mov eax, offset public_5f9a44
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bfb10)
        ASM_EXPORT_ENTRY_FIRST(0x5bfb18, public_5bfb18)
        ASM_EXPORT_ENTRY_LAST(0x5bfb23, public_5bfb23)
    }
}

#undef public_5bfb18
#undef public_5bfb23

#pragma init_seg(compiler)
extern "C" void const* const public_5bfb18 = __AsmFindLabelExport(&internal_5bfb10, 0x5bfb18);
extern "C" void const* const public_5bfb23 = __AsmFindLabelExport(&internal_5bfb10, 0x5bfb23);
