#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bfccc _public_5bfccc
#define public_5bfcd7 _public_5bfcd7
#define public_5bfce3 _public_5bfce3
#define public_5bfcef _public_5bfcef

PROC_DECLARE(0x5bfcc0, internal_5bfcc0, public_5bfcc0);
/* CHUNK of public_50fba0 */
extern "C" NAKED register_t __cdecl internal_5bfcc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c6048]
        public_5bfccc : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5bfcd7 : nop
        mov ecx, dword ptr ss : [ebp-0x15CC]
        jmp dword ptr ds : [public_5c7090]
        public_5bfce3 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5bfcef : nop
        mov eax, offset public_5f9c40
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bfcc0)
        ASM_EXPORT_ENTRY_FIRST(0x5bfccc, public_5bfccc)
        ASM_EXPORT_ENTRY(0x5bfcd7, public_5bfcd7)
        ASM_EXPORT_ENTRY(0x5bfce3, public_5bfce3)
        ASM_EXPORT_ENTRY_LAST(0x5bfcef, public_5bfcef)
    }
}

#undef public_5bfccc
#undef public_5bfcd7
#undef public_5bfce3
#undef public_5bfcef

#pragma init_seg(compiler)
extern "C" void const* const public_5bfccc = __AsmFindLabelExport(&internal_5bfcc0, 0x5bfccc);
extern "C" void const* const public_5bfcd7 = __AsmFindLabelExport(&internal_5bfcc0, 0x5bfcd7);
extern "C" void const* const public_5bfce3 = __AsmFindLabelExport(&internal_5bfcc0, 0x5bfce3);
extern "C" void const* const public_5bfcef = __AsmFindLabelExport(&internal_5bfcc0, 0x5bfcef);
