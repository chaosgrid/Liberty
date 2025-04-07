#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2c20);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0b2b _public_6fb0b2b
#define public_6fb0b36 _public_6fb0b36
#define public_6fb0b3e _public_6fb0b3e

PROC_DECLARE(0x6fb0b20, internal_6fb0b20, public_6fb0b20);
/* CHUNK of public_6f862e0 */
extern "C" NAKED register_t __cdecl internal_6fb0b20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x3C
        jmp public_6f15350
        public_6fb0b2b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x58
        jmp public_6ecfa90
        public_6fb0b36 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ed2c20
        public_6fb0b3e : nop
        mov eax, offset public_6fc5ee4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0b20)
        ASM_EXPORT_ENTRY_FIRST(0x6fb0b2b, public_6fb0b2b)
        ASM_EXPORT_ENTRY(0x6fb0b36, public_6fb0b36)
        ASM_EXPORT_ENTRY_LAST(0x6fb0b3e, public_6fb0b3e)
    }
}

#undef public_6fb0b2b
#undef public_6fb0b36
#undef public_6fb0b3e

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0b2b = __AsmFindLabelExport(&internal_6fb0b20, 0x6fb0b2b);
extern "C" void const* const public_6fb0b36 = __AsmFindLabelExport(&internal_6fb0b20, 0x6fb0b36);
extern "C" void const* const public_6fb0b3e = __AsmFindLabelExport(&internal_6fb0b20, 0x6fb0b3e);
