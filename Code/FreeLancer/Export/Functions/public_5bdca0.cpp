#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8630);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bdca8 _public_5bdca8
#define public_5bdcc0 _public_5bdcc0
#define public_5bdcc7 _public_5bdcc7
#define public_5bdccf _public_5bdccf
#define public_5bdce9 _public_5bdce9
#define public_5bdcf0 _public_5bdcf0
#define public_5bdcf8 _public_5bdcf8

PROC_DECLARE(0x5bdca0, internal_5bdca0, public_5bdca0);
/* CHUNK of public_4cf5d0 */
extern "C" NAKED register_t __cdecl internal_5bdca0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_4c8630
        public_5bdca8 : nop
        cmp dword ptr ss : [ebp-0x14], 0
        je public_5bdcc0
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 0x38
        mov dword ptr ss : [ebp-0x18], eax
        jmp public_5bdcc7
        public_5bdcc0 : nop
        mov dword ptr ss : [ebp-0x18], 0
        public_5bdcc7 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_59fa50
        public_5bdccf : nop
        cmp dword ptr ss : [ebp-0x14], 0
        je public_5bdce9
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 0x364
        mov dword ptr ss : [ebp-0x1C], eax
        jmp public_5bdcf0
        public_5bdce9 : nop
        mov dword ptr ss : [ebp-0x1C], 0
        public_5bdcf0 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_576010
        public_5bdcf8 : nop
        mov eax, offset public_5f810c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bdca0)
        ASM_EXPORT_ENTRY_FIRST(0x5bdca8, public_5bdca8)
        ASM_EXPORT_ENTRY(0x5bdcc0, public_5bdcc0)
        ASM_EXPORT_ENTRY(0x5bdcc7, public_5bdcc7)
        ASM_EXPORT_ENTRY(0x5bdccf, public_5bdccf)
        ASM_EXPORT_ENTRY(0x5bdce9, public_5bdce9)
        ASM_EXPORT_ENTRY(0x5bdcf0, public_5bdcf0)
        ASM_EXPORT_ENTRY_LAST(0x5bdcf8, public_5bdcf8)
    }
}

#undef public_5bdca8
#undef public_5bdcc0
#undef public_5bdcc7
#undef public_5bdccf
#undef public_5bdce9
#undef public_5bdcf0
#undef public_5bdcf8

#pragma init_seg(compiler)
extern "C" void const* const public_5bdca8 = __AsmFindLabelExport(&internal_5bdca0, 0x5bdca8);
extern "C" void const* const public_5bdcc0 = __AsmFindLabelExport(&internal_5bdca0, 0x5bdcc0);
extern "C" void const* const public_5bdcc7 = __AsmFindLabelExport(&internal_5bdca0, 0x5bdcc7);
extern "C" void const* const public_5bdccf = __AsmFindLabelExport(&internal_5bdca0, 0x5bdccf);
extern "C" void const* const public_5bdce9 = __AsmFindLabelExport(&internal_5bdca0, 0x5bdce9);
extern "C" void const* const public_5bdcf0 = __AsmFindLabelExport(&internal_5bdca0, 0x5bdcf0);
extern "C" void const* const public_5bdcf8 = __AsmFindLabelExport(&internal_5bdca0, 0x5bdcf8);
