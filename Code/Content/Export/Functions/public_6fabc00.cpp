#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec4d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fabc18 _public_6fabc18
#define public_6fabc1f _public_6fabc1f
#define public_6fabc27 _public_6fabc27
#define public_6fabc32 _public_6fabc32
#define public_6fabc3d _public_6fabc3d

PROC_DECLARE(0x6fabc00, internal_6fabc00, public_6fabc00);
/* CHUNK of public_6f5c9a0 */
extern "C" NAKED register_t __cdecl internal_6fabc00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        cmp dword ptr ss : [ebp-0x14], 0
        je public_6fabc18
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 4
        mov dword ptr ss : [ebp-0x18], eax
        jmp public_6fabc1f
        public_6fabc18 : nop
        mov dword ptr ss : [ebp-0x18], 0
        public_6fabc1f : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6eec4d0
        public_6fabc27 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 8
        jmp public_6f15350
        public_6fabc32 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x14
        jmp public_6eec8d0
        public_6fabc3d : nop
        mov eax, offset public_6fc0800
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fabc00)
        ASM_EXPORT_ENTRY_FIRST(0x6fabc18, public_6fabc18)
        ASM_EXPORT_ENTRY(0x6fabc1f, public_6fabc1f)
        ASM_EXPORT_ENTRY(0x6fabc27, public_6fabc27)
        ASM_EXPORT_ENTRY(0x6fabc32, public_6fabc32)
        ASM_EXPORT_ENTRY_LAST(0x6fabc3d, public_6fabc3d)
    }
}

#undef public_6fabc18
#undef public_6fabc1f
#undef public_6fabc27
#undef public_6fabc32
#undef public_6fabc3d

#pragma init_seg(compiler)
extern "C" void const* const public_6fabc18 = __AsmFindLabelExport(&internal_6fabc00, 0x6fabc18);
extern "C" void const* const public_6fabc1f = __AsmFindLabelExport(&internal_6fabc00, 0x6fabc1f);
extern "C" void const* const public_6fabc27 = __AsmFindLabelExport(&internal_6fabc00, 0x6fabc27);
extern "C" void const* const public_6fabc32 = __AsmFindLabelExport(&internal_6fabc00, 0x6fabc32);
extern "C" void const* const public_6fabc3d = __AsmFindLabelExport(&internal_6fabc00, 0x6fabc3d);
