#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bcecc _public_5bcecc
#define public_5bced7 _public_5bced7
#define public_5bcee3 _public_5bcee3
#define public_5bceef _public_5bceef

PROC_DECLARE(0x5bcec0, internal_5bcec0, public_5bcec0);
/* CHUNK of public_4af230 */
extern "C" NAKED register_t __cdecl internal_5bcec0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c6048]
        public_5bcecc : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5bced7 : nop
        mov ecx, dword ptr ss : [ebp-0x15A4]
        jmp dword ptr ds : [public_5c7090]
        public_5bcee3 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5bceef : nop
        mov eax, offset public_5f7170
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bcec0)
        ASM_EXPORT_ENTRY_FIRST(0x5bcecc, public_5bcecc)
        ASM_EXPORT_ENTRY(0x5bced7, public_5bced7)
        ASM_EXPORT_ENTRY(0x5bcee3, public_5bcee3)
        ASM_EXPORT_ENTRY_LAST(0x5bceef, public_5bceef)
    }
}

#undef public_5bcecc
#undef public_5bced7
#undef public_5bcee3
#undef public_5bceef

#pragma init_seg(compiler)
extern "C" void const* const public_5bcecc = __AsmFindLabelExport(&internal_5bcec0, 0x5bcecc);
extern "C" void const* const public_5bced7 = __AsmFindLabelExport(&internal_5bcec0, 0x5bced7);
extern "C" void const* const public_5bcee3 = __AsmFindLabelExport(&internal_5bcec0, 0x5bcee3);
extern "C" void const* const public_5bceef = __AsmFindLabelExport(&internal_5bcec0, 0x5bceef);
