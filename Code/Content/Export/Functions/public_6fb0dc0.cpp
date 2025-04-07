#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f85550);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0dd9 _public_6fb0dd9
#define public_6fb0de0 _public_6fb0de0
#define public_6fb0de8 _public_6fb0de8
#define public_6fb0df4 _public_6fb0df4
#define public_6fb0dff _public_6fb0dff

PROC_DECLARE(0x6fb0dc0, internal_6fb0dc0, public_6fb0dc0);
/* CHUNK of public_6f883e0 */
extern "C" NAKED register_t __cdecl internal_6fb0dc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        sub eax, 4
        test eax, eax
        je public_6fb0dd9
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x2C], ecx
        jmp public_6fb0de0
        public_6fb0dd9 : nop
        mov dword ptr ss : [ebp-0x2C], 0
        public_6fb0de0 : nop
        mov ecx, dword ptr ss : [ebp-0x2C]
        jmp public_6ea8cc0
        public_6fb0de8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x38
        jmp dword ptr ds : [public_6fb3034]
        public_6fb0df4 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x54
        jmp public_6f85550
        public_6fb0dff : nop
        mov eax, offset public_6fc6360
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0dc0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb0dd9, public_6fb0dd9)
        ASM_EXPORT_ENTRY(0x6fb0de0, public_6fb0de0)
        ASM_EXPORT_ENTRY(0x6fb0de8, public_6fb0de8)
        ASM_EXPORT_ENTRY(0x6fb0df4, public_6fb0df4)
        ASM_EXPORT_ENTRY_LAST(0x6fb0dff, public_6fb0dff)
    }
}

#undef public_6fb0dd9
#undef public_6fb0de0
#undef public_6fb0de8
#undef public_6fb0df4
#undef public_6fb0dff

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0dd9 = __AsmFindLabelExport(&internal_6fb0dc0, 0x6fb0dd9);
extern "C" void const* const public_6fb0de0 = __AsmFindLabelExport(&internal_6fb0dc0, 0x6fb0de0);
extern "C" void const* const public_6fb0de8 = __AsmFindLabelExport(&internal_6fb0dc0, 0x6fb0de8);
extern "C" void const* const public_6fb0df4 = __AsmFindLabelExport(&internal_6fb0dc0, 0x6fb0df4);
extern "C" void const* const public_6fb0dff = __AsmFindLabelExport(&internal_6fb0dc0, 0x6fb0dff);
