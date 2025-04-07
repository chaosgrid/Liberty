#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63980bb _public_63980bb
#define public_63980c9 _public_63980c9

PROC_DECLARE(0x63980b0, internal_63980b0, public_63980b0);
/* CHUNK of public_6355890 */
extern "C" NAKED register_t __cdecl internal_63980b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63980bb : nop
        mov eax, dword ptr ss : [ebp-0x88]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63980c9 : nop
        mov eax, offset public_63b24f0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63980b0)
        ASM_EXPORT_ENTRY_FIRST(0x63980bb, public_63980bb)
        ASM_EXPORT_ENTRY_LAST(0x63980c9, public_63980c9)
    }
}

#undef public_63980bb
#undef public_63980c9

#pragma init_seg(compiler)
extern "C" void const* const public_63980bb = __AsmFindLabelExport(&internal_63980b0, 0x63980bb);
extern "C" void const* const public_63980c9 = __AsmFindLabelExport(&internal_63980b0, 0x63980c9);
