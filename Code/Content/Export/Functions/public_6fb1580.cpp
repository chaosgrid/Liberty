#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f87bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb158c _public_6fb158c
#define public_6fb1598 _public_6fb1598
#define public_6fb15a3 _public_6fb15a3
#define public_6fb15b1 _public_6fb15b1

PROC_DECLARE(0x6fb1580, internal_6fb1580, public_6fb1580);
/* CHUNK of public_6f926b0 */
extern "C" NAKED register_t __cdecl internal_6fb1580()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x56C]
        jmp dword ptr ds : [public_6fb3034]
        public_6fb158c : nop
        lea ecx, ss:[ebp-0x554]
        jmp dword ptr ds : [public_6fb3034]
        public_6fb1598 : nop
        lea ecx, ss:[ebp-0x53C]
        jmp public_6f87bf0
        public_6fb15a3 : nop
        mov eax, dword ptr ss : [ebp-0x574]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fb15b1 : nop
        mov eax, offset public_6fc6ae0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1580)
        ASM_EXPORT_ENTRY_FIRST(0x6fb158c, public_6fb158c)
        ASM_EXPORT_ENTRY(0x6fb1598, public_6fb1598)
        ASM_EXPORT_ENTRY(0x6fb15a3, public_6fb15a3)
        ASM_EXPORT_ENTRY_LAST(0x6fb15b1, public_6fb15b1)
    }
}

#undef public_6fb158c
#undef public_6fb1598
#undef public_6fb15a3
#undef public_6fb15b1

#pragma init_seg(compiler)
extern "C" void const* const public_6fb158c = __AsmFindLabelExport(&internal_6fb1580, 0x6fb158c);
extern "C" void const* const public_6fb1598 = __AsmFindLabelExport(&internal_6fb1580, 0x6fb1598);
extern "C" void const* const public_6fb15a3 = __AsmFindLabelExport(&internal_6fb1580, 0x6fb15a3);
extern "C" void const* const public_6fb15b1 = __AsmFindLabelExport(&internal_6fb1580, 0x6fb15b1);
