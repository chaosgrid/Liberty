#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63981ab _public_63981ab

PROC_DECLARE(0x63981a0, internal_63981a0, public_63981a0);
/* CHUNK of public_635a950 */
extern "C" NAKED register_t __cdecl internal_63981a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63981ab : nop
        mov eax, offset public_63b2600
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63981a0)
        ASM_EXPORT_ENTRY_SINGLE(0x63981ab, public_63981ab)
    }
}

#undef public_63981ab

#pragma init_seg(compiler)
extern "C" void const* const public_63981ab = __AsmFindLabelExport(&internal_63981a0, 0x63981ab);
