#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_469910);
CLANG_FORWARD_PROC_SYMBOL(public_469fe0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bb708 _public_5bb708
#define public_5bb713 _public_5bb713

PROC_DECLARE(0x5bb700, internal_5bb700, public_5bb700);
/* CHUNK of public_469e60 */
extern "C" NAKED register_t __cdecl internal_5bb700()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_469910
        public_5bb708 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x18
        jmp public_469fe0
        public_5bb713 : nop
        mov eax, offset public_5f5910
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bb700)
        ASM_EXPORT_ENTRY_FIRST(0x5bb708, public_5bb708)
        ASM_EXPORT_ENTRY_LAST(0x5bb713, public_5bb713)
    }
}

#undef public_5bb708
#undef public_5bb713

#pragma init_seg(compiler)
extern "C" void const* const public_5bb708 = __AsmFindLabelExport(&internal_5bb700, 0x5bb708);
extern "C" void const* const public_5bb713 = __AsmFindLabelExport(&internal_5bb700, 0x5bb713);
