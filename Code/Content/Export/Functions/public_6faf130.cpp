#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4cf10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf139 _public_6faf139
#define public_6faf141 _public_6faf141
#define public_6faf149 _public_6faf149

PROC_DECLARE(0x6faf130, internal_6faf130, public_6faf130);
/* CHUNK of public_6f4cd50 */
extern "C" NAKED register_t __cdecl internal_6faf130()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x44]
        jmp dword ptr ds : [public_6fb32d8]
        public_6faf139 : nop
        lea ecx, ss:[ebp-0x34]
        jmp public_6f4cf10
        public_6faf141 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_6f4cf10
        public_6faf149 : nop
        mov eax, offset public_6fc4114
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf130)
        ASM_EXPORT_ENTRY_FIRST(0x6faf139, public_6faf139)
        ASM_EXPORT_ENTRY(0x6faf141, public_6faf141)
        ASM_EXPORT_ENTRY_LAST(0x6faf149, public_6faf149)
    }
}

#undef public_6faf139
#undef public_6faf141
#undef public_6faf149

#pragma init_seg(compiler)
extern "C" void const* const public_6faf139 = __AsmFindLabelExport(&internal_6faf130, 0x6faf139);
extern "C" void const* const public_6faf141 = __AsmFindLabelExport(&internal_6faf130, 0x6faf141);
extern "C" void const* const public_6faf149 = __AsmFindLabelExport(&internal_6faf130, 0x6faf149);
