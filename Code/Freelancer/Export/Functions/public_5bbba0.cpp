#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bbbab _public_5bbbab
#define public_5bbbb3 _public_5bbbb3
#define public_5bbbc1 _public_5bbbc1

PROC_DECLARE(0x5bbba0, internal_5bbba0, public_5bbba0);
/* CHUNK of public_474670 */
extern "C" NAKED register_t __cdecl internal_5bbba0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bbbab : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5bbbb3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x32C
        jmp public_576010
        public_5bbbc1 : nop
        mov eax, offset public_5f5f04
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bbba0)
        ASM_EXPORT_ENTRY_FIRST(0x5bbbab, public_5bbbab)
        ASM_EXPORT_ENTRY(0x5bbbb3, public_5bbbb3)
        ASM_EXPORT_ENTRY_LAST(0x5bbbc1, public_5bbbc1)
    }
}

#undef public_5bbbab
#undef public_5bbbb3
#undef public_5bbbc1

#pragma init_seg(compiler)
extern "C" void const* const public_5bbbab = __AsmFindLabelExport(&internal_5bbba0, 0x5bbbab);
extern "C" void const* const public_5bbbb3 = __AsmFindLabelExport(&internal_5bbba0, 0x5bbbb3);
extern "C" void const* const public_5bbbc1 = __AsmFindLabelExport(&internal_5bbba0, 0x5bbbc1);
