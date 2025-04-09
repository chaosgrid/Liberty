#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bba08 _public_5bba08
#define public_5bba22 _public_5bba22
#define public_5bba29 _public_5bba29
#define public_5bba31 _public_5bba31

PROC_DECLARE(0x5bba00, internal_5bba00, public_5bba00);
/* CHUNK of public_471790 */
extern "C" NAKED register_t __cdecl internal_5bba00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5bba08 : nop
        cmp dword ptr ss : [ebp-0x10], 0
        je public_5bba22
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x32C
        mov dword ptr ss : [ebp-0x14], eax
        jmp public_5bba29
        public_5bba22 : nop
        mov dword ptr ss : [ebp-0x14], 0
        public_5bba29 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_576010
        public_5bba31 : nop
        mov eax, offset public_5f5d00
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bba00)
        ASM_EXPORT_ENTRY_FIRST(0x5bba08, public_5bba08)
        ASM_EXPORT_ENTRY(0x5bba22, public_5bba22)
        ASM_EXPORT_ENTRY(0x5bba29, public_5bba29)
        ASM_EXPORT_ENTRY_LAST(0x5bba31, public_5bba31)
    }
}

#undef public_5bba08
#undef public_5bba22
#undef public_5bba29
#undef public_5bba31

#pragma init_seg(compiler)
extern "C" void const* const public_5bba08 = __AsmFindLabelExport(&internal_5bba00, 0x5bba08);
extern "C" void const* const public_5bba22 = __AsmFindLabelExport(&internal_5bba00, 0x5bba22);
extern "C" void const* const public_5bba29 = __AsmFindLabelExport(&internal_5bba00, 0x5bba29);
extern "C" void const* const public_5bba31 = __AsmFindLabelExport(&internal_5bba00, 0x5bba31);
