#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58c1b _public_6f58c1b
#define public_6f58c26 _public_6f58c26

PROC_DECLARE(0x6f58c10, internal_6f58c10, public_6f58c10);
/* CHUNK of public_6f38250 */
extern "C" NAKED register_t __cdecl internal_6f58c10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6f57e26
        pop ecx
        ret 
        public_6f58c1b : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6f57e26
        pop ecx
        ret 
        public_6f58c26 : nop
        mov eax, offset public_6f5bda4
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58c10)
        ASM_EXPORT_ENTRY_FIRST(0x6f58c1b, public_6f58c1b)
        ASM_EXPORT_ENTRY_LAST(0x6f58c26, public_6f58c26)
    }
}

#undef public_6f58c1b
#undef public_6f58c26

#pragma init_seg(compiler)
extern "C" void const* const public_6f58c1b = __AsmFindLabelExport(&internal_6f58c10, 0x6f58c1b);
extern "C" void const* const public_6f58c26 = __AsmFindLabelExport(&internal_6f58c10, 0x6f58c26);
