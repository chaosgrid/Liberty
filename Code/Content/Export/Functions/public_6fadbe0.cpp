#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1a5c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fadbeb _public_6fadbeb
#define public_6fadbf3 _public_6fadbf3

PROC_DECLARE(0x6fadbe0, internal_6fadbe0, public_6fadbe0);
/* CHUNK of public_6f1a3e0 */
extern "C" NAKED register_t __cdecl internal_6fadbe0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fadbeb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f1a5c0
        public_6fadbf3 : nop
        mov eax, offset public_6fc2b1c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fadbe0)
        ASM_EXPORT_ENTRY_FIRST(0x6fadbeb, public_6fadbeb)
        ASM_EXPORT_ENTRY_LAST(0x6fadbf3, public_6fadbf3)
    }
}

#undef public_6fadbeb
#undef public_6fadbf3

#pragma init_seg(compiler)
extern "C" void const* const public_6fadbeb = __AsmFindLabelExport(&internal_6fadbe0, 0x6fadbeb);
extern "C" void const* const public_6fadbf3 = __AsmFindLabelExport(&internal_6fadbe0, 0x6fadbf3);
