#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c50d9 _public_5c50d9
#define public_5c50e2 _public_5c50e2
#define public_5c50eb _public_5c50eb
#define public_5c50f3 _public_5c50f3
#define public_5c50fc _public_5c50fc
#define public_5c5104 _public_5c5104

PROC_DECLARE(0x5c50d0, internal_5c50d0, public_5c50d0);
/* CHUNK of public_5a4810 */
extern "C" NAKED register_t __cdecl internal_5c50d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_5c7090]
        public_5c50d9 : nop
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_5c62c4]
        public_5c50e2 : nop
        lea ecx, ss:[ebp-0x30]
        jmp dword ptr ds : [public_5c62b4]
        public_5c50eb : nop
        lea ecx, ss:[ebp+0x24]
        jmp public_45eeb0
        public_5c50f3 : nop
        lea ecx, ss:[ebp-0x30]
        jmp dword ptr ds : [public_5c62bc]
        public_5c50fc : nop
        lea ecx, ss:[ebp+0x24]
        jmp public_45eeb0
        public_5c5104 : nop
        mov eax, offset public_5fef1c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c50d0)
        ASM_EXPORT_ENTRY_FIRST(0x5c50d9, public_5c50d9)
        ASM_EXPORT_ENTRY(0x5c50e2, public_5c50e2)
        ASM_EXPORT_ENTRY(0x5c50eb, public_5c50eb)
        ASM_EXPORT_ENTRY(0x5c50f3, public_5c50f3)
        ASM_EXPORT_ENTRY(0x5c50fc, public_5c50fc)
        ASM_EXPORT_ENTRY_LAST(0x5c5104, public_5c5104)
    }
}

#undef public_5c50d9
#undef public_5c50e2
#undef public_5c50eb
#undef public_5c50f3
#undef public_5c50fc
#undef public_5c5104

#pragma init_seg(compiler)
extern "C" void const* const public_5c50d9 = __AsmFindLabelExport(&internal_5c50d0, 0x5c50d9);
extern "C" void const* const public_5c50e2 = __AsmFindLabelExport(&internal_5c50d0, 0x5c50e2);
extern "C" void const* const public_5c50eb = __AsmFindLabelExport(&internal_5c50d0, 0x5c50eb);
extern "C" void const* const public_5c50f3 = __AsmFindLabelExport(&internal_5c50d0, 0x5c50f3);
extern "C" void const* const public_5c50fc = __AsmFindLabelExport(&internal_5c50d0, 0x5c50fc);
extern "C" void const* const public_5c5104 = __AsmFindLabelExport(&internal_5c50d0, 0x5c5104);
