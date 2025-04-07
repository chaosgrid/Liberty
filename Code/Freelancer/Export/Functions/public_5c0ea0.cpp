#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d10);
CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_532d40);
CLANG_FORWARD_PROC_SYMBOL(public_544710);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0ea8 _public_5c0ea8
#define public_5c0eb6 _public_5c0eb6
#define public_5c0ec4 _public_5c0ec4
#define public_5c0ed2 _public_5c0ed2
#define public_5c0edd _public_5c0edd

PROC_DECLARE(0x5c0ea0, internal_5c0ea0, public_5c0ea0);
/* CHUNK of public_5444a0 */
extern "C" NAKED register_t __cdecl internal_5c0ea0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_532d40
        public_5c0ea8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xE8
        jmp public_502d90
        public_5c0eb6 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xFC
        jmp public_420d10
        public_5c0ec4 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x154
        jmp public_544710
        public_5c0ed2 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_502d90
        public_5c0edd : nop
        mov eax, offset public_5fb168
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0ea0)
        ASM_EXPORT_ENTRY_FIRST(0x5c0ea8, public_5c0ea8)
        ASM_EXPORT_ENTRY(0x5c0eb6, public_5c0eb6)
        ASM_EXPORT_ENTRY(0x5c0ec4, public_5c0ec4)
        ASM_EXPORT_ENTRY(0x5c0ed2, public_5c0ed2)
        ASM_EXPORT_ENTRY_LAST(0x5c0edd, public_5c0edd)
    }
}

#undef public_5c0ea8
#undef public_5c0eb6
#undef public_5c0ec4
#undef public_5c0ed2
#undef public_5c0edd

#pragma init_seg(compiler)
extern "C" void const* const public_5c0ea8 = __AsmFindLabelExport(&internal_5c0ea0, 0x5c0ea8);
extern "C" void const* const public_5c0eb6 = __AsmFindLabelExport(&internal_5c0ea0, 0x5c0eb6);
extern "C" void const* const public_5c0ec4 = __AsmFindLabelExport(&internal_5c0ea0, 0x5c0ec4);
extern "C" void const* const public_5c0ed2 = __AsmFindLabelExport(&internal_5c0ea0, 0x5c0ed2);
extern "C" void const* const public_5c0edd = __AsmFindLabelExport(&internal_5c0ea0, 0x5c0edd);
