#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f86ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6f87bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb147b _public_6fb147b
#define public_6fb1489 _public_6fb1489
#define public_6fb1491 _public_6fb1491

PROC_DECLARE(0x6fb1470, internal_6fb1470, public_6fb1470);
/* CHUNK of public_6f90f60 */
extern "C" NAKED register_t __cdecl internal_6fb1470()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xD0]
        jmp public_6f87bf0
        public_6fb147b : nop
        mov eax, dword ptr ss : [ebp-0x104]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fb1489 : nop
        lea ecx, ss:[ebp-0x54]
        jmp public_6f86ac0
        public_6fb1491 : nop
        mov eax, offset public_6fc69d8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1470)
        ASM_EXPORT_ENTRY_FIRST(0x6fb147b, public_6fb147b)
        ASM_EXPORT_ENTRY(0x6fb1489, public_6fb1489)
        ASM_EXPORT_ENTRY_LAST(0x6fb1491, public_6fb1491)
    }
}

#undef public_6fb147b
#undef public_6fb1489
#undef public_6fb1491

#pragma init_seg(compiler)
extern "C" void const* const public_6fb147b = __AsmFindLabelExport(&internal_6fb1470, 0x6fb147b);
extern "C" void const* const public_6fb1489 = __AsmFindLabelExport(&internal_6fb1470, 0x6fb1489);
extern "C" void const* const public_6fb1491 = __AsmFindLabelExport(&internal_6fb1470, 0x6fb1491);
