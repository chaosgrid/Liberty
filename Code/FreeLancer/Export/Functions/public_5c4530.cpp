#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_444e50);
CLANG_FORWARD_PROC_SYMBOL(public_444ee0);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4538 _public_5c4538
#define public_5c4540 _public_5c4540
#define public_5c4548 _public_5c4548
#define public_5c4550 _public_5c4550
#define public_5c4558 _public_5c4558
#define public_5c4563 _public_5c4563

PROC_DECLARE(0x5c4530, internal_5c4530, public_5c4530);
/* CHUNK of public_58a230 */
extern "C" NAKED register_t __cdecl internal_5c4530()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x6C]
        jmp public_444e20
        public_5c4538 : nop
        lea ecx, ss:[ebp-0x64]
        jmp public_444e50
        public_5c4540 : nop
        lea ecx, ss:[ebp-0x74]
        jmp public_444ee0
        public_5c4548 : nop
        lea ecx, ss:[ebp-0x6C]
        jmp public_444e20
        public_5c4550 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_444e20
        public_5c4558 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_445d70
        public_5c4563 : nop
        mov eax, offset public_5fe1c8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4530)
        ASM_EXPORT_ENTRY_FIRST(0x5c4538, public_5c4538)
        ASM_EXPORT_ENTRY(0x5c4540, public_5c4540)
        ASM_EXPORT_ENTRY(0x5c4548, public_5c4548)
        ASM_EXPORT_ENTRY(0x5c4550, public_5c4550)
        ASM_EXPORT_ENTRY(0x5c4558, public_5c4558)
        ASM_EXPORT_ENTRY_LAST(0x5c4563, public_5c4563)
    }
}

#undef public_5c4538
#undef public_5c4540
#undef public_5c4548
#undef public_5c4550
#undef public_5c4558
#undef public_5c4563

#pragma init_seg(compiler)
extern "C" void const* const public_5c4538 = __AsmFindLabelExport(&internal_5c4530, 0x5c4538);
extern "C" void const* const public_5c4540 = __AsmFindLabelExport(&internal_5c4530, 0x5c4540);
extern "C" void const* const public_5c4548 = __AsmFindLabelExport(&internal_5c4530, 0x5c4548);
extern "C" void const* const public_5c4550 = __AsmFindLabelExport(&internal_5c4530, 0x5c4550);
extern "C" void const* const public_5c4558 = __AsmFindLabelExport(&internal_5c4530, 0x5c4558);
extern "C" void const* const public_5c4563 = __AsmFindLabelExport(&internal_5c4530, 0x5c4563);
