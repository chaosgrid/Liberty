#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafd11 _public_6fafd11
#define public_6fafd22 _public_6fafd22

PROC_DECLARE(0x6fafd00, internal_6fafd00, public_6fafd00);
/* CHUNK of public_6f6a760 */
extern "C" NAKED register_t __cdecl internal_6fafd00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fafd11 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fafd22 : nop
        mov eax, offset public_6fc4e3c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafd00)
        ASM_EXPORT_ENTRY_FIRST(0x6fafd11, public_6fafd11)
        ASM_EXPORT_ENTRY_LAST(0x6fafd22, public_6fafd22)
    }
}

#undef public_6fafd11
#undef public_6fafd22

#pragma init_seg(compiler)
extern "C" void const* const public_6fafd11 = __AsmFindLabelExport(&internal_6fafd00, 0x6fafd11);
extern "C" void const* const public_6fafd22 = __AsmFindLabelExport(&internal_6fafd00, 0x6fafd22);
