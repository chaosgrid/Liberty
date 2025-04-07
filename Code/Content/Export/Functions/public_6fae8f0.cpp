#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fae901 _public_6fae901
#define public_6fae90c _public_6fae90c

PROC_DECLARE(0x6fae8f0, internal_6fae8f0, public_6fae8f0);
/* CHUNK of public_6f302a0 */
extern "C" NAKED register_t __cdecl internal_6fae8f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fae901 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x10
        jmp public_6f15350
        public_6fae90c : nop
        mov eax, offset public_6fc37d8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fae8f0)
        ASM_EXPORT_ENTRY_FIRST(0x6fae901, public_6fae901)
        ASM_EXPORT_ENTRY_LAST(0x6fae90c, public_6fae90c)
    }
}

#undef public_6fae901
#undef public_6fae90c

#pragma init_seg(compiler)
extern "C" void const* const public_6fae901 = __AsmFindLabelExport(&internal_6fae8f0, 0x6fae901);
extern "C" void const* const public_6fae90c = __AsmFindLabelExport(&internal_6fae8f0, 0x6fae90c);
