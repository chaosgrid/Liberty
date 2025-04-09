#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5ba07b _public_5ba07b
#define public_5ba086 _public_5ba086

PROC_DECLARE(0x5ba070, internal_5ba070, public_5ba070);
/* CHUNK of public_456540 */
extern "C" NAKED register_t __cdecl internal_5ba070()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5ba07b : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5ba086 : nop
        mov eax, offset public_5f43c0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5ba070)
        ASM_EXPORT_ENTRY_FIRST(0x5ba07b, public_5ba07b)
        ASM_EXPORT_ENTRY_LAST(0x5ba086, public_5ba086)
    }
}

#undef public_5ba07b
#undef public_5ba086

#pragma init_seg(compiler)
extern "C" void const* const public_5ba07b = __AsmFindLabelExport(&internal_5ba070, 0x5ba07b);
extern "C" void const* const public_5ba086 = __AsmFindLabelExport(&internal_5ba070, 0x5ba086);
