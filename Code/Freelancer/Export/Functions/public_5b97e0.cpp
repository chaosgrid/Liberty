#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b97e9 _public_5b97e9
#define public_5b97f1 _public_5b97f1
#define public_5b97fc _public_5b97fc

PROC_DECLARE(0x5b97e0, internal_5b97e0, public_5b97e0);
/* CHUNK of public_444290 */
extern "C" NAKED register_t __cdecl internal_5b97e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x30]
        jmp dword ptr ds : [public_5c61cc]
        public_5b97e9 : nop
        lea ecx, ss:[ebp-0x40]
        jmp public_4de730
        public_5b97f1 : nop
        mov eax, dword ptr ss : [ebp-0x64]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b97fc : nop
        mov eax, offset public_5f3830
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b97e0)
        ASM_EXPORT_ENTRY_FIRST(0x5b97e9, public_5b97e9)
        ASM_EXPORT_ENTRY(0x5b97f1, public_5b97f1)
        ASM_EXPORT_ENTRY_LAST(0x5b97fc, public_5b97fc)
    }
}

#undef public_5b97e9
#undef public_5b97f1
#undef public_5b97fc

#pragma init_seg(compiler)
extern "C" void const* const public_5b97e9 = __AsmFindLabelExport(&internal_5b97e0, 0x5b97e9);
extern "C" void const* const public_5b97f1 = __AsmFindLabelExport(&internal_5b97e0, 0x5b97f1);
extern "C" void const* const public_5b97fc = __AsmFindLabelExport(&internal_5b97e0, 0x5b97fc);
