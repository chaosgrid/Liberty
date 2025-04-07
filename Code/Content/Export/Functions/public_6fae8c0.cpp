#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f30690);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fae8d1 _public_6fae8d1
#define public_6fae8d9 _public_6fae8d9
#define public_6fae8e4 _public_6fae8e4

PROC_DECLARE(0x6fae8c0, internal_6fae8c0, public_6fae8c0);
/* CHUNK of public_6f300e0 */
extern "C" NAKED register_t __cdecl internal_6fae8c0()
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
        public_6fae8d1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f30690
        public_6fae8d9 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_6eec8d0
        public_6fae8e4 : nop
        mov eax, offset public_6fc37ac
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fae8c0)
        ASM_EXPORT_ENTRY_FIRST(0x6fae8d1, public_6fae8d1)
        ASM_EXPORT_ENTRY(0x6fae8d9, public_6fae8d9)
        ASM_EXPORT_ENTRY_LAST(0x6fae8e4, public_6fae8e4)
    }
}

#undef public_6fae8d1
#undef public_6fae8d9
#undef public_6fae8e4

#pragma init_seg(compiler)
extern "C" void const* const public_6fae8d1 = __AsmFindLabelExport(&internal_6fae8c0, 0x6fae8d1);
extern "C" void const* const public_6fae8d9 = __AsmFindLabelExport(&internal_6fae8c0, 0x6fae8d9);
extern "C" void const* const public_6fae8e4 = __AsmFindLabelExport(&internal_6fae8c0, 0x6fae8e4);
