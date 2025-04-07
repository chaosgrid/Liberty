#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62022d0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624933b _public_624933b
#define public_6249346 _public_6249346

PROC_DECLARE(0x6249330, internal_6249330, public_6249330);
/* CHUNK of public_622a620 */
extern "C" NAKED register_t __cdecl internal_6249330()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624933b : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 8
        jmp public_62022d0
        public_6249346 : nop
        mov eax, offset public_62522ac
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249330)
        ASM_EXPORT_ENTRY_FIRST(0x624933b, public_624933b)
        ASM_EXPORT_ENTRY_LAST(0x6249346, public_6249346)
    }
}

#undef public_624933b
#undef public_6249346

#pragma init_seg(compiler)
extern "C" void const* const public_624933b = __AsmFindLabelExport(&internal_6249330, 0x624933b);
extern "C" void const* const public_6249346 = __AsmFindLabelExport(&internal_6249330, 0x6249346);
