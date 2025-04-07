#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd86);

#define public_6d5d039 _public_6d5d039
#define public_6d5d043 _public_6d5d043
#define public_6d5d04d _public_6d5d04d

PROC_DECLARE(0x6d5d02f, internal_6d5d02f, public_6d5d02f);
/* CHUNK of public_6d3518a */
extern "C" NAKED register_t __cdecl internal_6d5d02f()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push dword ptr ss : [ebp-0x2C]
        call public_6d2f249
        pop ecx
        ret 
        public_6d5d039 : nop
        push dword ptr ss : [ebp-0x2C]
        call public_6d2f249
        pop ecx
        ret 
        public_6d5d043 : nop
        push dword ptr ss : [ebp-0x2C]
        call public_6d2f249
        pop ecx
        ret 
        public_6d5d04d : nop
        mov eax, offset public_6d62a14
        jmp public_6d5cd86
        UNREACHABLE_TRAP(0x6d5d02f)
        ASM_EXPORT_ENTRY_FIRST(0x6d5d039, public_6d5d039)
        ASM_EXPORT_ENTRY(0x6d5d043, public_6d5d043)
        ASM_EXPORT_ENTRY_LAST(0x6d5d04d, public_6d5d04d)
    }
}

#undef public_6d5d039
#undef public_6d5d043
#undef public_6d5d04d

#pragma init_seg(compiler)
extern "C" void const* const public_6d5d039 = __AsmFindLabelExport(&internal_6d5d02f, 0x6d5d039);
extern "C" void const* const public_6d5d043 = __AsmFindLabelExport(&internal_6d5d02f, 0x6d5d043);
extern "C" void const* const public_6d5d04d = __AsmFindLabelExport(&internal_6d5d02f, 0x6d5d04d);
