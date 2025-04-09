#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b88bb _public_5b88bb
#define public_5b88c6 _public_5b88c6

PROC_DECLARE(0x5b88b0, internal_5b88b0, public_5b88b0);
/* CHUNK of public_417620 */
extern "C" NAKED register_t __cdecl internal_5b88b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b88bb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_444e20
        public_5b88c6 : nop
        mov eax, offset public_5f2718
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b88b0)
        ASM_EXPORT_ENTRY_FIRST(0x5b88bb, public_5b88bb)
        ASM_EXPORT_ENTRY_LAST(0x5b88c6, public_5b88c6)
    }
}

#undef public_5b88bb
#undef public_5b88c6

#pragma init_seg(compiler)
extern "C" void const* const public_5b88bb = __AsmFindLabelExport(&internal_5b88b0, 0x5b88bb);
extern "C" void const* const public_5b88c6 = __AsmFindLabelExport(&internal_5b88b0, 0x5b88c6);
