#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_434ac0);
CLANG_FORWARD_PROC_SYMBOL(public_435fd0);
CLANG_FORWARD_PROC_SYMBOL(public_4a2d30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b90e8 _public_5b90e8
#define public_5b90f3 _public_5b90f3
#define public_5b90fe _public_5b90fe

PROC_DECLARE(0x5b90e0, internal_5b90e0, public_5b90e0);
/* CHUNK of public_4354d0 */
extern "C" NAKED register_t __cdecl internal_5b90e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_435fd0
        public_5b90e8 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0xC
        jmp public_434ac0
        public_5b90f3 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x20
        jmp public_4a2d30
        public_5b90fe : nop
        mov eax, offset public_5f3018
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b90e0)
        ASM_EXPORT_ENTRY_FIRST(0x5b90e8, public_5b90e8)
        ASM_EXPORT_ENTRY(0x5b90f3, public_5b90f3)
        ASM_EXPORT_ENTRY_LAST(0x5b90fe, public_5b90fe)
    }
}

#undef public_5b90e8
#undef public_5b90f3
#undef public_5b90fe

#pragma init_seg(compiler)
extern "C" void const* const public_5b90e8 = __AsmFindLabelExport(&internal_5b90e0, 0x5b90e8);
extern "C" void const* const public_5b90f3 = __AsmFindLabelExport(&internal_5b90e0, 0x5b90f3);
extern "C" void const* const public_5b90fe = __AsmFindLabelExport(&internal_5b90e0, 0x5b90fe);
