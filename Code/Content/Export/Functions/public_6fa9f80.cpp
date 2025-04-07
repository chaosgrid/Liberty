#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa9f91 _public_6fa9f91
#define public_6fa9f99 _public_6fa9f99

PROC_DECLARE(0x6fa9f80, internal_6fa9f80, public_6fa9f80);
/* CHUNK of public_6eb1ba0 */
extern "C" NAKED register_t __cdecl internal_6fa9f80()
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
        public_6fa9f91 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6f15350
        public_6fa9f99 : nop
        mov eax, offset public_6fbe35c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9f80)
        ASM_EXPORT_ENTRY_FIRST(0x6fa9f91, public_6fa9f91)
        ASM_EXPORT_ENTRY_LAST(0x6fa9f99, public_6fa9f99)
    }
}

#undef public_6fa9f91
#undef public_6fa9f99

#pragma init_seg(compiler)
extern "C" void const* const public_6fa9f91 = __AsmFindLabelExport(&internal_6fa9f80, 0x6fa9f91);
extern "C" void const* const public_6fa9f99 = __AsmFindLabelExport(&internal_6fa9f80, 0x6fa9f99);
