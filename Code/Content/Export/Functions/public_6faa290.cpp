#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faa2a1 _public_6faa2a1
#define public_6faa2a9 _public_6faa2a9

PROC_DECLARE(0x6faa290, internal_6faa290, public_6faa290);
/* CHUNK of public_6eb6760 */
extern "C" NAKED register_t __cdecl internal_6faa290()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x14]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6faa2a1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6eec8d0
        public_6faa2a9 : nop
        mov eax, offset public_6fbe6bc
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faa290)
        ASM_EXPORT_ENTRY_FIRST(0x6faa2a1, public_6faa2a1)
        ASM_EXPORT_ENTRY_LAST(0x6faa2a9, public_6faa2a9)
    }
}

#undef public_6faa2a1
#undef public_6faa2a9

#pragma init_seg(compiler)
extern "C" void const* const public_6faa2a1 = __AsmFindLabelExport(&internal_6faa290, 0x6faa2a1);
extern "C" void const* const public_6faa2a9 = __AsmFindLabelExport(&internal_6faa290, 0x6faa2a9);
