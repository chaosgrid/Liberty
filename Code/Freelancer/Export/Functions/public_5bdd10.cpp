#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d0470);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bdd18 _public_5bdd18
#define public_5bdd20 _public_5bdd20
#define public_5bdd28 _public_5bdd28
#define public_5bdd30 _public_5bdd30
#define public_5bdd38 _public_5bdd38
#define public_5bdd40 _public_5bdd40
#define public_5bdd48 _public_5bdd48

PROC_DECLARE(0x5bdd10, internal_5bdd10, public_5bdd10);
/* CHUNK of public_4d0250 */
extern "C" NAKED register_t __cdecl internal_5bdd10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x44]
        jmp public_4d0470
        public_5bdd18 : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_4d0470
        public_5bdd20 : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_4d0470
        public_5bdd28 : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_4d0470
        public_5bdd30 : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_4d0470
        public_5bdd38 : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_4d0470
        public_5bdd40 : nop
        lea ecx, ss:[ebp-0x28]
        jmp public_4d0470
        public_5bdd48 : nop
        mov eax, offset public_5f8160
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bdd10)
        ASM_EXPORT_ENTRY_FIRST(0x5bdd18, public_5bdd18)
        ASM_EXPORT_ENTRY(0x5bdd20, public_5bdd20)
        ASM_EXPORT_ENTRY(0x5bdd28, public_5bdd28)
        ASM_EXPORT_ENTRY(0x5bdd30, public_5bdd30)
        ASM_EXPORT_ENTRY(0x5bdd38, public_5bdd38)
        ASM_EXPORT_ENTRY(0x5bdd40, public_5bdd40)
        ASM_EXPORT_ENTRY_LAST(0x5bdd48, public_5bdd48)
    }
}

#undef public_5bdd18
#undef public_5bdd20
#undef public_5bdd28
#undef public_5bdd30
#undef public_5bdd38
#undef public_5bdd40
#undef public_5bdd48

#pragma init_seg(compiler)
extern "C" void const* const public_5bdd18 = __AsmFindLabelExport(&internal_5bdd10, 0x5bdd18);
extern "C" void const* const public_5bdd20 = __AsmFindLabelExport(&internal_5bdd10, 0x5bdd20);
extern "C" void const* const public_5bdd28 = __AsmFindLabelExport(&internal_5bdd10, 0x5bdd28);
extern "C" void const* const public_5bdd30 = __AsmFindLabelExport(&internal_5bdd10, 0x5bdd30);
extern "C" void const* const public_5bdd38 = __AsmFindLabelExport(&internal_5bdd10, 0x5bdd38);
extern "C" void const* const public_5bdd40 = __AsmFindLabelExport(&internal_5bdd10, 0x5bdd40);
extern "C" void const* const public_5bdd48 = __AsmFindLabelExport(&internal_5bdd10, 0x5bdd48);
