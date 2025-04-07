#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd86);

#define public_6d5cfc1 _public_6d5cfc1
#define public_6d5cfcb _public_6d5cfcb
#define public_6d5cfd5 _public_6d5cfd5

PROC_DECLARE(0x6d5cfb7, internal_6d5cfb7, public_6d5cfb7);
/* CHUNK of public_6d33584 */
extern "C" NAKED register_t __cdecl internal_6d5cfb7()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push dword ptr ss : [ebp-0x54]
        call public_6d2f249
        pop ecx
        ret 
        public_6d5cfc1 : nop
        push dword ptr ss : [ebp-0x5C]
        call public_6d2f249
        pop ecx
        ret 
        public_6d5cfcb : nop
        push dword ptr ss : [ebp-0x48]
        call public_6d2f249
        pop ecx
        ret 
        public_6d5cfd5 : nop
        mov eax, offset public_6d62964
        jmp public_6d5cd86
        UNREACHABLE_TRAP(0x6d5cfb7)
        ASM_EXPORT_ENTRY_FIRST(0x6d5cfc1, public_6d5cfc1)
        ASM_EXPORT_ENTRY(0x6d5cfcb, public_6d5cfcb)
        ASM_EXPORT_ENTRY_LAST(0x6d5cfd5, public_6d5cfd5)
    }
}

#undef public_6d5cfc1
#undef public_6d5cfcb
#undef public_6d5cfd5

#pragma init_seg(compiler)
extern "C" void const* const public_6d5cfc1 = __AsmFindLabelExport(&internal_6d5cfb7, 0x6d5cfc1);
extern "C" void const* const public_6d5cfcb = __AsmFindLabelExport(&internal_6d5cfb7, 0x6d5cfcb);
extern "C" void const* const public_6d5cfd5 = __AsmFindLabelExport(&internal_6d5cfb7, 0x6d5cfd5);
