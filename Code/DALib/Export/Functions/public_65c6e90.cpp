#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a6c);

#define public_65c6e9b _public_65c6e9b
#define public_65c6ea6 _public_65c6ea6
#define public_65c6eb1 _public_65c6eb1
#define public_65c6ebc _public_65c6ebc

PROC_DECLARE(0x65c6e90, internal_65c6e90, public_65c6e90);
/* CHUNK of public_65c4670 */
extern "C" NAKED register_t __cdecl internal_65c6e90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        call public_65c6a60
        pop ecx
        ret 
        public_65c6e9b : nop
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        call public_65c6a60
        pop ecx
        ret 
        public_65c6ea6 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        call public_65c6a60
        pop ecx
        ret 
        public_65c6eb1 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        call public_65c6a60
        pop ecx
        ret 
        public_65c6ebc : nop
        mov eax, offset public_65c77dc
        jmp public_65c6a6c
        UNREACHABLE_TRAP(0x65c6e90)
        ASM_EXPORT_ENTRY_FIRST(0x65c6e9b, public_65c6e9b)
        ASM_EXPORT_ENTRY(0x65c6ea6, public_65c6ea6)
        ASM_EXPORT_ENTRY(0x65c6eb1, public_65c6eb1)
        ASM_EXPORT_ENTRY_LAST(0x65c6ebc, public_65c6ebc)
    }
}

#undef public_65c6e9b
#undef public_65c6ea6
#undef public_65c6eb1
#undef public_65c6ebc

#pragma init_seg(compiler)
extern "C" void const* const public_65c6e9b = __AsmFindLabelExport(&internal_65c6e90, 0x65c6e9b);
extern "C" void const* const public_65c6ea6 = __AsmFindLabelExport(&internal_65c6e90, 0x65c6ea6);
extern "C" void const* const public_65c6eb1 = __AsmFindLabelExport(&internal_65c6e90, 0x65c6eb1);
extern "C" void const* const public_65c6ebc = __AsmFindLabelExport(&internal_65c6e90, 0x65c6ebc);
