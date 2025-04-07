#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fad28b _public_6fad28b
#define public_6fad293 _public_6fad293

PROC_DECLARE(0x6fad280, internal_6fad280, public_6fad280);
/* CHUNK of public_6f07180 */
extern "C" NAKED register_t __cdecl internal_6fad280()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fad28b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ea8cc0
        public_6fad293 : nop
        mov eax, offset public_6fc2120
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fad280)
        ASM_EXPORT_ENTRY_FIRST(0x6fad28b, public_6fad28b)
        ASM_EXPORT_ENTRY_LAST(0x6fad293, public_6fad293)
    }
}

#undef public_6fad28b
#undef public_6fad293

#pragma init_seg(compiler)
extern "C" void const* const public_6fad28b = __AsmFindLabelExport(&internal_6fad280, 0x6fad28b);
extern "C" void const* const public_6fad293 = __AsmFindLabelExport(&internal_6fad280, 0x6fad293);
