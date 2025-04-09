#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a2d30);
CLANG_FORWARD_PROC_SYMBOL(public_555a60);
CLANG_FORWARD_PROC_SYMBOL(public_5581b0);
CLANG_FORWARD_PROC_SYMBOL(public_5594b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b98f8 _public_5b98f8
#define public_5b9904 _public_5b9904
#define public_5b990f _public_5b990f
#define public_5b991a _public_5b991a
#define public_5b9925 _public_5b9925

PROC_DECLARE(0x5b98f0, internal_5b98f0, public_5b98f0);
/* CHUNK of public_446020 */
extern "C" NAKED register_t __cdecl internal_5b98f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_5594b0
        public_5b98f8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x38
        jmp dword ptr ds : [public_5c7090]
        public_5b9904 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x4C
        jmp public_555a60
        public_5b990f : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x68
        jmp public_4a2d30
        public_5b991a : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x74
        jmp public_5581b0
        public_5b9925 : nop
        mov eax, offset public_5f3964
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b98f0)
        ASM_EXPORT_ENTRY_FIRST(0x5b98f8, public_5b98f8)
        ASM_EXPORT_ENTRY(0x5b9904, public_5b9904)
        ASM_EXPORT_ENTRY(0x5b990f, public_5b990f)
        ASM_EXPORT_ENTRY(0x5b991a, public_5b991a)
        ASM_EXPORT_ENTRY_LAST(0x5b9925, public_5b9925)
    }
}

#undef public_5b98f8
#undef public_5b9904
#undef public_5b990f
#undef public_5b991a
#undef public_5b9925

#pragma init_seg(compiler)
extern "C" void const* const public_5b98f8 = __AsmFindLabelExport(&internal_5b98f0, 0x5b98f8);
extern "C" void const* const public_5b9904 = __AsmFindLabelExport(&internal_5b98f0, 0x5b9904);
extern "C" void const* const public_5b990f = __AsmFindLabelExport(&internal_5b98f0, 0x5b990f);
extern "C" void const* const public_5b991a = __AsmFindLabelExport(&internal_5b98f0, 0x5b991a);
extern "C" void const* const public_5b9925 = __AsmFindLabelExport(&internal_5b98f0, 0x5b9925);
