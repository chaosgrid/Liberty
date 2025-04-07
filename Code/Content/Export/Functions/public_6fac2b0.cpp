#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac2b8 _public_6fac2b8
#define public_6fac2c3 _public_6fac2c3
#define public_6fac2cb _public_6fac2cb

PROC_DECLARE(0x6fac2b0, internal_6fac2b0, public_6fac2b0);
/* CHUNK of public_6ef4ab0 */
extern "C" NAKED register_t __cdecl internal_6fac2b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6f28e10
        public_6fac2b8 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x50
        jmp public_6eec8d0
        public_6fac2c3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6f15350
        public_6fac2cb : nop
        mov eax, offset public_6fc0f34
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac2b0)
        ASM_EXPORT_ENTRY_FIRST(0x6fac2b8, public_6fac2b8)
        ASM_EXPORT_ENTRY(0x6fac2c3, public_6fac2c3)
        ASM_EXPORT_ENTRY_LAST(0x6fac2cb, public_6fac2cb)
    }
}

#undef public_6fac2b8
#undef public_6fac2c3
#undef public_6fac2cb

#pragma init_seg(compiler)
extern "C" void const* const public_6fac2b8 = __AsmFindLabelExport(&internal_6fac2b0, 0x6fac2b8);
extern "C" void const* const public_6fac2c3 = __AsmFindLabelExport(&internal_6fac2b0, 0x6fac2c3);
extern "C" void const* const public_6fac2cb = __AsmFindLabelExport(&internal_6fac2b0, 0x6fac2cb);
