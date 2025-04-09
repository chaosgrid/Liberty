#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d980);
CLANG_FORWARD_PROC_SYMBOL(public_4da630);
CLANG_FORWARD_PROC_SYMBOL(public_4e0c10);
CLANG_FORWARD_PROC_SYMBOL(public_4e5620);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be688 _public_5be688
#define public_5be696 _public_5be696
#define public_5be6a5 _public_5be6a5
#define public_5be6b3 _public_5be6b3
#define public_5be6c1 _public_5be6c1

PROC_DECLARE(0x5be680, internal_5be680, public_5be680);
/* CHUNK of public_4e08b0 */
extern "C" NAKED register_t __cdecl internal_5be680()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x5C]
        jmp public_4da630
        public_5be688 : nop
        mov ecx, dword ptr ss : [ebp-0x5C]
        add ecx, 0x4E0
        jmp public_43d980
        public_5be696 : nop
        mov ecx, dword ptr ss : [ebp-0x5C]
        add ecx, 0x528
        jmp dword ptr ds : [public_5c62c4]
        public_5be6a5 : nop
        mov ecx, dword ptr ss : [ebp-0x5C]
        add ecx, 0x560
        jmp public_4e0c10
        public_5be6b3 : nop
        mov ecx, dword ptr ss : [ebp-0x5C]
        add ecx, 0x57C
        jmp public_4e5620
        public_5be6c1 : nop
        mov eax, offset public_5f890c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be680)
        ASM_EXPORT_ENTRY_FIRST(0x5be688, public_5be688)
        ASM_EXPORT_ENTRY(0x5be696, public_5be696)
        ASM_EXPORT_ENTRY(0x5be6a5, public_5be6a5)
        ASM_EXPORT_ENTRY(0x5be6b3, public_5be6b3)
        ASM_EXPORT_ENTRY_LAST(0x5be6c1, public_5be6c1)
    }
}

#undef public_5be688
#undef public_5be696
#undef public_5be6a5
#undef public_5be6b3
#undef public_5be6c1

#pragma init_seg(compiler)
extern "C" void const* const public_5be688 = __AsmFindLabelExport(&internal_5be680, 0x5be688);
extern "C" void const* const public_5be696 = __AsmFindLabelExport(&internal_5be680, 0x5be696);
extern "C" void const* const public_5be6a5 = __AsmFindLabelExport(&internal_5be680, 0x5be6a5);
extern "C" void const* const public_5be6b3 = __AsmFindLabelExport(&internal_5be680, 0x5be6b3);
extern "C" void const* const public_5be6c1 = __AsmFindLabelExport(&internal_5be680, 0x5be6c1);
