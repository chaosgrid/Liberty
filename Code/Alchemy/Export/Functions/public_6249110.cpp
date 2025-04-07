#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6229e70);
CLANG_FORWARD_PROC_SYMBOL(public_6229f50);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249118 _public_6249118
#define public_6249120 _public_6249120
#define public_6249128 _public_6249128

PROC_DECLARE(0x6249110, internal_6249110, public_6249110);
/* CHUNK of public_62281c0 */
extern "C" NAKED register_t __cdecl internal_6249110()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x20]
        jmp public_6222ec0
        public_6249118 : nop
        lea ecx, ss:[ebp-0x30]
        jmp public_6229e70
        public_6249120 : nop
        lea ecx, ss:[ebp+8]
        jmp public_6229f50
        public_6249128 : nop
        mov eax, offset public_62520b8
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249110)
        ASM_EXPORT_ENTRY_FIRST(0x6249118, public_6249118)
        ASM_EXPORT_ENTRY(0x6249120, public_6249120)
        ASM_EXPORT_ENTRY_LAST(0x6249128, public_6249128)
    }
}

#undef public_6249118
#undef public_6249120
#undef public_6249128

#pragma init_seg(compiler)
extern "C" void const* const public_6249118 = __AsmFindLabelExport(&internal_6249110, 0x6249118);
extern "C" void const* const public_6249120 = __AsmFindLabelExport(&internal_6249110, 0x6249120);
extern "C" void const* const public_6249128 = __AsmFindLabelExport(&internal_6249110, 0x6249128);
