#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d980);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5ba2f8 _public_5ba2f8
#define public_5ba306 _public_5ba306
#define public_5ba314 _public_5ba314

PROC_DECLARE(0x5ba2f0, internal_5ba2f0, public_5ba2f0);
/* CHUNK of public_45b700 */
extern "C" NAKED register_t __cdecl internal_5ba2f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_59fa50
        public_5ba2f8 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x32C
        jmp public_576010
        public_5ba306 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x330
        jmp public_43d980
        public_5ba314 : nop
        mov eax, offset public_5f46e8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5ba2f0)
        ASM_EXPORT_ENTRY_FIRST(0x5ba2f8, public_5ba2f8)
        ASM_EXPORT_ENTRY(0x5ba306, public_5ba306)
        ASM_EXPORT_ENTRY_LAST(0x5ba314, public_5ba314)
    }
}

#undef public_5ba2f8
#undef public_5ba306
#undef public_5ba314

#pragma init_seg(compiler)
extern "C" void const* const public_5ba2f8 = __AsmFindLabelExport(&internal_5ba2f0, 0x5ba2f8);
extern "C" void const* const public_5ba306 = __AsmFindLabelExport(&internal_5ba2f0, 0x5ba306);
extern "C" void const* const public_5ba314 = __AsmFindLabelExport(&internal_5ba2f0, 0x5ba314);
