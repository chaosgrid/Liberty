#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262090);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63925bb _public_63925bb
#define public_63925c6 _public_63925c6

PROC_DECLARE(0x63925b0, internal_63925b0, public_63925b0);
/* CHUNK of public_6265780 */
extern "C" NAKED register_t __cdecl internal_63925b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x24]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63925bb : nop
        mov ecx, dword ptr ss : [ebp-0x24]
        add ecx, 0x10
        jmp public_6262090
        public_63925c6 : nop
        mov eax, offset public_63ab128
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63925b0)
        ASM_EXPORT_ENTRY_FIRST(0x63925bb, public_63925bb)
        ASM_EXPORT_ENTRY_LAST(0x63925c6, public_63925c6)
    }
}

#undef public_63925bb
#undef public_63925c6

#pragma init_seg(compiler)
extern "C" void const* const public_63925bb = __AsmFindLabelExport(&internal_63925b0, 0x63925bb);
extern "C" void const* const public_63925c6 = __AsmFindLabelExport(&internal_63925b0, 0x63925c6);
