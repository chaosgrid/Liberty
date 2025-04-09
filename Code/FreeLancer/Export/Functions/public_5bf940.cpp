#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf94b _public_5bf94b
#define public_5bf956 _public_5bf956
#define public_5bf961 _public_5bf961
#define public_5bf96c _public_5bf96c

PROC_DECLARE(0x5bf940, internal_5bf940, public_5bf940);
/* CHUNK of public_503a80 */
extern "C" NAKED register_t __cdecl internal_5bf940()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x40]
        add ecx, 0x28
        jmp public_502d90
        public_5bf94b : nop
        mov ecx, dword ptr ss : [ebp-0x40]
        add ecx, 0x38
        jmp public_502d90
        public_5bf956 : nop
        mov ecx, dword ptr ss : [ebp-0x40]
        add ecx, 0x48
        jmp public_502d90
        public_5bf961 : nop
        mov ecx, dword ptr ss : [ebp-0x40]
        add ecx, 0x58
        jmp public_502d90
        public_5bf96c : nop
        mov eax, offset public_5f98b8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf940)
        ASM_EXPORT_ENTRY_FIRST(0x5bf94b, public_5bf94b)
        ASM_EXPORT_ENTRY(0x5bf956, public_5bf956)
        ASM_EXPORT_ENTRY(0x5bf961, public_5bf961)
        ASM_EXPORT_ENTRY_LAST(0x5bf96c, public_5bf96c)
    }
}

#undef public_5bf94b
#undef public_5bf956
#undef public_5bf961
#undef public_5bf96c

#pragma init_seg(compiler)
extern "C" void const* const public_5bf94b = __AsmFindLabelExport(&internal_5bf940, 0x5bf94b);
extern "C" void const* const public_5bf956 = __AsmFindLabelExport(&internal_5bf940, 0x5bf956);
extern "C" void const* const public_5bf961 = __AsmFindLabelExport(&internal_5bf940, 0x5bf961);
extern "C" void const* const public_5bf96c = __AsmFindLabelExport(&internal_5bf940, 0x5bf96c);
