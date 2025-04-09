#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4508 _public_5c4508
#define public_5c4516 _public_5c4516
#define public_5c4521 _public_5c4521

PROC_DECLARE(0x5c4500, internal_5c4500, public_5c4500);
/* CHUNK of public_589ba0 */
extern "C" NAKED register_t __cdecl internal_5c4500()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_59fa50
        public_5c4508 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x370
        jmp public_444e20
        public_5c4516 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c4521 : nop
        mov eax, offset public_5fe140
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4500)
        ASM_EXPORT_ENTRY_FIRST(0x5c4508, public_5c4508)
        ASM_EXPORT_ENTRY(0x5c4516, public_5c4516)
        ASM_EXPORT_ENTRY_LAST(0x5c4521, public_5c4521)
    }
}

#undef public_5c4508
#undef public_5c4516
#undef public_5c4521

#pragma init_seg(compiler)
extern "C" void const* const public_5c4508 = __AsmFindLabelExport(&internal_5c4500, 0x5c4508);
extern "C" void const* const public_5c4516 = __AsmFindLabelExport(&internal_5c4500, 0x5c4516);
extern "C" void const* const public_5c4521 = __AsmFindLabelExport(&internal_5c4500, 0x5c4521);
