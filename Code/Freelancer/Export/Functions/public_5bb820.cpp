#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bb82b _public_5bb82b
#define public_5bb834 _public_5bb834
#define public_5bb83c _public_5bb83c

PROC_DECLARE(0x5bb820, internal_5bb820, public_5bb820);
/* CHUNK of public_466770 */
extern "C" NAKED register_t __cdecl internal_5bb820()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x3C]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bb82b : nop
        lea ecx, ss:[ebp-0x18]
        jmp dword ptr ds : [public_5c62f4]
        public_5bb834 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp public_45eeb0
        public_5bb83c : nop
        mov eax, offset public_5f5ac0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bb820)
        ASM_EXPORT_ENTRY_FIRST(0x5bb82b, public_5bb82b)
        ASM_EXPORT_ENTRY(0x5bb834, public_5bb834)
        ASM_EXPORT_ENTRY_LAST(0x5bb83c, public_5bb83c)
    }
}

#undef public_5bb82b
#undef public_5bb834
#undef public_5bb83c

#pragma init_seg(compiler)
extern "C" void const* const public_5bb82b = __AsmFindLabelExport(&internal_5bb820, 0x5bb82b);
extern "C" void const* const public_5bb834 = __AsmFindLabelExport(&internal_5bb820, 0x5bb834);
extern "C" void const* const public_5bb83c = __AsmFindLabelExport(&internal_5bb820, 0x5bb83c);
