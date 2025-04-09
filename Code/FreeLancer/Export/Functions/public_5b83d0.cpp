#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403200);
CLANG_FORWARD_PROC_SYMBOL(public_4032a0);
CLANG_FORWARD_PROC_SYMBOL(public_405840);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b83db _public_5b83db
#define public_5b83e6 _public_5b83e6
#define public_5b83f1 _public_5b83f1
#define public_5b83f9 _public_5b83f9
#define public_5b8401 _public_5b8401

PROC_DECLARE(0x5b83d0, internal_5b83d0, public_5b83d0);
/* CHUNK of public_403ea0 */
extern "C" NAKED register_t __cdecl internal_5b83d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x90]
        jmp public_405840
        public_5b83db : nop
        lea ecx, ss:[ebp-0x84]
        jmp public_405840
        public_5b83e6 : nop
        lea ecx, ss:[ebp-0xA4]
        jmp public_405840
        public_5b83f1 : nop
        lea ecx, ss:[ebp-0x78]
        jmp public_403200
        public_5b83f9 : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_4032a0
        public_5b8401 : nop
        mov eax, offset public_5f1ed0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b83d0)
        ASM_EXPORT_ENTRY_FIRST(0x5b83db, public_5b83db)
        ASM_EXPORT_ENTRY(0x5b83e6, public_5b83e6)
        ASM_EXPORT_ENTRY(0x5b83f1, public_5b83f1)
        ASM_EXPORT_ENTRY(0x5b83f9, public_5b83f9)
        ASM_EXPORT_ENTRY_LAST(0x5b8401, public_5b8401)
    }
}

#undef public_5b83db
#undef public_5b83e6
#undef public_5b83f1
#undef public_5b83f9
#undef public_5b8401

#pragma init_seg(compiler)
extern "C" void const* const public_5b83db = __AsmFindLabelExport(&internal_5b83d0, 0x5b83db);
extern "C" void const* const public_5b83e6 = __AsmFindLabelExport(&internal_5b83d0, 0x5b83e6);
extern "C" void const* const public_5b83f1 = __AsmFindLabelExport(&internal_5b83d0, 0x5b83f1);
extern "C" void const* const public_5b83f9 = __AsmFindLabelExport(&internal_5b83d0, 0x5b83f9);
extern "C" void const* const public_5b8401 = __AsmFindLabelExport(&internal_5b83d0, 0x5b8401);
