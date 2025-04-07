#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e910);
CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a5cb _public_41a5cb
#define public_41a5d6 _public_41a5d6
#define public_41a5e1 _public_41a5e1

PROC_DECLARE(0x41a5c0, internal_41a5c0, public_41a5c0);
/* CHUNK of public_4104e0 */
extern "C" NAKED register_t __cdecl internal_41a5c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x828]
        jmp public_40e910
        public_41a5cb : nop
        lea ecx, ss:[ebp-0x828]
        jmp public_40e910
        public_41a5d6 : nop
        lea ecx, ss:[ebp-0x82C]
        jmp public_418aa4
        public_41a5e1 : nop
        mov eax, offset public_41f6e4
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a5c0)
        ASM_EXPORT_ENTRY_FIRST(0x41a5cb, public_41a5cb)
        ASM_EXPORT_ENTRY(0x41a5d6, public_41a5d6)
        ASM_EXPORT_ENTRY_LAST(0x41a5e1, public_41a5e1)
    }
}

#undef public_41a5cb
#undef public_41a5d6
#undef public_41a5e1

#pragma init_seg(compiler)
extern "C" void const* const public_41a5cb = __AsmFindLabelExport(&internal_41a5c0, 0x41a5cb);
extern "C" void const* const public_41a5d6 = __AsmFindLabelExport(&internal_41a5c0, 0x41a5d6);
extern "C" void const* const public_41a5e1 = __AsmFindLabelExport(&internal_41a5c0, 0x41a5e1);
