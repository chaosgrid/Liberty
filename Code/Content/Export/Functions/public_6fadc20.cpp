#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7900);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fadc2b _public_6fadc2b
#define public_6fadc36 _public_6fadc36

PROC_DECLARE(0x6fadc20, internal_6fadc20, public_6fadc20);
/* CHUNK of public_6f1b6d0 */
extern "C" NAKED register_t __cdecl internal_6fadc20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x20]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fadc2b : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 8
        jmp public_6eb7900
        public_6fadc36 : nop
        mov eax, offset public_6fc2b90
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fadc20)
        ASM_EXPORT_ENTRY_FIRST(0x6fadc2b, public_6fadc2b)
        ASM_EXPORT_ENTRY_LAST(0x6fadc36, public_6fadc36)
    }
}

#undef public_6fadc2b
#undef public_6fadc36

#pragma init_seg(compiler)
extern "C" void const* const public_6fadc2b = __AsmFindLabelExport(&internal_6fadc20, 0x6fadc2b);
extern "C" void const* const public_6fadc36 = __AsmFindLabelExport(&internal_6fadc20, 0x6fadc36);
