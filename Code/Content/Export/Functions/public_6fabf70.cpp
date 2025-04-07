#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef0570);
CLANG_FORWARD_PROC_SYMBOL(public_6ef05d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fabf7b _public_6fabf7b
#define public_6fabf83 _public_6fabf83
#define public_6fabf8e _public_6fabf8e

PROC_DECLARE(0x6fabf70, internal_6fabf70, public_6fabf70);
/* CHUNK of public_6ef0600 */
extern "C" NAKED register_t __cdecl internal_6fabf70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fabf7b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ef0570
        public_6fabf83 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x68
        jmp public_6ef05d0
        public_6fabf8e : nop
        mov eax, offset public_6fc0b90
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fabf70)
        ASM_EXPORT_ENTRY_FIRST(0x6fabf7b, public_6fabf7b)
        ASM_EXPORT_ENTRY(0x6fabf83, public_6fabf83)
        ASM_EXPORT_ENTRY_LAST(0x6fabf8e, public_6fabf8e)
    }
}

#undef public_6fabf7b
#undef public_6fabf83
#undef public_6fabf8e

#pragma init_seg(compiler)
extern "C" void const* const public_6fabf7b = __AsmFindLabelExport(&internal_6fabf70, 0x6fabf7b);
extern "C" void const* const public_6fabf83 = __AsmFindLabelExport(&internal_6fabf70, 0x6fabf83);
extern "C" void const* const public_6fabf8e = __AsmFindLabelExport(&internal_6fabf70, 0x6fabf8e);
