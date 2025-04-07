#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa9f11 _public_6fa9f11
#define public_6fa9f1c _public_6fa9f1c

PROC_DECLARE(0x6fa9f00, internal_6fa9f00, public_6fa9f00);
/* CHUNK of public_6eb1830 */
extern "C" NAKED register_t __cdecl internal_6fa9f00()
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
        public_6fa9f11 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_6eec8d0
        public_6fa9f1c : nop
        mov eax, offset public_6fbe2ec
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9f00)
        ASM_EXPORT_ENTRY_FIRST(0x6fa9f11, public_6fa9f11)
        ASM_EXPORT_ENTRY_LAST(0x6fa9f1c, public_6fa9f1c)
    }
}

#undef public_6fa9f11
#undef public_6fa9f1c

#pragma init_seg(compiler)
extern "C" void const* const public_6fa9f11 = __AsmFindLabelExport(&internal_6fa9f00, 0x6fa9f11);
extern "C" void const* const public_6fa9f1c = __AsmFindLabelExport(&internal_6fa9f00, 0x6fa9f1c);
