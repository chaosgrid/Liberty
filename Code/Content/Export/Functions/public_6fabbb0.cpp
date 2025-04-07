#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee2b70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fabbb8 _public_6fabbb8
#define public_6fabbc3 _public_6fabbc3
#define public_6fabbce _public_6fabbce

PROC_DECLARE(0x6fabbb0, internal_6fabbb0, public_6fabbb0);
/* CHUNK of public_6ee8880 */
extern "C" NAKED register_t __cdecl internal_6fabbb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ee2b70
        public_6fabbb8 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fabbc3 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fabbce : nop
        mov eax, offset public_6fc0784
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fabbb0)
        ASM_EXPORT_ENTRY_FIRST(0x6fabbb8, public_6fabbb8)
        ASM_EXPORT_ENTRY(0x6fabbc3, public_6fabbc3)
        ASM_EXPORT_ENTRY_LAST(0x6fabbce, public_6fabbce)
    }
}

#undef public_6fabbb8
#undef public_6fabbc3
#undef public_6fabbce

#pragma init_seg(compiler)
extern "C" void const* const public_6fabbb8 = __AsmFindLabelExport(&internal_6fabbb0, 0x6fabbb8);
extern "C" void const* const public_6fabbc3 = __AsmFindLabelExport(&internal_6fabbb0, 0x6fabbc3);
extern "C" void const* const public_6fabbce = __AsmFindLabelExport(&internal_6fabbb0, 0x6fabbce);
