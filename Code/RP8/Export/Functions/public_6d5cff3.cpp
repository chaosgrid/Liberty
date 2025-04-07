#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd86);

#define public_6d5cffd _public_6d5cffd
#define public_6d5d007 _public_6d5d007

PROC_DECLARE(0x6d5cff3, internal_6d5cff3, public_6d5cff3);
/* CHUNK of public_6d34d84 */
extern "C" NAKED register_t __cdecl internal_6d5cff3()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push dword ptr ss : [ebp-0x14]
        call public_6d2f249
        pop ecx
        ret 
        public_6d5cffd : nop
        push dword ptr ss : [ebp-0x14]
        call public_6d2f249
        pop ecx
        ret 
        public_6d5d007 : nop
        mov eax, offset public_6d629b4
        jmp public_6d5cd86
        UNREACHABLE_TRAP(0x6d5cff3)
        ASM_EXPORT_ENTRY_FIRST(0x6d5cffd, public_6d5cffd)
        ASM_EXPORT_ENTRY_LAST(0x6d5d007, public_6d5d007)
    }
}

#undef public_6d5cffd
#undef public_6d5d007

#pragma init_seg(compiler)
extern "C" void const* const public_6d5cffd = __AsmFindLabelExport(&internal_6d5cff3, 0x6d5cffd);
extern "C" void const* const public_6d5d007 = __AsmFindLabelExport(&internal_6d5cff3, 0x6d5d007);
