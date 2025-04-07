#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63982bb _public_63982bb

PROC_DECLARE(0x63982b0, internal_63982b0, public_63982b0);
/* CHUNK of public_635cbd0 */
extern "C" NAKED register_t __cdecl internal_63982b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63982bb : nop
        mov eax, offset public_63b2750
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63982b0)
        ASM_EXPORT_ENTRY_SINGLE(0x63982bb, public_63982bb)
    }
}

#undef public_63982bb

#pragma init_seg(compiler)
extern "C" void const* const public_63982bb = __AsmFindLabelExport(&internal_63982b0, 0x63982bb);
