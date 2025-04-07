#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab161 _public_6fab161
#define public_6fab16c _public_6fab16c

PROC_DECLARE(0x6fab150, internal_6fab150, public_6fab150);
/* CHUNK of public_6ed3170 */
extern "C" NAKED register_t __cdecl internal_6fab150()
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
        public_6fab161 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 8
        jmp public_6f15350
        public_6fab16c : nop
        mov eax, offset public_6fbf680
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab150)
        ASM_EXPORT_ENTRY_FIRST(0x6fab161, public_6fab161)
        ASM_EXPORT_ENTRY_LAST(0x6fab16c, public_6fab16c)
    }
}

#undef public_6fab161
#undef public_6fab16c

#pragma init_seg(compiler)
extern "C" void const* const public_6fab161 = __AsmFindLabelExport(&internal_6fab150, 0x6fab161);
extern "C" void const* const public_6fab16c = __AsmFindLabelExport(&internal_6fab150, 0x6fab16c);
