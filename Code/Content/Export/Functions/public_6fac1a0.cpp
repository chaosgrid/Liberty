#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac1ac _public_6fac1ac
#define public_6fac1b4 _public_6fac1b4

PROC_DECLARE(0x6fac1a0, internal_6fac1a0, public_6fac1a0);
/* CHUNK of public_6ef3e30 */
extern "C" NAKED register_t __cdecl internal_6fac1a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp dword ptr ds : [public_6fb3138]
        public_6fac1ac : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6eec8d0
        public_6fac1b4 : nop
        mov eax, offset public_6fc0e00
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac1a0)
        ASM_EXPORT_ENTRY_FIRST(0x6fac1ac, public_6fac1ac)
        ASM_EXPORT_ENTRY_LAST(0x6fac1b4, public_6fac1b4)
    }
}

#undef public_6fac1ac
#undef public_6fac1b4

#pragma init_seg(compiler)
extern "C" void const* const public_6fac1ac = __AsmFindLabelExport(&internal_6fac1a0, 0x6fac1ac);
extern "C" void const* const public_6fac1b4 = __AsmFindLabelExport(&internal_6fac1a0, 0x6fac1b4);
