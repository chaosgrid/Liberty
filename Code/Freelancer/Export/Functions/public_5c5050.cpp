#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_444e50);
CLANG_FORWARD_PROC_SYMBOL(public_444ee0);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c5058 _public_5c5058
#define public_5c5060 _public_5c5060
#define public_5c5068 _public_5c5068
#define public_5c5070 _public_5c5070
#define public_5c5078 _public_5c5078
#define public_5c5083 _public_5c5083

PROC_DECLARE(0x5c5050, internal_5c5050, public_5c5050);
/* CHUNK of public_5a3c30 */
extern "C" NAKED register_t __cdecl internal_5c5050()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x68]
        jmp public_444e20
        public_5c5058 : nop
        lea ecx, ss:[ebp-0x60]
        jmp public_444e50
        public_5c5060 : nop
        lea ecx, ss:[ebp-0x70]
        jmp public_444ee0
        public_5c5068 : nop
        lea ecx, ss:[ebp-0x68]
        jmp public_444e20
        public_5c5070 : nop
        mov ecx, dword ptr ss : [ebp-0x74]
        jmp public_444e20
        public_5c5078 : nop
        mov ecx, dword ptr ss : [ebp-0x74]
        add ecx, 0xC
        jmp public_445d70
        public_5c5083 : nop
        mov eax, offset public_5fee68
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c5050)
        ASM_EXPORT_ENTRY_FIRST(0x5c5058, public_5c5058)
        ASM_EXPORT_ENTRY(0x5c5060, public_5c5060)
        ASM_EXPORT_ENTRY(0x5c5068, public_5c5068)
        ASM_EXPORT_ENTRY(0x5c5070, public_5c5070)
        ASM_EXPORT_ENTRY(0x5c5078, public_5c5078)
        ASM_EXPORT_ENTRY_LAST(0x5c5083, public_5c5083)
    }
}

#undef public_5c5058
#undef public_5c5060
#undef public_5c5068
#undef public_5c5070
#undef public_5c5078
#undef public_5c5083

#pragma init_seg(compiler)
extern "C" void const* const public_5c5058 = __AsmFindLabelExport(&internal_5c5050, 0x5c5058);
extern "C" void const* const public_5c5060 = __AsmFindLabelExport(&internal_5c5050, 0x5c5060);
extern "C" void const* const public_5c5068 = __AsmFindLabelExport(&internal_5c5050, 0x5c5068);
extern "C" void const* const public_5c5070 = __AsmFindLabelExport(&internal_5c5050, 0x5c5070);
extern "C" void const* const public_5c5078 = __AsmFindLabelExport(&internal_5c5050, 0x5c5078);
extern "C" void const* const public_5c5083 = __AsmFindLabelExport(&internal_5c5050, 0x5c5083);
