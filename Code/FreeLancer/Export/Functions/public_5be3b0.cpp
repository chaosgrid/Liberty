#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d980);
CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_4da630);
CLANG_FORWARD_PROC_SYMBOL(public_4de750);
CLANG_FORWARD_PROC_SYMBOL(public_4de790);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be3b8 _public_5be3b8
#define public_5be3c6 _public_5be3c6
#define public_5be3d4 _public_5be3d4
#define public_5be3e2 _public_5be3e2
#define public_5be3f0 _public_5be3f0

PROC_DECLARE(0x5be3b0, internal_5be3b0, public_5be3b0);
/* CHUNK of public_4da170 */
extern "C" NAKED register_t __cdecl internal_5be3b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4da630
        public_5be3b8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x4E0
        jmp public_43d980
        public_5be3c6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x58C
        jmp public_4de750
        public_5be3d4 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x5D0
        jmp public_444e20
        public_5be3e2 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x5DC
        jmp public_4de790
        public_5be3f0 : nop
        mov eax, offset public_5f86e8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be3b0)
        ASM_EXPORT_ENTRY_FIRST(0x5be3b8, public_5be3b8)
        ASM_EXPORT_ENTRY(0x5be3c6, public_5be3c6)
        ASM_EXPORT_ENTRY(0x5be3d4, public_5be3d4)
        ASM_EXPORT_ENTRY(0x5be3e2, public_5be3e2)
        ASM_EXPORT_ENTRY_LAST(0x5be3f0, public_5be3f0)
    }
}

#undef public_5be3b8
#undef public_5be3c6
#undef public_5be3d4
#undef public_5be3e2
#undef public_5be3f0

#pragma init_seg(compiler)
extern "C" void const* const public_5be3b8 = __AsmFindLabelExport(&internal_5be3b0, 0x5be3b8);
extern "C" void const* const public_5be3c6 = __AsmFindLabelExport(&internal_5be3b0, 0x5be3c6);
extern "C" void const* const public_5be3d4 = __AsmFindLabelExport(&internal_5be3b0, 0x5be3d4);
extern "C" void const* const public_5be3e2 = __AsmFindLabelExport(&internal_5be3b0, 0x5be3e2);
extern "C" void const* const public_5be3f0 = __AsmFindLabelExport(&internal_5be3b0, 0x5be3f0);
