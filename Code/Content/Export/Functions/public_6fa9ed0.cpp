#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa9ee1 _public_6fa9ee1
#define public_6fa9eec _public_6fa9eec

PROC_DECLARE(0x6fa9ed0, internal_6fa9ed0, public_6fa9ed0);
/* CHUNK of public_6eb1700 */
extern "C" NAKED register_t __cdecl internal_6fa9ed0()
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
        public_6fa9ee1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_6eec8d0
        public_6fa9eec : nop
        mov eax, offset public_6fbe2c0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9ed0)
        ASM_EXPORT_ENTRY_FIRST(0x6fa9ee1, public_6fa9ee1)
        ASM_EXPORT_ENTRY_LAST(0x6fa9eec, public_6fa9eec)
    }
}

#undef public_6fa9ee1
#undef public_6fa9eec

#pragma init_seg(compiler)
extern "C" void const* const public_6fa9ee1 = __AsmFindLabelExport(&internal_6fa9ed0, 0x6fa9ee1);
extern "C" void const* const public_6fa9eec = __AsmFindLabelExport(&internal_6fa9ed0, 0x6fa9eec);
