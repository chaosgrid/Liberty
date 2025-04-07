#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7c30);
CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa9eb1 _public_6fa9eb1
#define public_6fa9ebc _public_6fa9ebc

PROC_DECLARE(0x6fa9ea0, internal_6fa9ea0, public_6fa9ea0);
/* CHUNK of public_6eb15b0 */
extern "C" NAKED register_t __cdecl internal_6fa9ea0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fa9eb1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x54
        jmp public_6ea7c30
        public_6fa9ebc : nop
        mov eax, offset public_6fbe294
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9ea0)
        ASM_EXPORT_ENTRY_FIRST(0x6fa9eb1, public_6fa9eb1)
        ASM_EXPORT_ENTRY_LAST(0x6fa9ebc, public_6fa9ebc)
    }
}

#undef public_6fa9eb1
#undef public_6fa9ebc

#pragma init_seg(compiler)
extern "C" void const* const public_6fa9eb1 = __AsmFindLabelExport(&internal_6fa9ea0, 0x6fa9eb1);
extern "C" void const* const public_6fa9ebc = __AsmFindLabelExport(&internal_6fa9ea0, 0x6fa9ebc);
