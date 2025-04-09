#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4058e0);
CLANG_FORWARD_PROC_SYMBOL(public_43d980);
CLANG_FORWARD_PROC_SYMBOL(public_4c8630);
CLANG_FORWARD_PROC_SYMBOL(public_5154f0);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be899 _public_5be899
#define public_5be8a4 _public_5be8a4
#define public_5be8ac _public_5be8ac
#define public_5be8b7 _public_5be8b7
#define public_5be8c5 _public_5be8c5
#define public_5be8d3 _public_5be8d3
#define public_5be8dc _public_5be8dc
#define public_5be8ea _public_5be8ea
#define public_5be8f8 _public_5be8f8

PROC_DECLARE(0x5be890, internal_5be890, public_5be890);
/* CHUNK of public_4e6020 */
extern "C" NAKED register_t __cdecl internal_5be890()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_5c62a4]
        public_5be899 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x28
        jmp public_5154f0
        public_5be8a4 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_4c8630
        public_5be8ac : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x38
        jmp public_59fa50
        public_5be8b7 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x364
        jmp public_43d980
        public_5be8c5 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x384
        jmp public_576010
        public_5be8d3 : nop
        mov ecx, dword ptr ss : [ebp-0x24]
        jmp dword ptr ds : [public_5c62a4]
        public_5be8dc : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x398
        jmp public_5154f0
        public_5be8ea : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x3A0
        jmp public_4058e0
        public_5be8f8 : nop
        mov eax, offset public_5f8ab8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be890)
        ASM_EXPORT_ENTRY_FIRST(0x5be899, public_5be899)
        ASM_EXPORT_ENTRY(0x5be8a4, public_5be8a4)
        ASM_EXPORT_ENTRY(0x5be8ac, public_5be8ac)
        ASM_EXPORT_ENTRY(0x5be8b7, public_5be8b7)
        ASM_EXPORT_ENTRY(0x5be8c5, public_5be8c5)
        ASM_EXPORT_ENTRY(0x5be8d3, public_5be8d3)
        ASM_EXPORT_ENTRY(0x5be8dc, public_5be8dc)
        ASM_EXPORT_ENTRY(0x5be8ea, public_5be8ea)
        ASM_EXPORT_ENTRY_LAST(0x5be8f8, public_5be8f8)
    }
}

#undef public_5be899
#undef public_5be8a4
#undef public_5be8ac
#undef public_5be8b7
#undef public_5be8c5
#undef public_5be8d3
#undef public_5be8dc
#undef public_5be8ea
#undef public_5be8f8

#pragma init_seg(compiler)
extern "C" void const* const public_5be899 = __AsmFindLabelExport(&internal_5be890, 0x5be899);
extern "C" void const* const public_5be8a4 = __AsmFindLabelExport(&internal_5be890, 0x5be8a4);
extern "C" void const* const public_5be8ac = __AsmFindLabelExport(&internal_5be890, 0x5be8ac);
extern "C" void const* const public_5be8b7 = __AsmFindLabelExport(&internal_5be890, 0x5be8b7);
extern "C" void const* const public_5be8c5 = __AsmFindLabelExport(&internal_5be890, 0x5be8c5);
extern "C" void const* const public_5be8d3 = __AsmFindLabelExport(&internal_5be890, 0x5be8d3);
extern "C" void const* const public_5be8dc = __AsmFindLabelExport(&internal_5be890, 0x5be8dc);
extern "C" void const* const public_5be8ea = __AsmFindLabelExport(&internal_5be890, 0x5be8ea);
extern "C" void const* const public_5be8f8 = __AsmFindLabelExport(&internal_5be890, 0x5be8f8);
