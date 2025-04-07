#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40cf80);
CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_418c78);
CLANG_FORWARD_PROC_SYMBOL(public_418d86);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a0db _public_41a0db
#define public_41a0e6 _public_41a0e6
#define public_41a0f1 _public_41a0f1
#define public_41a0fc _public_41a0fc
#define public_41a107 _public_41a107
#define public_41a112 _public_41a112
#define public_41a11d _public_41a11d

PROC_DECLARE(0x41a0d0, internal_41a0d0, public_41a0d0);
/* CHUNK of public_40cea0 */
extern "C" NAKED register_t __cdecl internal_41a0d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24C]
        jmp public_40cf80
        public_41a0db : nop
        lea ecx, ss:[ebp-0x24C]
        jmp public_418a98
        public_41a0e6 : nop
        lea ecx, ss:[ebp-0x1EC]
        jmp public_418c78
        public_41a0f1 : nop
        lea ecx, ss:[ebp-0x1AC]
        jmp public_418c78
        public_41a0fc : nop
        lea ecx, ss:[ebp-0x16C]
        jmp public_418c78
        public_41a107 : nop
        lea ecx, ss:[ebp-0x12C]
        jmp public_418d86
        public_41a112 : nop
        lea ecx, ss:[ebp-0xEC]
        jmp public_418c78
        public_41a11d : nop
        mov eax, offset public_41f270
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a0d0)
        ASM_EXPORT_ENTRY_FIRST(0x41a0db, public_41a0db)
        ASM_EXPORT_ENTRY(0x41a0e6, public_41a0e6)
        ASM_EXPORT_ENTRY(0x41a0f1, public_41a0f1)
        ASM_EXPORT_ENTRY(0x41a0fc, public_41a0fc)
        ASM_EXPORT_ENTRY(0x41a107, public_41a107)
        ASM_EXPORT_ENTRY(0x41a112, public_41a112)
        ASM_EXPORT_ENTRY_LAST(0x41a11d, public_41a11d)
    }
}

#undef public_41a0db
#undef public_41a0e6
#undef public_41a0f1
#undef public_41a0fc
#undef public_41a107
#undef public_41a112
#undef public_41a11d

#pragma init_seg(compiler)
extern "C" void const* const public_41a0db = __AsmFindLabelExport(&internal_41a0d0, 0x41a0db);
extern "C" void const* const public_41a0e6 = __AsmFindLabelExport(&internal_41a0d0, 0x41a0e6);
extern "C" void const* const public_41a0f1 = __AsmFindLabelExport(&internal_41a0d0, 0x41a0f1);
extern "C" void const* const public_41a0fc = __AsmFindLabelExport(&internal_41a0d0, 0x41a0fc);
extern "C" void const* const public_41a107 = __AsmFindLabelExport(&internal_41a0d0, 0x41a107);
extern "C" void const* const public_41a112 = __AsmFindLabelExport(&internal_41a0d0, 0x41a112);
extern "C" void const* const public_41a11d = __AsmFindLabelExport(&internal_41a0d0, 0x41a11d);
