#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_409300);
CLANG_FORWARD_PROC_SYMBOL(public_40fc80);
CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_418c78);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a7bb _public_41a7bb
#define public_41a7c6 _public_41a7c6
#define public_41a7d1 _public_41a7d1
#define public_41a7dc _public_41a7dc
#define public_41a7e7 _public_41a7e7
#define public_41a7f2 _public_41a7f2

PROC_DECLARE(0x41a7b0, internal_41a7b0, public_41a7b0);
/* CHUNK of public_412e50 */
extern "C" NAKED register_t __cdecl internal_41a7b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x210]
        jmp public_409300
        public_41a7bb : nop
        lea ecx, ss:[ebp-0x210]
        jmp public_418a98
        public_41a7c6 : nop
        lea ecx, ss:[ebp-0x1B0]
        jmp public_418c78
        public_41a7d1 : nop
        lea ecx, ss:[ebp-0x16C]
        jmp public_40fc80
        public_41a7dc : nop
        lea ecx, ss:[ebp-0xD0]
        jmp public_418c78
        public_41a7e7 : nop
        lea ecx, ss:[ebp-0x90]
        jmp public_418c78
        public_41a7f2 : nop
        mov eax, offset public_41f914
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a7b0)
        ASM_EXPORT_ENTRY_FIRST(0x41a7bb, public_41a7bb)
        ASM_EXPORT_ENTRY(0x41a7c6, public_41a7c6)
        ASM_EXPORT_ENTRY(0x41a7d1, public_41a7d1)
        ASM_EXPORT_ENTRY(0x41a7dc, public_41a7dc)
        ASM_EXPORT_ENTRY(0x41a7e7, public_41a7e7)
        ASM_EXPORT_ENTRY_LAST(0x41a7f2, public_41a7f2)
    }
}

#undef public_41a7bb
#undef public_41a7c6
#undef public_41a7d1
#undef public_41a7dc
#undef public_41a7e7
#undef public_41a7f2

#pragma init_seg(compiler)
extern "C" void const* const public_41a7bb = __AsmFindLabelExport(&internal_41a7b0, 0x41a7bb);
extern "C" void const* const public_41a7c6 = __AsmFindLabelExport(&internal_41a7b0, 0x41a7c6);
extern "C" void const* const public_41a7d1 = __AsmFindLabelExport(&internal_41a7b0, 0x41a7d1);
extern "C" void const* const public_41a7dc = __AsmFindLabelExport(&internal_41a7b0, 0x41a7dc);
extern "C" void const* const public_41a7e7 = __AsmFindLabelExport(&internal_41a7b0, 0x41a7e7);
extern "C" void const* const public_41a7f2 = __AsmFindLabelExport(&internal_41a7b0, 0x41a7f2);
