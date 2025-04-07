#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb15f1 _public_6fb15f1
#define public_6fb1602 _public_6fb1602

PROC_DECLARE(0x6fb15e0, internal_6fb15e0, public_6fb15e0);
/* CHUNK of public_6f945f0 */
extern "C" NAKED register_t __cdecl internal_6fb15e0()
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
        public_6fb15f1 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fb1602 : nop
        mov eax, offset public_6fc6b78
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb15e0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb15f1, public_6fb15f1)
        ASM_EXPORT_ENTRY_LAST(0x6fb1602, public_6fb1602)
    }
}

#undef public_6fb15f1
#undef public_6fb1602

#pragma init_seg(compiler)
extern "C" void const* const public_6fb15f1 = __AsmFindLabelExport(&internal_6fb15e0, 0x6fb15f1);
extern "C" void const* const public_6fb1602 = __AsmFindLabelExport(&internal_6fb15e0, 0x6fb1602);
