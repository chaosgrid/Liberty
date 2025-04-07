#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9dcd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb1efb _public_6fb1efb
#define public_6fb1f06 _public_6fb1f06
#define public_6fb1f11 _public_6fb1f11

PROC_DECLARE(0x6fb1ef0, internal_6fb1ef0, public_6fb1ef0);
/* CHUNK of public_6f9fec0 */
extern "C" NAKED register_t __cdecl internal_6fb1ef0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0xC
        jmp public_6eec8d0
        public_6fb1efb : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x1C
        jmp public_6eec8d0
        public_6fb1f06 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x30
        jmp public_6f9dcd0
        public_6fb1f11 : nop
        mov eax, offset public_6fc74c4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1ef0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb1efb, public_6fb1efb)
        ASM_EXPORT_ENTRY(0x6fb1f06, public_6fb1f06)
        ASM_EXPORT_ENTRY_LAST(0x6fb1f11, public_6fb1f11)
    }
}

#undef public_6fb1efb
#undef public_6fb1f06
#undef public_6fb1f11

#pragma init_seg(compiler)
extern "C" void const* const public_6fb1efb = __AsmFindLabelExport(&internal_6fb1ef0, 0x6fb1efb);
extern "C" void const* const public_6fb1f06 = __AsmFindLabelExport(&internal_6fb1ef0, 0x6fb1f06);
extern "C" void const* const public_6fb1f11 = __AsmFindLabelExport(&internal_6fb1ef0, 0x6fb1f11);
