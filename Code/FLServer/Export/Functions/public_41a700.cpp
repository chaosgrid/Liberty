#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a708 _public_41a708
#define public_41a710 _public_41a710
#define public_41a718 _public_41a718
#define public_41a720 _public_41a720

PROC_DECLARE(0x41a700, internal_41a700, public_41a700);
/* CHUNK of public_4122f0 */
extern "C" NAKED register_t __cdecl internal_41a700()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x3C]
        jmp public_418aa4
        public_41a708 : nop
        lea ecx, ss:[ebp-0x40]
        jmp public_418aa4
        public_41a710 : nop
        lea ecx, ss:[ebp-0x34]
        jmp public_418aa4
        public_41a718 : nop
        lea ecx, ss:[ebp-0x34]
        jmp public_418aa4
        public_41a720 : nop
        mov eax, offset public_41f858
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a700)
        ASM_EXPORT_ENTRY_FIRST(0x41a708, public_41a708)
        ASM_EXPORT_ENTRY(0x41a710, public_41a710)
        ASM_EXPORT_ENTRY(0x41a718, public_41a718)
        ASM_EXPORT_ENTRY_LAST(0x41a720, public_41a720)
    }
}

#undef public_41a708
#undef public_41a710
#undef public_41a718
#undef public_41a720

#pragma init_seg(compiler)
extern "C" void const* const public_41a708 = __AsmFindLabelExport(&internal_41a700, 0x41a708);
extern "C" void const* const public_41a710 = __AsmFindLabelExport(&internal_41a700, 0x41a710);
extern "C" void const* const public_41a718 = __AsmFindLabelExport(&internal_41a700, 0x41a718);
extern "C" void const* const public_41a720 = __AsmFindLabelExport(&internal_41a700, 0x41a720);
