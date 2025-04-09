#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8630);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be058 _public_5be058
#define public_5be070 _public_5be070
#define public_5be077 _public_5be077
#define public_5be07f _public_5be07f

PROC_DECLARE(0x5be050, internal_5be050, public_5be050);
/* CHUNK of public_4d4f20 */
extern "C" NAKED register_t __cdecl internal_5be050()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4c8630
        public_5be058 : nop
        cmp dword ptr ss : [ebp-0x10], 0
        je public_5be070
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x38
        mov dword ptr ss : [ebp-0x14], eax
        jmp public_5be077
        public_5be070 : nop
        mov dword ptr ss : [ebp-0x14], 0
        public_5be077 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_59fa50
        public_5be07f : nop
        mov eax, offset public_5f83f8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be050)
        ASM_EXPORT_ENTRY_FIRST(0x5be058, public_5be058)
        ASM_EXPORT_ENTRY(0x5be070, public_5be070)
        ASM_EXPORT_ENTRY(0x5be077, public_5be077)
        ASM_EXPORT_ENTRY_LAST(0x5be07f, public_5be07f)
    }
}

#undef public_5be058
#undef public_5be070
#undef public_5be077
#undef public_5be07f

#pragma init_seg(compiler)
extern "C" void const* const public_5be058 = __AsmFindLabelExport(&internal_5be050, 0x5be058);
extern "C" void const* const public_5be070 = __AsmFindLabelExport(&internal_5be050, 0x5be070);
extern "C" void const* const public_5be077 = __AsmFindLabelExport(&internal_5be050, 0x5be077);
extern "C" void const* const public_5be07f = __AsmFindLabelExport(&internal_5be050, 0x5be07f);
