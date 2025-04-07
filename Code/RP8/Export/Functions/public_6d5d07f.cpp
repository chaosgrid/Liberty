#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd86);

#define public_6d5d089 _public_6d5d089
#define public_6d5d093 _public_6d5d093

PROC_DECLARE(0x6d5d07f, internal_6d5d07f, public_6d5d07f);
/* CHUNK of public_6d35b3f */
extern "C" NAKED register_t __cdecl internal_6d5d07f()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push dword ptr ss : [ebp-0x14]
        call public_6d2f249
        pop ecx
        ret 
        public_6d5d089 : nop
        push dword ptr ss : [ebp-0x1C]
        call public_6d2f249
        pop ecx
        ret 
        public_6d5d093 : nop
        mov eax, offset public_6d62a74
        jmp public_6d5cd86
        UNREACHABLE_TRAP(0x6d5d07f)
        ASM_EXPORT_ENTRY_FIRST(0x6d5d089, public_6d5d089)
        ASM_EXPORT_ENTRY_LAST(0x6d5d093, public_6d5d093)
    }
}

#undef public_6d5d089
#undef public_6d5d093

#pragma init_seg(compiler)
extern "C" void const* const public_6d5d089 = __AsmFindLabelExport(&internal_6d5d07f, 0x6d5d089);
extern "C" void const* const public_6d5d093 = __AsmFindLabelExport(&internal_6d5d07f, 0x6d5d093);
