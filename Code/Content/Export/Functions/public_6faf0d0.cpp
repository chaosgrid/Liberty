#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf0d8 _public_6faf0d8
#define public_6faf0e1 _public_6faf0e1

PROC_DECLARE(0x6faf0d0, internal_6faf0d0, public_6faf0d0);
/* CHUNK of public_6f4c3b0 */
extern "C" NAKED register_t __cdecl internal_6faf0d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2C]
        jmp public_6eec8d0
        public_6faf0d8 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_6fb32d8]
        public_6faf0e1 : nop
        mov eax, offset public_6fc4090
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf0d0)
        ASM_EXPORT_ENTRY_FIRST(0x6faf0d8, public_6faf0d8)
        ASM_EXPORT_ENTRY_LAST(0x6faf0e1, public_6faf0e1)
    }
}

#undef public_6faf0d8
#undef public_6faf0e1

#pragma init_seg(compiler)
extern "C" void const* const public_6faf0d8 = __AsmFindLabelExport(&internal_6faf0d0, 0x6faf0d8);
extern "C" void const* const public_6faf0e1 = __AsmFindLabelExport(&internal_6faf0d0, 0x6faf0e1);
