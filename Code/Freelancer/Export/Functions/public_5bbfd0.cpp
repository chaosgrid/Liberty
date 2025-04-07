#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c6200);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bbfd8 _public_5bbfd8
#define public_5bbfe6 _public_5bbfe6
#define public_5bbff5 _public_5bbff5

PROC_DECLARE(0x5bbfd0, internal_5bbfd0, public_5bbfd0);
/* CHUNK of public_477da0 */
extern "C" NAKED register_t __cdecl internal_5bbfd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_59fa50
        public_5bbfd8 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x330
        jmp public_4c6200
        public_5bbfe6 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x3A8
        jmp dword ptr ds : [public_5c60fc]
        public_5bbff5 : nop
        mov eax, offset public_5f63d0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bbfd0)
        ASM_EXPORT_ENTRY_FIRST(0x5bbfd8, public_5bbfd8)
        ASM_EXPORT_ENTRY(0x5bbfe6, public_5bbfe6)
        ASM_EXPORT_ENTRY_LAST(0x5bbff5, public_5bbff5)
    }
}

#undef public_5bbfd8
#undef public_5bbfe6
#undef public_5bbff5

#pragma init_seg(compiler)
extern "C" void const* const public_5bbfd8 = __AsmFindLabelExport(&internal_5bbfd0, 0x5bbfd8);
extern "C" void const* const public_5bbfe6 = __AsmFindLabelExport(&internal_5bbfd0, 0x5bbfe6);
extern "C" void const* const public_5bbff5 = __AsmFindLabelExport(&internal_5bbfd0, 0x5bbff5);
