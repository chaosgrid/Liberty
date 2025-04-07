#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a6c);

#define public_65c6d5b _public_65c6d5b
#define public_65c6d66 _public_65c6d66
#define public_65c6d71 _public_65c6d71
#define public_65c6d7c _public_65c6d7c

PROC_DECLARE(0x65c6d50, internal_65c6d50, public_65c6d50);
/* CHUNK of public_65c19d0 */
extern "C" NAKED register_t __cdecl internal_65c6d50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_65c6a60
        pop ecx
        ret 
        public_65c6d5b : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_65c6a60
        pop ecx
        ret 
        public_65c6d66 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_65c6a60
        pop ecx
        ret 
        public_65c6d71 : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_65c6a60
        pop ecx
        ret 
        public_65c6d7c : nop
        mov eax, offset public_65c7688
        jmp public_65c6a6c
        UNREACHABLE_TRAP(0x65c6d50)
        ASM_EXPORT_ENTRY_FIRST(0x65c6d5b, public_65c6d5b)
        ASM_EXPORT_ENTRY(0x65c6d66, public_65c6d66)
        ASM_EXPORT_ENTRY(0x65c6d71, public_65c6d71)
        ASM_EXPORT_ENTRY_LAST(0x65c6d7c, public_65c6d7c)
    }
}

#undef public_65c6d5b
#undef public_65c6d66
#undef public_65c6d71
#undef public_65c6d7c

#pragma init_seg(compiler)
extern "C" void const* const public_65c6d5b = __AsmFindLabelExport(&internal_65c6d50, 0x65c6d5b);
extern "C" void const* const public_65c6d66 = __AsmFindLabelExport(&internal_65c6d50, 0x65c6d66);
extern "C" void const* const public_65c6d71 = __AsmFindLabelExport(&internal_65c6d50, 0x65c6d71);
extern "C" void const* const public_65c6d7c = __AsmFindLabelExport(&internal_65c6d50, 0x65c6d7c);
